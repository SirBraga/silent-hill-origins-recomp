#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7E58
// Address: 0x2f7e58 - 0x2f7f78
void sub_002F7E58_0x2f7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7E58_0x2f7e58");
#endif

    switch (ctx->pc) {
        case 0x2f7e74u: goto label_2f7e74;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7efcu: goto label_2f7efc;
        default: break;
    }

    ctx->pc = 0x2f7e58u;

    // 0x2f7e58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f7e5c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2f7e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2f7e60: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f7e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2f7e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f7e6c: 0xc0bdf88  jal         func_2F7E20
    ctx->pc = 0x2F7E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E74u);
    ctx->pc = 0x2F7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E6Cu;
    // 0x2f7e70: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7E20u, 0x2F7E6Cu, 0x2F7E74u)) {
        return;
    }
    ctx->pc = 0x2F7E74u;
label_2f7e74:
    // 0x2f7e74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f7e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e78: 0x6400039  bltz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F7E78u;
    {
        const bool branch_taken_0x2f7e78 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2F7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E78u;
        // 0x2f7e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e78) {
            ctx->pc = 0x2F7F60u;
            goto label_2f7f60;
        }
    }
    ctx->pc = 0x2F7E80u;
    // 0x2f7e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f7e84: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x2f7e84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x2f7e88: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2f7e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2f7e8c: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f7e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f7e90: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2f7e90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f7e94: 0x261035c0  addiu       $s0, $s0, 0x35C0
    ctx->pc = 0x2f7e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f7e98: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f7e9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f7e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7ea0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f7ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ea8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2f7ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2f7eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7eb0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2f7eb4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f7eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f7eb8: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2f7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2f7ebc: 0x252a0210  addiu       $t2, $t1, 0x210
    ctx->pc = 0x2f7ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 528));
    // 0x2f7ec0: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x2f7ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f7ec4: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x2f7ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f7ec8: 0x85430008  lh          $v1, 0x8($t2)
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x6B0218u));
    // 0x2f7ecc: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x2f7eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7ed0: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x2f7ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7ed4: 0xa7a3001c  sh          $v1, 0x1C($sp)
    ctx->pc = 0x2f7ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f7ed8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2f7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2f7edc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7ee0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f7ee4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7EE4u;
    SET_GPR_U32(ctx, 31, 0x2F7EECu);
    ctx->pc = 0x2F7EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7EE4u;
    // 0x2f7ee8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7EE4u, 0x2F7EECu)) {
        return;
    }
    ctx->pc = 0x2F7EECu;
label_2f7eec:
    // 0x2f7eec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ef0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ef4: 0xc0be0d6  jal         func_2F8358
    ctx->pc = 0x2F7EF4u;
    SET_GPR_U32(ctx, 31, 0x2F7EFCu);
    ctx->pc = 0x2F7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7EF4u;
    // 0x2f7ef8: 0x24a60080  addiu       $a2, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8358u, 0x2F7EF4u, 0x2F7EFCu)) {
        return;
    }
    ctx->pc = 0x2F7EFCu;
label_2f7efc:
    // 0x2f7efc: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7f00: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f7f04: 0x2433018  mult        $a2, $s2, $v1
    ctx->pc = 0x2f7f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f7f08: 0x248714c8  addiu       $a3, $a0, 0x14C8
    ctx->pc = 0x2f7f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5320));
    // 0x2f7f0c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2f7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f7f10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7F10u;
    {
        const bool branch_taken_0x2f7f10 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F10u;
        // 0x2f7f14: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f10) {
            ctx->pc = 0x2F7F20u;
            goto label_2f7f20;
        }
    }
    ctx->pc = 0x2F7F18u;
    // 0x2f7f18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7F18u;
    {
        const bool branch_taken_0x2f7f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F18u;
        // 0x2f7f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f18) {
            ctx->pc = 0x2F7F60u;
            goto label_2f7f60;
        }
    }
    ctx->pc = 0x2F7F20u;
label_2f7f20:
    // 0x2f7f20: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2f7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f7f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7f28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2f7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f7f2c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2f7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f7f30: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2f7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2f7f34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f7f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f38: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2f7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2f7f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f40: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2f7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f7f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f7f4c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7f50: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2f7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2f7f54: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2f7f58: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2f7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2f7f5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f7f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f60:
    // 0x2f7f60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7f64: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f7f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7f68: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2f7f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7f6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f7f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F70u;
        // 0x2f7f74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7F78u;
}

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

// Function: sub_00257C60
// Address: 0x257c60 - 0x257d20
void sub_00257C60_0x257c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257C60_0x257c60");
#endif

    switch (ctx->pc) {
        case 0x257c60u: goto label_257c60;
        case 0x257c64u: goto label_257c64;
        case 0x257c68u: goto label_257c68;
        case 0x257c6cu: goto label_257c6c;
        case 0x257c70u: goto label_257c70;
        case 0x257c74u: goto label_257c74;
        case 0x257c78u: goto label_257c78;
        case 0x257c7cu: goto label_257c7c;
        case 0x257c80u: goto label_257c80;
        case 0x257c84u: goto label_257c84;
        case 0x257c88u: goto label_257c88;
        case 0x257c8cu: goto label_257c8c;
        case 0x257c90u: goto label_257c90;
        case 0x257c94u: goto label_257c94;
        case 0x257c98u: goto label_257c98;
        case 0x257c9cu: goto label_257c9c;
        case 0x257ca0u: goto label_257ca0;
        case 0x257ca4u: goto label_257ca4;
        case 0x257ca8u: goto label_257ca8;
        case 0x257cacu: goto label_257cac;
        case 0x257cb0u: goto label_257cb0;
        case 0x257cb4u: goto label_257cb4;
        case 0x257cb8u: goto label_257cb8;
        case 0x257cbcu: goto label_257cbc;
        case 0x257cc0u: goto label_257cc0;
        case 0x257cc4u: goto label_257cc4;
        case 0x257cc8u: goto label_257cc8;
        case 0x257cccu: goto label_257ccc;
        case 0x257cd0u: goto label_257cd0;
        case 0x257cd4u: goto label_257cd4;
        case 0x257cd8u: goto label_257cd8;
        case 0x257cdcu: goto label_257cdc;
        case 0x257ce0u: goto label_257ce0;
        case 0x257ce4u: goto label_257ce4;
        case 0x257ce8u: goto label_257ce8;
        case 0x257cecu: goto label_257cec;
        case 0x257cf0u: goto label_257cf0;
        case 0x257cf4u: goto label_257cf4;
        case 0x257cf8u: goto label_257cf8;
        case 0x257cfcu: goto label_257cfc;
        case 0x257d00u: goto label_257d00;
        case 0x257d04u: goto label_257d04;
        case 0x257d08u: goto label_257d08;
        case 0x257d0cu: goto label_257d0c;
        case 0x257d10u: goto label_257d10;
        case 0x257d14u: goto label_257d14;
        case 0x257d18u: goto label_257d18;
        case 0x257d1cu: goto label_257d1c;
        default: break;
    }

    ctx->pc = 0x257c60u;

label_257c60:
    // 0x257c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_257c64:
    // 0x257c64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_257c68:
    // 0x257c68: 0x8c633fc8  lw          $v1, 0x3FC8($v1)
    ctx->pc = 0x257c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16328)));
label_257c6c:
    // 0x257c6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_257c70:
    // 0x257c70: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x257c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_257c74:
    // 0x257c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_257c78:
    // 0x257c78: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x257c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_257c7c:
    // 0x257c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257c80:
    // 0x257c80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x257c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_257c84:
    // 0x257c84: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x257c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_257c88:
    // 0x257c88: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x257c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_257c8c:
    // 0x257c8c: 0x40f809  jalr        $v0
label_257c90:
    if (ctx->pc == 0x257C90u) {
        ctx->pc = 0x257C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C8Cu;
        // 0x257c90: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257C94u;
        goto label_257c94;
    }
    ctx->pc = 0x257C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257C94u);
        ctx->pc = 0x257C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C8Cu;
        // 0x257c90: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257C8Cu, 0x257C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257C94u;
label_257c94:
    // 0x257c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257c98:
    // 0x257c98: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_257c9c:
    if (ctx->pc == 0x257C9Cu) {
        ctx->pc = 0x257C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C98u;
        // 0x257c9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257CA0u;
        goto label_257ca0;
    }
    ctx->pc = 0x257C98u;
    {
        const bool branch_taken_0x257c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C98u;
        // 0x257c9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c98) {
            ctx->pc = 0x257D08u;
            goto label_257d08;
        }
    }
    ctx->pc = 0x257CA0u;
label_257ca0:
    // 0x257ca0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x257ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_257ca4:
    // 0x257ca4: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x257ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_257ca8:
    // 0x257ca8: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_257cac:
    // 0x257cac: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x257cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_257cb0:
    // 0x257cb0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x257cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_257cb4:
    // 0x257cb4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x257cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_257cb8:
    // 0x257cb8: 0x24841240  addiu       $a0, $a0, 0x1240
    ctx->pc = 0x257cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
label_257cbc:
    // 0x257cbc: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x257cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_257cc0:
    // 0x257cc0: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x257cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_257cc4:
    // 0x257cc4: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x257cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_257cc8:
    // 0x257cc8: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x257cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_257ccc:
    // 0x257ccc: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x257cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_257cd0:
    // 0x257cd0: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x257cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_257cd4:
    // 0x257cd4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x257cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_257cd8:
    // 0x257cd8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x257cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_257cdc:
    // 0x257cdc: 0x24c81258  addiu       $t0, $a2, 0x1258
    ctx->pc = 0x257cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4696));
label_257ce0:
    // 0x257ce0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x257ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_257ce4:
    // 0x257ce4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x257ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_257ce8:
    // 0x257ce8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x257ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_257cec:
    // 0x257cec: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x257cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_257cf0:
    // 0x257cf0: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x257cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_257cf4:
    // 0x257cf4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x257cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_257cf8:
    // 0x257cf8: 0xc093958  jal         func_24E560
label_257cfc:
    if (ctx->pc == 0x257CFCu) {
        ctx->pc = 0x257CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CF8u;
        // 0x257cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D00u;
        goto label_257d00;
    }
    ctx->pc = 0x257CF8u;
    SET_GPR_U32(ctx, 31, 0x257D00u);
    ctx->pc = 0x257CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CF8u;
    // 0x257cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x257CF8u, 0x257D00u)) {
        return;
    }
    ctx->pc = 0x257D00u;
label_257d00:
    // 0x257d00: 0x10000002  b           . + 4 + (0x2 << 2)
label_257d04:
    if (ctx->pc == 0x257D04u) {
        ctx->pc = 0x257D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D00u;
        // 0x257d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D08u;
        goto label_257d08;
    }
    ctx->pc = 0x257D00u;
    {
        const bool branch_taken_0x257d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D00u;
        // 0x257d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d00) {
            ctx->pc = 0x257D0Cu;
            goto label_257d0c;
        }
    }
    ctx->pc = 0x257D08u;
label_257d08:
    // 0x257d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257d0c:
    // 0x257d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_257d10:
    // 0x257d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_257d14:
    // 0x257d14: 0x3e00008  jr          $ra
label_257d18:
    if (ctx->pc == 0x257D18u) {
        ctx->pc = 0x257D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D14u;
        // 0x257d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257D1Cu;
        goto label_257d1c;
    }
    ctx->pc = 0x257D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D14u;
        // 0x257d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257D1Cu;
label_257d1c:
    // 0x257d1c: 0x0  nop
    ctx->pc = 0x257d1cu;
    // NOP
    ctx->pc = 0x257d20u;
}

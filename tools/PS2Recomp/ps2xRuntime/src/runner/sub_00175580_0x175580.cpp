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

// Function: sub_00175580
// Address: 0x175580 - 0x175638
void sub_00175580_0x175580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175580_0x175580");
#endif

    switch (ctx->pc) {
        case 0x1755b8u: goto label_1755b8;
        case 0x1755c0u: goto label_1755c0;
        case 0x17560cu: goto label_17560c;
        default: break;
    }

    ctx->pc = 0x175580u;

    // 0x175580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x175584: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x175584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x175588: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x175588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17558c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17558cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175590: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x175590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x175594: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x175598: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x175598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17559c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x17559cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1755a0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1755a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1755a4: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x1755a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x1755a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1755a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1755ac: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x1755b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1755b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755b4: 0x0  nop
    ctx->pc = 0x1755b4u;
    // NOP
label_1755b8:
    // 0x1755b8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1755B8u;
    SET_GPR_U32(ctx, 31, 0x1755C0u);
    ctx->pc = 0x1755BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755B8u;
    // 0x1755bc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1755B8u, 0x1755C0u)) {
        return;
    }
    ctx->pc = 0x1755C0u;
label_1755c0:
    // 0x1755c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1755c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1755c4: 0x8e8542e0  lw          $a1, 0x42E0($s4)
    ctx->pc = 0x1755c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17120)));
    // 0x1755c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1755c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1755cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1755ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1755d0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1755d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1755d4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1755d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1755d8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1755dc: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x1755dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1755e0: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x1755e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1755e4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1755e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1755e8: 0x8e641a70  lw          $a0, 0x1A70($s3)
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x1755ec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1755ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1755f0: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1755F0u;
    {
        const bool branch_taken_0x1755f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1755F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755F0u;
        // 0x1755f4: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755f0) {
            ctx->pc = 0x17560Cu;
            goto label_17560c;
        }
    }
    ctx->pc = 0x1755F8u;
    // 0x1755f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1755f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1755fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755FCu;
    {
        const bool branch_taken_0x1755fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755FCu;
        // 0x175600: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755fc) {
            ctx->pc = 0x17560Cu;
            goto label_17560c;
        }
    }
    ctx->pc = 0x175604u;
    // 0x175604: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x175604u;
    SET_GPR_U32(ctx, 31, 0x17560Cu);
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x175604u, 0x17560Cu)) {
        return;
    }
    ctx->pc = 0x17560Cu;
label_17560c:
    // 0x17560c: 0x621ffea  bgez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17560Cu;
    {
        const bool branch_taken_0x17560c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x175610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17560Cu;
        // 0x175610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17560c) {
            ctx->pc = 0x1755B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1755b8;
        }
    }
    ctx->pc = 0x175614u;
    // 0x175614: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x175614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x175618: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x175618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17561c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17561cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175620: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x175620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175624: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x175624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17562c: 0x3e00008  jr          $ra
    ctx->pc = 0x17562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17562Cu;
        // 0x175630: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175634u;
    // 0x175634: 0x0  nop
    ctx->pc = 0x175634u;
    // NOP
    ctx->pc = 0x175638u;
}

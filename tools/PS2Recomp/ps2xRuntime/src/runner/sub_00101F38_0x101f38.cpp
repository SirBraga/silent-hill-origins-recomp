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

// Function: sub_00101F38
// Address: 0x101f38 - 0x102008
void sub_00101F38_0x101f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101F38_0x101f38");
#endif

    switch (ctx->pc) {
        case 0x101fc0u: goto label_101fc0;
        case 0x101fd0u: goto label_101fd0;
        default: break;
    }

    ctx->pc = 0x101f38u;

    // 0x101f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101f3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x101f40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101f44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101f54: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x101f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f58: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x101f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x101f5c: 0x26050188  addiu       $a1, $s0, 0x188
    ctx->pc = 0x101f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x101f60: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x101f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x101f64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x101f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f68: 0xae0801a8  sw          $t0, 0x1A8($s0)
    ctx->pc = 0x101f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 8));
    // 0x101f6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x101f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101f70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x101f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x101f74: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x101f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x101f78: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101f7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101f80: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x101f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x101f84: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x101f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x101f88: 0xae070194  sw          $a3, 0x194($s0)
    ctx->pc = 0x101f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 7));
    // 0x101f8c: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x101f90: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x101f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x101f94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101F94u;
    {
        const bool branch_taken_0x101f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F94u;
        // 0x101f98: 0xae050190  sw          $a1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f94) {
            ctx->pc = 0x101FA0u;
            goto label_101fa0;
        }
    }
    ctx->pc = 0x101F9Cu;
    // 0x101f9c: 0xae05019c  sw          $a1, 0x19C($s0)
    ctx->pc = 0x101f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 5));
label_101fa0:
    // 0x101fa0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x101fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101fa4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x101fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x101fa8: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x101fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101fac: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x101facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x101fb0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x101fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x101fb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x101fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101fb8: 0xc09d55c  jal         func_275570
    ctx->pc = 0x101FB8u;
    SET_GPR_U32(ctx, 31, 0x101FC0u);
    ctx->pc = 0x101FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FB8u;
    // 0x101fbc: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x101FB8u, 0x101FC0u)) {
        return;
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x101fc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x101fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x101fc8: 0xc09d926  jal         func_276498
    ctx->pc = 0x101FC8u;
    SET_GPR_U32(ctx, 31, 0x101FD0u);
    ctx->pc = 0x101FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FC8u;
    // 0x101fcc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x101FC8u, 0x101FD0u)) {
        return;
    }
    ctx->pc = 0x101FD0u;
label_101fd0:
    // 0x101fd0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x101fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x101fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fe0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x101fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x101fe4: 0xae1101e4  sw          $s1, 0x1E4($s0)
    ctx->pc = 0x101fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 17));
    // 0x101fe8: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x101fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x101fec: 0xae04019c  sw          $a0, 0x19C($s0)
    ctx->pc = 0x101fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 4));
    // 0x101ff0: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x101ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x101ff4: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x101ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
    // 0x101ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102000: 0x3e00008  jr          $ra
    ctx->pc = 0x102000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102000u;
        // 0x102004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102008u;
}

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

// Function: sub_00183E40
// Address: 0x183e40 - 0x183ee8
void sub_00183E40_0x183e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183E40_0x183e40");
#endif

    switch (ctx->pc) {
        case 0x183e68u: goto label_183e68;
        case 0x183e78u: goto label_183e78;
        case 0x183e80u: goto label_183e80;
        case 0x183e98u: goto label_183e98;
        case 0x183ebcu: goto label_183ebc;
        case 0x183ed4u: goto label_183ed4;
        default: break;
    }

    ctx->pc = 0x183e40u;

    // 0x183e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183e44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x183e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x183e48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x183e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x183e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183e54: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x183e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x183e58: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183e5c: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x183e60: 0xc09d55c  jal         func_275570
    ctx->pc = 0x183E60u;
    SET_GPR_U32(ctx, 31, 0x183E68u);
    ctx->pc = 0x183E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E60u;
    // 0x183e64: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x183E60u, 0x183E68u)) {
        return;
    }
    ctx->pc = 0x183E68u;
label_183e68:
    // 0x183e68: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183e6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x183e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e70: 0xc09d926  jal         func_276498
    ctx->pc = 0x183E70u;
    SET_GPR_U32(ctx, 31, 0x183E78u);
    ctx->pc = 0x183E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E70u;
    // 0x183e74: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x183E70u, 0x183E78u)) {
        return;
    }
    ctx->pc = 0x183E78u;
label_183e78:
    // 0x183e78: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x183E78u;
    SET_GPR_U32(ctx, 31, 0x183E80u);
    ctx->pc = 0x183E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E78u;
    // 0x183e7c: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x183E78u, 0x183E80u)) {
        return;
    }
    ctx->pc = 0x183E80u;
label_183e80:
    // 0x183e80: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x183e84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183e8c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x183e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x183e90: 0xc0446c6  jal         func_111B18
    ctx->pc = 0x183E90u;
    SET_GPR_U32(ctx, 31, 0x183E98u);
    ctx->pc = 0x183E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E90u;
    // 0x183e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x183E90u, 0x183E98u)) {
        return;
    }
    ctx->pc = 0x183E98u;
label_183e98:
    // 0x183e98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x183e9c: 0x26100084  addiu       $s0, $s0, 0x84
    ctx->pc = 0x183e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x183ea0: 0x8c4346c0  lw          $v1, 0x46C0($v0)
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B46C0u));
    // 0x183ea4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183eac: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x183eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x183eb0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x183eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x183eb4: 0xc07fc26  jal         func_1FF098
    ctx->pc = 0x183EB4u;
    SET_GPR_U32(ctx, 31, 0x183EBCu);
    ctx->pc = 0x183EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EB4u;
    // 0x183eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x183EB4u, 0x183EBCu)) {
        return;
    }
    ctx->pc = 0x183EBCu;
label_183ebc:
    // 0x183ebc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x183ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ec4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x183ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ecc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x183ECCu;
    SET_GPR_U32(ctx, 31, 0x183ED4u);
    ctx->pc = 0x183ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183ECCu;
    // 0x183ed0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x183ECCu, 0x183ED4u)) {
        return;
    }
    ctx->pc = 0x183ED4u;
label_183ed4:
    // 0x183ed4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x183ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183ed8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x183EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EE0u;
        // 0x183ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183EE8u;
}

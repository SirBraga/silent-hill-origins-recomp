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

// Function: sub_0019B958
// Address: 0x19b958 - 0x19ba48
void sub_0019B958_0x19b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B958_0x19b958");
#endif

    switch (ctx->pc) {
        case 0x19b9a4u: goto label_19b9a4;
        case 0x19b9dcu: goto label_19b9dc;
        case 0x19ba30u: goto label_19ba30;
        default: break;
    }

    ctx->pc = 0x19b958u;

    // 0x19b958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b960: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19b964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b96c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x19b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x19b970: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B970u;
    {
        const bool branch_taken_0x19b970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B970u;
        // 0x19b974: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b970) {
            ctx->pc = 0x19B994u;
            goto label_19b994;
        }
    }
    ctx->pc = 0x19B978u;
    // 0x19b978: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x19B978u;
    {
        const bool branch_taken_0x19b978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b978) {
            ctx->pc = 0x19B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B978u;
            // 0x19b97c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19B980u;
    // 0x19b980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b984: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B984u;
    {
        const bool branch_taken_0x19b984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b984) {
            ctx->pc = 0x19B988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B984u;
            // 0x19b988: 0xc60c0064  lwc1        $f12, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B9D0u;
            goto label_19b9d0;
        }
    }
    ctx->pc = 0x19B98Cu;
    // 0x19b98c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19B98Cu;
    {
        const bool branch_taken_0x19b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B98Cu;
        // 0x19b990: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b98c) {
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19B994u;
label_19b994:
    // 0x19b994: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19b994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b998: 0xc60d0074  lwc1        $f13, 0x74($s0)
    ctx->pc = 0x19b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b99c: 0xc076618  jal         func_1D9860
    ctx->pc = 0x19B99Cu;
    SET_GPR_U32(ctx, 31, 0x19B9A4u);
    ctx->pc = 0x19B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B99Cu;
    // 0x19b9a0: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9860u, 0x19B99Cu, 0x19B9A4u)) {
        return;
    }
    ctx->pc = 0x19B9A4u;
label_19b9a4:
    // 0x19b9a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19B9A4u;
    {
        const bool branch_taken_0x19b9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9A4u;
        // 0x19b9a8: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9a4) {
            ctx->pc = 0x19BA38u;
            goto label_19ba38;
        }
    }
    ctx->pc = 0x19B9ACu;
    // 0x19b9ac: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b9b0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x19b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x19b9b4: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x19b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b9b8: 0xe4608150  swc1        $f0, -0x7EB0($v1)
    ctx->pc = 0x19b9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294934864), bits); }
    // 0x19b9bc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19b9c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B9C0u;
    {
        const bool branch_taken_0x19b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9C0u;
        // 0x19b9c4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9c0) {
            ctx->pc = 0x19BA04u;
            goto label_19ba04;
        }
    }
    ctx->pc = 0x19B9C8u;
    // 0x19b9c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19B9C8u;
    {
        const bool branch_taken_0x19b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9C8u;
        // 0x19b9cc: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9c8) {
            ctx->pc = 0x19BA38u;
            goto label_19ba38;
        }
    }
    ctx->pc = 0x19B9D0u;
label_19b9d0:
    // 0x19b9d0: 0xc60d0074  lwc1        $f13, 0x74($s0)
    ctx->pc = 0x19b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b9d4: 0xc076618  jal         func_1D9860
    ctx->pc = 0x19B9D4u;
    SET_GPR_U32(ctx, 31, 0x19B9DCu);
    ctx->pc = 0x19B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9D4u;
    // 0x19b9d8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9860u, 0x19B9D4u, 0x19B9DCu)) {
        return;
    }
    ctx->pc = 0x19B9DCu;
label_19b9dc:
    // 0x19b9dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B9DCu;
    {
        const bool branch_taken_0x19b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9DCu;
        // 0x19b9e0: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9dc) {
            ctx->pc = 0x19BA38u;
            goto label_19ba38;
        }
    }
    ctx->pc = 0x19B9E4u;
    // 0x19b9e4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b9e8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x19b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x19b9ec: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x19b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b9f0: 0xe4608150  swc1        $f0, -0x7EB0($v1)
    ctx->pc = 0x19b9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294934864), bits); }
    // 0x19b9f4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19b9f8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19B9F8u;
    {
        const bool branch_taken_0x19b9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b9f8) {
            ctx->pc = 0x19B9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9F8u;
            // 0x19b9fc: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA38u;
            goto label_19ba38;
        }
    }
    ctx->pc = 0x19BA00u;
    // 0x19ba00: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_19ba04:
    // 0x19ba04: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19ba08: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x19ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x19ba0c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19BA0Cu;
    {
        const bool branch_taken_0x19ba0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA0Cu;
        // 0x19ba10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba0c) {
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19BA14u;
    // 0x19ba14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BA18u;
    {
        const bool branch_taken_0x19ba18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA18u;
        // 0x19ba1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba18) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19BA20u;
    // 0x19ba20: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19ba24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba28: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19BA28u;
    SET_GPR_U32(ctx, 31, 0x19BA30u);
    ctx->pc = 0x19BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA28u;
    // 0x19ba2c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19BA28u, 0x19BA30u)) {
        return;
    }
    ctx->pc = 0x19BA30u;
label_19ba30:
    // 0x19ba30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BA30u;
    {
        const bool branch_taken_0x19ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA30u;
        // 0x19ba34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba30) {
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19BA38u;
label_19ba38:
    // 0x19ba38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ba38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ba3c:
    // 0x19ba3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ba40:
    // 0x19ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA40u;
        // 0x19ba44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BA48u;
}

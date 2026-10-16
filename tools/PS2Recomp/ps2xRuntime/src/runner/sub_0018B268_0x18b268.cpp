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

// Function: sub_0018B268
// Address: 0x18b268 - 0x18b320
void sub_0018B268_0x18b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B268_0x18b268");
#endif

    switch (ctx->pc) {
        case 0x18b290u: goto label_18b290;
        case 0x18b2a0u: goto label_18b2a0;
        case 0x18b310u: goto label_18b310;
        default: break;
    }

    ctx->pc = 0x18b268u;

    // 0x18b268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b26c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x18b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x18b270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b278: 0x8c4386d0  lw          $v1, -0x7930($v0)
    ctx->pc = 0x18b278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F86D0u));
    // 0x18b27c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b280: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B280u;
        // 0x18b284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B2F8u;
            goto label_18b2f8;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0xc062a2a  jal         func_18A8A8
    ctx->pc = 0x18B288u;
    SET_GPR_U32(ctx, 31, 0x18B290u);
    ctx->pc = 0x18A8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A8A8u, 0x18B288u, 0x18B290u)) {
        return;
    }
    ctx->pc = 0x18B290u;
label_18b290:
    // 0x18b290: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18b294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b298: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18B298u;
    SET_GPR_U32(ctx, 31, 0x18B2A0u);
    ctx->pc = 0x18B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B298u;
    // 0x18b29c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18B298u, 0x18B2A0u)) {
        return;
    }
    ctx->pc = 0x18B2A0u;
label_18b2a0:
    // 0x18b2a0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18b2a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b2a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b2ac: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x18b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x18b2b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b2b4: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x18b2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x18b2b8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x18b2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x18b2bc: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x18b2bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x18b2c0: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x18b2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x18b2c4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x18b2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x18b2c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18b2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b2cc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x18b2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x18b2d0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x18b2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x18b2d4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x18b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x18b2d8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x18b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x18b2dc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x18b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x18b2e0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x18b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x18b2e4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x18b2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x18b2e8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x18b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x18b2ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18b2f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B2F0u;
    {
        const bool branch_taken_0x18b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2F0u;
        // 0x18b2f4: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2f0) {
            ctx->pc = 0x18B310u;
            goto label_18b310;
        }
    }
    ctx->pc = 0x18B2F8u;
label_18b2f8:
    // 0x18b2f8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x18b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x18b2fc: 0x8c4386c8  lw          $v1, -0x7938($v0)
    ctx->pc = 0x18b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F86C8u));
    // 0x18b300: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B300u;
    {
        const bool branch_taken_0x18b300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b300) {
            ctx->pc = 0x18B304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B300u;
            // 0x18b304: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B314u;
            goto label_18b314;
        }
    }
    ctx->pc = 0x18B308u;
    // 0x18b308: 0xc06293a  jal         func_18A4E8
    ctx->pc = 0x18B308u;
    SET_GPR_U32(ctx, 31, 0x18B310u);
    ctx->pc = 0x18B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B308u;
    // 0x18b30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A4E8u, 0x18B308u, 0x18B310u)) {
        return;
    }
    ctx->pc = 0x18B310u;
label_18b310:
    // 0x18b310: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b314:
    // 0x18b314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b318: 0x3e00008  jr          $ra
    ctx->pc = 0x18B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B318u;
        // 0x18b31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B320u;
}

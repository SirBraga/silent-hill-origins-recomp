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

// Function: sub_0018B320
// Address: 0x18b320 - 0x18b3a8
void sub_0018B320_0x18b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B320_0x18b320");
#endif

    switch (ctx->pc) {
        case 0x18b334u: goto label_18b334;
        case 0x18b344u: goto label_18b344;
        default: break;
    }

    ctx->pc = 0x18b320u;

    // 0x18b320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b324: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b32c: 0xc062a2a  jal         func_18A8A8
    ctx->pc = 0x18B32Cu;
    SET_GPR_U32(ctx, 31, 0x18B334u);
    ctx->pc = 0x18B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B32Cu;
    // 0x18b330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A8A8u, 0x18B32Cu, 0x18B334u)) {
        return;
    }
    ctx->pc = 0x18B334u;
label_18b334:
    // 0x18b334: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x18b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18b338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b33c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18B33Cu;
    SET_GPR_U32(ctx, 31, 0x18B344u);
    ctx->pc = 0x18B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B33Cu;
    // 0x18b340: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18B33Cu, 0x18B344u)) {
        return;
    }
    ctx->pc = 0x18B344u;
label_18b344:
    // 0x18b344: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18b348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b34c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b350: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x18b354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b358: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x18b358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x18b35c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x18b35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x18b360: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x18b360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x18b364: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x18b364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x18b368: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x18b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x18b36c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b370: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x18b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x18b374: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x18b374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x18b378: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x18b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x18b37c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x18b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x18b380: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x18b380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x18b384: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x18b384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x18b388: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x18b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x18b38c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x18b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x18b390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b394: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18b398: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x18b398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x18b39c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3A0u;
        // 0x18b3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B3A8u;
}

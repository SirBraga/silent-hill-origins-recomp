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

// Function: sub_0022D380
// Address: 0x22d380 - 0x22d460
void sub_0022D380_0x22d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D380_0x22d380");
#endif

    switch (ctx->pc) {
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d41cu: goto label_22d41c;
        default: break;
    }

    ctx->pc = 0x22d380u;

    // 0x22d380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d384: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22d388: 0x94843f10  lhu         $a0, 0x3F10($a0)
    ctx->pc = 0x22d388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6B3F10u));
    // 0x22d38c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22d390: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x22d394: 0x96943f12  lhu         $s4, 0x3F12($s4)
    ctx->pc = 0x22d394u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22d398: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22d39c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22d3a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22d3a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22d3a8: 0x10940024  beq         $a0, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x22D3A8u;
    {
        const bool branch_taken_0x22d3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x22D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3A8u;
        // 0x22d3ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3a8) {
            ctx->pc = 0x22D43Cu;
            goto label_22d43c;
        }
    }
    ctx->pc = 0x22D3B0u;
    // 0x22d3b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22d3b4: 0xa4203f10  sh          $zero, 0x3F10($at)
    ctx->pc = 0x22d3b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F10u, _value); } while (0);
    // 0x22d3b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22d3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22d3bc: 0xa4203f12  sh          $zero, 0x3F12($at)
    ctx->pc = 0x22d3bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F12u, _value); } while (0);
    // 0x22d3c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22d3c4: 0x0  nop
    ctx->pc = 0x22d3c4u;
    // NOP
label_22d3c8:
    // 0x22d3c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22d3cc: 0x8c423f0c  lw          $v0, 0x3F0C($v0)
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F0Cu));
    // 0x22d3d0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x22d3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3d4: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22d3d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d3dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d3e0: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x22d3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22d3e4: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D3E4u;
    {
        const bool branch_taken_0x22d3e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x22D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3E4u;
        // 0x22d3e8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3e4) {
            ctx->pc = 0x22D424u;
            goto label_22d424;
        }
    }
    ctx->pc = 0x22D3ECu;
    // 0x22d3ec: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x22d3ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d3f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22d3f4: 0x8c423f0c  lw          $v0, 0x3F0C($v0)
    ctx->pc = 0x22d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F0Cu));
label_22d3f8:
    // 0x22d3f8: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x22d3f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22d3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d400: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x22d400u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16));
    // 0x22d404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22d408: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x22d408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x22d40c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d410: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x22d410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x22d414: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x22D414u;
    SET_GPR_U32(ctx, 31, 0x22D41Cu);
    ctx->pc = 0x22D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D414u;
    // 0x22d418: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x22D414u, 0x22D41Cu)) {
        return;
    }
    ctx->pc = 0x22D41Cu;
label_22d41c:
    // 0x22d41c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22D41Cu;
    {
        const bool branch_taken_0x22d41c = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x22D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D41Cu;
        // 0x22d420: 0x8f828e9c  lw          $v0, -0x7164($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d41c) {
            ctx->pc = 0x22D3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d3f8;
        }
    }
    ctx->pc = 0x22D424u;
label_22d424:
    // 0x22d424: 0x97828406  lhu         $v0, -0x7BFA($gp)
    ctx->pc = 0x22d424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935558)));
    // 0x22d428: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x22d428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x22d42c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x22d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x22d430: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x22d430u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x22d434: 0x1494ffe4  bne         $a0, $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x22D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D434u;
        // 0x22d438: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d3c8;
        }
    }
    ctx->pc = 0x22D43Cu;
label_22d43c:
    // 0x22d43c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22d43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d440: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22d440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22d444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d448: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22d448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d44c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22d44cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d454: 0x3e00008  jr          $ra
    ctx->pc = 0x22D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D454u;
        // 0x22d458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D45Cu;
    // 0x22d45c: 0x0  nop
    ctx->pc = 0x22d45cu;
    // NOP
    ctx->pc = 0x22d460u;
}

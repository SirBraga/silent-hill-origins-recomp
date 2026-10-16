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

// Function: sub_002722B8
// Address: 0x2722b8 - 0x2723c0
void sub_002722B8_0x2722b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002722B8_0x2722b8");
#endif

    ctx->pc = 0x2722b8u;

    // 0x2722b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2722b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722bc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2722bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2722c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2722c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722c4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2722c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2722c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2722c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2722cc: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x2722ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x2722d0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2722d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2722d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2722d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2722d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2722d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2722dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2722DCu;
    {
        const bool branch_taken_0x2722dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2722dc) {
            ctx->pc = 0x2722E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722DCu;
            // 0x2722e0: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272300u;
            goto label_272300;
        }
    }
    ctx->pc = 0x2722E4u;
    // 0x2722e4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2722e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2722e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2722e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2722ec: 0x0  nop
    ctx->pc = 0x2722ecu;
    // NOP
    // 0x2722f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2722F0u;
    {
        const bool branch_taken_0x2722f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2722f0) {
            ctx->pc = 0x2722F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722F0u;
            // 0x2722f4: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272300u;
            goto label_272300;
        }
    }
    ctx->pc = 0x2722F8u;
    // 0x2722f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2722F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2722FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722F8u;
        // 0x2722fc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2722F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272300u;
label_272300:
    // 0x272300: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x272300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x272304: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x272304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x272308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27230c: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x27230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x272310: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x272310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x272314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272318: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x272318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x27231c: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x27231cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x272320: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x272320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x272324: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x272324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x272328: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x27232c: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x27232cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x272330: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x272330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x272334: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x272338: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x272338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x27233c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27233cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x272340: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x272340u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x272344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x272344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272348: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x272348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x27234c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27234cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x272350: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x272350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x272354: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x272354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x272358: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x272358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x27235c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27235Cu;
    {
        const bool branch_taken_0x27235c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x272360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27235Cu;
        // 0x272360: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27235c) {
            ctx->pc = 0x272384u;
            goto label_272384;
        }
    }
    ctx->pc = 0x272364u;
    // 0x272364: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x272364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x272368: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x27236c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x27236cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x272370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x272374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272378: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x272378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27237c: 0x3e00008  jr          $ra
    ctx->pc = 0x27237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27237Cu;
        // 0x272380: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272384u;
label_272384:
    // 0x272384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x272384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x272388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27238c: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x27238cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x272390: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x272390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x272394: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x272394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x272398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27239c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x27239cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2723a0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2723a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2723a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2723a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2723a8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2723a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2723ac: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2723acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2723b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2723b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2723b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2723B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2723B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723B4u;
        // 0x2723b8: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2723B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2723BCu;
    // 0x2723bc: 0x0  nop
    ctx->pc = 0x2723bcu;
    // NOP
    ctx->pc = 0x2723c0u;
}

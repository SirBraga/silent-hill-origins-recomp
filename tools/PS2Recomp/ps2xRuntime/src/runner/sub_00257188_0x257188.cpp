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

// Function: sub_00257188
// Address: 0x257188 - 0x257550
void sub_00257188_0x257188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257188_0x257188");
#endif

    ctx->pc = 0x257188u;

    // 0x257188: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x257188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25718c: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x25718cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x257190: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x257190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x257194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257198: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x257198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x25719c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x25719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2571a0: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2571a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x2571a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2571a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2571a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2571a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2571ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2571acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2571b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2571B0u;
    {
        const bool branch_taken_0x2571b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571b0) {
            ctx->pc = 0x2571B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2571B0u;
            // 0x2571b4: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2571D8u;
            goto label_2571d8;
        }
    }
    ctx->pc = 0x2571B8u;
    // 0x2571b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2571b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2571bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2571bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2571c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2571c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2571c4: 0x188000df  blez        $a0, . + 4 + (0xDF << 2)
    ctx->pc = 0x2571C4u;
    {
        const bool branch_taken_0x2571c4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2571C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571C4u;
        // 0x2571c8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571c4) {
            ctx->pc = 0x257544u;
            goto label_257544;
        }
    }
    ctx->pc = 0x2571CCu;
    // 0x2571cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2571ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2571d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2571D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2571D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571D0u;
        // 0x2571d4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2571D8u;
label_2571d8:
    // 0x2571d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2571d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2571dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2571dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2571e0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2571E0u;
    {
        const bool branch_taken_0x2571e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2571E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571E0u;
        // 0x2571e4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571e0) {
            ctx->pc = 0x257304u;
            goto label_257304;
        }
    }
    ctx->pc = 0x2571E8u;
    // 0x2571e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2571e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2571ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2571ECu;
    {
        const bool branch_taken_0x2571ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2571ec) {
            ctx->pc = 0x2571F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2571ECu;
            // 0x2571f0: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x257208u;
            goto label_257208;
        }
    }
    ctx->pc = 0x2571F4u;
    // 0x2571f4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2571f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2571f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2571f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2571fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2571fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x257200: 0x3e00008  jr          $ra
    ctx->pc = 0x257200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257200u;
        // 0x257204: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257208u;
label_257208:
    // 0x257208: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x257208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x25720c: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x25720cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x257210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257214: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x257214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x257218: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x257218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x25721c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25721cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x257220: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x257220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x257224: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x257224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x257228: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x257228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25722c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x25722cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257230: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x257230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x257234: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x257234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x257238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25723c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x25723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x257240: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x257240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x257244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x257244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257248: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x257248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x25724c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x257250: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x257250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x257254: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x257254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x257258: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x257258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25725c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x25725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x257260: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x257260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x257264: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x257264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x257268: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x257268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x25726c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x25726cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x257270: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x257270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x257274: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x257274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x257278: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x257278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x25727c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x25727cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x257280: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x257284: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x257284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257288: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x257288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x25728c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25728cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x257290: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x257290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x257294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257298: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x257298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25729c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x25729cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2572a0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2572a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2572a4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2572a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2572a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2572a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2572ac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2572acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2572b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2572b4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2572b8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2572b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2572bc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2572bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2572c0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2572c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2572c4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2572c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2572c8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2572c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2572cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2572ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2572d0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2572d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2572d4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2572d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2572d8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2572d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2572dc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2572dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2572e0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2572e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2572e4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2572e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2572e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2572e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2572ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2572ecu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2572f0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2572f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2572f4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2572f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2572f8: 0x46026881  sub.s       $f2, $f13, $f2
    ctx->pc = 0x2572f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x2572fc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2572FCu;
    {
        const bool branch_taken_0x2572fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572FCu;
        // 0x257300: 0x46025341  sub.s       $f13, $f10, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572fc) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257304u;
label_257304:
    // 0x257304: 0x4810046  bgez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x257304u;
    {
        const bool branch_taken_0x257304 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x257304) {
            ctx->pc = 0x257420u;
            goto label_257420;
        }
    }
    ctx->pc = 0x25730Cu;
    // 0x25730c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25730cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257310: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x257310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x257314: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x257318: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25731c: 0x460a6880  add.s       $f2, $f13, $f10
    ctx->pc = 0x25731cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x257320: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x257320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x257324: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x257324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x257328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25732c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x257330: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x257330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x257334: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x257334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x257338: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x257338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x25733c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x257340: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x257340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x257344: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x257344u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x257348: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x25734c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x25734cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x257350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257354: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x257358: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x257358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x25735c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25735cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257360: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x257360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x257364: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x257368: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x257368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25736c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x25736cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257370: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x257374: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x257374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x257378: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25737c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x25737cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x257380: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x257384: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x257384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x257388: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x257388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x25738c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x25738cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x257390: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x257390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x257394: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x257394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x257398: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x257398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25739c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25739cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2573a0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2573a4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2573a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2573a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2573a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2573ac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2573acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2573b0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2573b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2573b4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2573b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2573b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2573b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2573bc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2573bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2573c0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2573c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2573c4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2573c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2573c8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2573c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2573cc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2573ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2573d0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2573d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2573d4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2573d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2573d8: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2573d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2573dc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2573dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2573e0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2573e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2573e4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2573e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2573e8: 0x460c0344  c1          0xC0344
    ctx->pc = 0x2573e8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[12]);
    // 0x2573ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2573ecu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2573f0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2573f4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2573f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2573f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2573f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2573fc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2573fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x257400: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x257400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x257404: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x257408: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x257408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x25740c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x25740cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x257410: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x257410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x257414: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x257414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x257418: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x257418u;
    {
        const bool branch_taken_0x257418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257418u;
        // 0x25741c: 0x46001b41  sub.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257418) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257420u;
label_257420:
    // 0x257420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257424: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x257424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x257428: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25742c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25742cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257430: 0x460d5801  sub.s       $f0, $f11, $f13
    ctx->pc = 0x257430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[13]);
    // 0x257434: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x257434u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257438: 0x460c0344  c1          0xC0344
    ctx->pc = 0x257438u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[12]);
    // 0x25743c: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x25743cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x257440: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x257440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257444: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x257444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x257448: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x257448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x25744c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x257450: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x257450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257454: 0x0  nop
    ctx->pc = 0x257454u;
    // NOP
    // 0x257458: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x257458u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25745c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x25745cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x257460: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x257460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x257464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257468: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x25746c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x25746cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x257470: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x257470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x257474: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x257474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257478: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x257478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x25747c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x25747cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x257480: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x257480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x257484: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x257484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x257488: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x257488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x25748c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25748cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257490: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x257490u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x257494: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x257494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x257498: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x257498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x25749c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x25749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2574a0: 0x46056141  sub.s       $f5, $f12, $f5
    ctx->pc = 0x2574a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x2574a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2574a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2574a8: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2574a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2574ac: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2574acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2574b0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2574b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2574b4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2574b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2574b8: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2574bc: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2574bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2574c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2574c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2574c4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2574c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2574c8: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2574c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2574cc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2574ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2574d0: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x2574d0u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[3]);
    // 0x2574d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2574d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2574d8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2574dc: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2574dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2574e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2574e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2574e4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2574e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2574e8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2574e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2574ec: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2574ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2574f0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2574f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2574f4: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2574f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2574f8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2574f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2574fc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2574fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257500: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x257500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x257504: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x257504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x257508: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x257508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x25750c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x25750cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257510: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x257510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x257514: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x257514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x257518: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x257518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x25751c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x25751cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x257520: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x257520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x257524: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x257524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x257528: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x257528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x25752c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25752cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x257530: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x257530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x257534: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x257534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x257538: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x257538u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25753c: 0x46021340  add.s       $f13, $f2, $f2
    ctx->pc = 0x25753cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_257540:
    // 0x257540: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x257540u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
label_257544:
    // 0x257544: 0x3e00008  jr          $ra
    ctx->pc = 0x257544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25754Cu;
    // 0x25754c: 0x0  nop
    ctx->pc = 0x25754cu;
    // NOP
    ctx->pc = 0x257550u;
}

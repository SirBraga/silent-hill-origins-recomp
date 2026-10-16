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

// Function: sub_0026F020
// Address: 0x26f020 - 0x26f450
void sub_0026F020_0x26f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F020_0x26f020");
#endif

    switch (ctx->pc) {
        case 0x26f2c0u: goto label_26f2c0;
        case 0x26f320u: goto label_26f320;
        default: break;
    }

    ctx->pc = 0x26f020u;

    // 0x26f020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f024: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x26f024u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x26f028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f02c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x26f02cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f030: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x26f030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26f034: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x26f034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26f038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26f038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f03c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26f040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f044: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x26f048: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x26f048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26f04c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x26F04Cu;
    {
        const bool branch_taken_0x26f04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x26F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F04Cu;
        // 0x26f050: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f04c) {
            ctx->pc = 0x26F078u;
            goto label_26f078;
        }
    }
    ctx->pc = 0x26F054u;
    // 0x26f054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f058: 0x1c8000f8  bgtz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x26F058u;
    {
        const bool branch_taken_0x26f058 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x26F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F058u;
        // 0x26f05c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f058) {
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F060u;
    // 0x26f060: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26f060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26f064: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f06c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x26F06Cu;
    {
        const bool branch_taken_0x26f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F06Cu;
        // 0x26f070: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f06c) {
            ctx->pc = 0x26F440u;
            goto label_26f440;
        }
    }
    ctx->pc = 0x26F074u;
    // 0x26f074: 0x0  nop
    ctx->pc = 0x26f074u;
    // NOP
label_26f078:
    // 0x26f078: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x26f078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f07c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F07Cu;
    {
        const bool branch_taken_0x26f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F07Cu;
        // 0x26f080: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f07c) {
            ctx->pc = 0x26F09Cu;
            goto label_26f09c;
        }
    }
    ctx->pc = 0x26F084u;
    // 0x26f084: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x26f084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x26f088: 0x0  nop
    ctx->pc = 0x26f088u;
    // NOP
    // 0x26f08c: 0x0  nop
    ctx->pc = 0x26f08cu;
    // NOP
    // 0x26f090: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x26f090u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[0]);
    // 0x26f094: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x26F094u;
    {
        const bool branch_taken_0x26f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F094u;
        // 0x26f098: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f094) {
            ctx->pc = 0x26F440u;
            goto label_26f440;
        }
    }
    ctx->pc = 0x26F09Cu;
label_26f09c:
    // 0x26f09c: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x26f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x26f0a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f0a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f0a8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x26F0A8u;
    {
        const bool branch_taken_0x26f0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0A8u;
        // 0x26f0ac: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0a8) {
            ctx->pc = 0x26F1D4u;
            goto label_26f1d4;
        }
    }
    ctx->pc = 0x26F0B0u;
    // 0x26f0b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f0b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F0B4u;
    {
        const bool branch_taken_0x26f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0b4) {
            ctx->pc = 0x26F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F0B4u;
            // 0x26f0b8: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F0D0u;
            goto label_26f0d0;
        }
    }
    ctx->pc = 0x26F0BCu;
    // 0x26f0bc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f0c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f0c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f0c8: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x26F0C8u;
    {
        const bool branch_taken_0x26f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0C8u;
        // 0x26f0cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0c8) {
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F0D0u;
label_26f0d0:
    // 0x26f0d0: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x26f0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x26f0d4: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x26f0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x26f0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f0dc: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x26f0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x26f0e0: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x26f0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x26f0e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f0e8: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x26f0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x26f0ec: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x26f0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x26f0f0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f0f4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f0f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f0f8: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x26f0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x26f0fc: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x26f0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x26f100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f104: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x26f108: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x26f108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x26f10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f110: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x26f110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x26f114: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x26f114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x26f118: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x26f118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x26f11c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26f11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26f120: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26f120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f124: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x26f124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x26f128: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x26f128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x26f12c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f130: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x26f134: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x26f138: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26f138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x26f13c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26f13cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26f140: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x26f144: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x26f144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x26f148: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f14c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f150: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x26f154: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26f154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26f158: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26f158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f15c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f160: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f164: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x26f164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x26f168: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x26f168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x26f16c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26f16cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26f170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f174: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x26f174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x26f178: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f17c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f180: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x26f180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x26f184: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x26f184u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x26f188: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f18c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x26f18cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x26f190: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x26f190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x26f194: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x26f194u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x26f198: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f19c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x26f19cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x26f1a0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x26f1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x26f1a4: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x26f1a4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x26f1a8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f1ac: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x26f1acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x26f1b0: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x26f1b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f1b4: 0x0  nop
    ctx->pc = 0x26f1b4u;
    // NOP
    // 0x26f1b8: 0x0  nop
    ctx->pc = 0x26f1b8u;
    // NOP
    // 0x26f1bc: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x26f1bcu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[22]);
    // 0x26f1c0: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x26f1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x26f1c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26f1c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26f1c8: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x26f1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x26f1cc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x26F1CCu;
    {
        const bool branch_taken_0x26f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1CCu;
        // 0x26f1d0: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1cc) {
            ctx->pc = 0x26F438u;
            goto label_26f438;
        }
    }
    ctx->pc = 0x26F1D4u;
label_26f1d4:
    // 0x26f1d4: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x26F1D4u;
    {
        const bool branch_taken_0x26f1d4 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x26f1d4) {
            ctx->pc = 0x26F300u;
            goto label_26f300;
        }
    }
    ctx->pc = 0x26F1DCu;
    // 0x26f1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f1e0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x26f1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x26f1e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26f1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26f1e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f1ec: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x26f1ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x26f1f0: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x26f1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x26f1f4: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x26f1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x26f1f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f1fc: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x26f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x26f200: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x26f200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x26f204: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f208: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x26f208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x26f20c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x26f20cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x26f210: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26f210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26f214: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x26f214u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x26f218: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x26f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x26f21c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x26f21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x26f220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f224: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x26f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x26f228: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x26f228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x26f22c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f230: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x26f234: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x26f234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x26f238: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26f238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f23c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f240: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x26f244: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x26f248: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f24c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f24cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f250: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x26f254: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x26f254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x26f258: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26f258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x26f25c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x26f260: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x26f260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x26f264: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f268: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26f268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x26f26c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x26f26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26f270: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26f270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x26f274: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26f274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26f278: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f27c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26f27cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26f280: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f284: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f288: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x26f288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x26f28c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26f28cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f290: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f294: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f298: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x26f298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x26f29c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x26f29cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x26f2a0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f2a4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f2a8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x26f2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x26f2ac: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x26f2acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x26f2b0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f2b4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26f2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26f2b8: 0xc09c1d2  jal         func_270748
    ctx->pc = 0x26F2B8u;
    SET_GPR_U32(ctx, 31, 0x26F2C0u);
    ctx->pc = 0x26F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2B8u;
    // 0x26f2bc: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x270748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270748u, 0x26F2B8u, 0x26F2C0u)) {
        return;
    }
    ctx->pc = 0x26F2C0u;
label_26f2c0:
    // 0x26f2c0: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x26f2c0u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x26f2c4: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x26f2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x26f2c8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26f2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26f2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f2d0: 0x0  nop
    ctx->pc = 0x26f2d0u;
    // NOP
    // 0x26f2d4: 0x0  nop
    ctx->pc = 0x26f2d4u;
    // NOP
    // 0x26f2d8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x26f2d8u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[22]);
    // 0x26f2dc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26f2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26f2e0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f2e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f2e8: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x26f2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x26f2ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26f2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26f2f0: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x26f2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x26f2f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26f2f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26f2f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26F2F8u;
    {
        const bool branch_taken_0x26f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2F8u;
        // 0x26f2fc: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2f8) {
            ctx->pc = 0x26F438u;
            goto label_26f438;
        }
    }
    ctx->pc = 0x26F300u;
label_26f300:
    // 0x26f300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f304: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26f304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26f308: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26f30c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f310: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x26f310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x26f314: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x26f314u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26f318: 0xc09c1d2  jal         func_270748
    ctx->pc = 0x26F318u;
    SET_GPR_U32(ctx, 31, 0x26F320u);
    ctx->pc = 0x26F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F318u;
    // 0x26f31c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x270748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270748u, 0x26F318u, 0x26F320u)) {
        return;
    }
    ctx->pc = 0x26F320u;
label_26f320:
    // 0x26f320: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26f320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26f324: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x26f324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x26f328: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26f32c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x26f32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x26f330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26f330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f338: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x26f338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26f33c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x26f340: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x26f340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x26f344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f348: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x26f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x26f34c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x26f34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x26f350: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f354: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f358: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x26f358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x26f35c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x26f35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x26f360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f364: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x26f364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x26f368: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x26f368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x26f36c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26f36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x26f370: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x26f370u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x26f374: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f378: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x26f37c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x26f37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x26f380: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f384: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x26f384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26f388: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x26f388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x26f38c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x26f38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x26f390: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26f390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f394: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x26f394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f398: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x26f398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x26f39c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x26f39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x26f3a0: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x26f3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x26f3a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f3a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f3ac: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26f3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x26f3b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26f3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26f3b4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26f3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26f3b8: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x26f3b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x26f3bc: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x26f3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x26f3c0: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x26f3c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x26f3c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f3c8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f3cc: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x26f3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x26f3d0: 0x0  nop
    ctx->pc = 0x26f3d0u;
    // NOP
    // 0x26f3d4: 0x0  nop
    ctx->pc = 0x26f3d4u;
    // NOP
    // 0x26f3d8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x26f3d8u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x26f3dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26f3dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26f3e0: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x26f3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x26f3e4: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x26f3e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x26f3e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f3ec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f3f0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f3f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f3f4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26f3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26f3f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26f3f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f3fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f400: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x26f400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26f404: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x26f404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x26f408: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x26f408u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x26f40c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x26f40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f410: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26f410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f414: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x26f414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x26f418: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x26f418u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26f41c: 0x0  nop
    ctx->pc = 0x26f41cu;
    // NOP
    // 0x26f420: 0x0  nop
    ctx->pc = 0x26f420u;
    // NOP
    // 0x26f424: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x26f424u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[22]);
    // 0x26f428: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x26f428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x26f42c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26f42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f430: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f434: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26f434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26f438:
    // 0x26f438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26f43c:
    // 0x26f43c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x26f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26f440:
    // 0x26f440: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x26f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26f444: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x26f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f448: 0x3e00008  jr          $ra
    ctx->pc = 0x26F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F448u;
        // 0x26f44c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F450u;
}

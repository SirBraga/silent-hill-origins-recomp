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

// Function: sub_001B4548
// Address: 0x1b4548 - 0x1b4718
void sub_001B4548_0x1b4548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4548_0x1b4548");
#endif

    switch (ctx->pc) {
        case 0x1b457cu: goto label_1b457c;
        case 0x1b458cu: goto label_1b458c;
        case 0x1b45bcu: goto label_1b45bc;
        case 0x1b45c8u: goto label_1b45c8;
        case 0x1b45d0u: goto label_1b45d0;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45e8u: goto label_1b45e8;
        case 0x1b460cu: goto label_1b460c;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b462cu: goto label_1b462c;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4650u: goto label_1b4650;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b4698u: goto label_1b4698;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46e8u: goto label_1b46e8;
        case 0x1b46f4u: goto label_1b46f4;
        case 0x1b4700u: goto label_1b4700;
        default: break;
    }

    ctx->pc = 0x1b4548u;

    // 0x1b4548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b454c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b4550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4554: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b4554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b4558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b455c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b4560: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1b4560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b4564: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x1b4564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x1b4568: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b4568u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b456c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1b456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1b4570: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b4570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4574: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B4574u;
    SET_GPR_U32(ctx, 31, 0x1B457Cu);
    ctx->pc = 0x1B4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4574u;
    // 0x1b4578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4574u, 0x1B457Cu)) {
        return;
    }
    ctx->pc = 0x1B457Cu;
label_1b457c:
    // 0x1b457c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4584: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B4584u;
    SET_GPR_U32(ctx, 31, 0x1B458Cu);
    ctx->pc = 0x1B4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4584u;
    // 0x1b4588: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4584u, 0x1B458Cu)) {
        return;
    }
    ctx->pc = 0x1B458Cu;
label_1b458c:
    // 0x1b458c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b4590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b4594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4598: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x1b4598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x1b459c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b459cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b45a0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b45a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b45a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b45a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b45a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b45a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b45ac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b45b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b45b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b45b4: 0xc097202  jal         func_25C808
    ctx->pc = 0x1B45B4u;
    SET_GPR_U32(ctx, 31, 0x1B45BCu);
    ctx->pc = 0x1B45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45B4u;
    // 0x1b45b8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C808u, 0x1B45B4u, 0x1B45BCu)) {
        return;
    }
    ctx->pc = 0x1B45BCu;
label_1b45bc:
    // 0x1b45bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1b45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b45c0: 0xc095e0c  jal         func_257830
    ctx->pc = 0x1B45C0u;
    SET_GPR_U32(ctx, 31, 0x1B45C8u);
    ctx->pc = 0x1B45C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45C0u;
    // 0x1b45c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x1B45C0u, 0x1B45C8u)) {
        return;
    }
    ctx->pc = 0x1B45C8u;
label_1b45c8:
    // 0x1b45c8: 0xc08949c  jal         func_225270
    ctx->pc = 0x1B45C8u;
    SET_GPR_U32(ctx, 31, 0x1B45D0u);
    ctx->pc = 0x1B45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45C8u;
    // 0x1b45cc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x1B45C8u, 0x1B45D0u)) {
        return;
    }
    ctx->pc = 0x1B45D0u;
label_1b45d0:
    // 0x1b45d0: 0xc089892  jal         func_226248
    ctx->pc = 0x1B45D0u;
    SET_GPR_U32(ctx, 31, 0x1B45D8u);
    ctx->pc = 0x1B45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45D0u;
    // 0x1b45d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1B45D0u, 0x1B45D8u)) {
        return;
    }
    ctx->pc = 0x1B45D8u;
label_1b45d8:
    // 0x1b45d8: 0xc089892  jal         func_226248
    ctx->pc = 0x1B45D8u;
    SET_GPR_U32(ctx, 31, 0x1B45E0u);
    ctx->pc = 0x1B45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45D8u;
    // 0x1b45dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1B45D8u, 0x1B45E0u)) {
        return;
    }
    ctx->pc = 0x1B45E0u;
label_1b45e0:
    // 0x1b45e0: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B45E0u;
    SET_GPR_U32(ctx, 31, 0x1B45E8u);
    ctx->pc = 0x1B45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45E0u;
    // 0x1b45e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B45E0u, 0x1B45E8u)) {
        return;
    }
    ctx->pc = 0x1B45E8u;
label_1b45e8:
    // 0x1b45e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b45ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b45f0: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x1b45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b45f4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1b45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1b45f8: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1b45fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4600: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1b4600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1b4604: 0xc089a04  jal         func_226810
    ctx->pc = 0x1B4604u;
    SET_GPR_U32(ctx, 31, 0x1B460Cu);
    ctx->pc = 0x1B4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4604u;
    // 0x1b4608: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1B4604u, 0x1B460Cu)) {
        return;
    }
    ctx->pc = 0x1B460Cu;
label_1b460c:
    // 0x1b460c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4610: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1B4610u;
    SET_GPR_U32(ctx, 31, 0x1B4618u);
    ctx->pc = 0x1B4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4610u;
    // 0x1b4614: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1B4610u, 0x1B4618u)) {
        return;
    }
    ctx->pc = 0x1B4618u;
label_1b4618:
    // 0x1b4618: 0xc089a04  jal         func_226810
    ctx->pc = 0x1B4618u;
    SET_GPR_U32(ctx, 31, 0x1B4620u);
    ctx->pc = 0x1B461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4618u;
    // 0x1b461c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1B4618u, 0x1B4620u)) {
        return;
    }
    ctx->pc = 0x1B4620u;
label_1b4620:
    // 0x1b4620: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4624: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1B4624u;
    SET_GPR_U32(ctx, 31, 0x1B462Cu);
    ctx->pc = 0x1B4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4624u;
    // 0x1b4628: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1B4624u, 0x1B462Cu)) {
        return;
    }
    ctx->pc = 0x1B462Cu;
label_1b462c:
    // 0x1b462c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4638: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B4638u;
    SET_GPR_U32(ctx, 31, 0x1B4640u);
    ctx->pc = 0x1B463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4638u;
    // 0x1b463c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4638u, 0x1B4640u)) {
        return;
    }
    ctx->pc = 0x1B4640u;
label_1b4640:
    // 0x1b4640: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b4644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4648: 0xc0899d8  jal         func_226760
    ctx->pc = 0x1B4648u;
    SET_GPR_U32(ctx, 31, 0x1B4650u);
    ctx->pc = 0x1B464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4648u;
    // 0x1b464c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x1B4648u, 0x1B4650u)) {
        return;
    }
    ctx->pc = 0x1B4650u;
label_1b4650:
    // 0x1b4650: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1b4654: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4658: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x1B4658u;
    SET_GPR_U32(ctx, 31, 0x1B4660u);
    ctx->pc = 0x1B465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4658u;
    // 0x1b465c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x1B4658u, 0x1B4660u)) {
        return;
    }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b4664: 0xc089974  jal         func_2265D0
    ctx->pc = 0x1B4664u;
    SET_GPR_U32(ctx, 31, 0x1B466Cu);
    ctx->pc = 0x1B4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4664u;
    // 0x1b4668: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2265D0u, 0x1B4664u, 0x1B466Cu)) {
        return;
    }
    ctx->pc = 0x1B466Cu;
label_1b466c:
    // 0x1b466c: 0xc089a04  jal         func_226810
    ctx->pc = 0x1B466Cu;
    SET_GPR_U32(ctx, 31, 0x1B4674u);
    ctx->pc = 0x1B4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B466Cu;
    // 0x1b4670: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1B466Cu, 0x1B4674u)) {
        return;
    }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b4678: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b467c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b467cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4680: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x1B4680u;
    SET_GPR_U32(ctx, 31, 0x1B4688u);
    ctx->pc = 0x1B4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4680u;
    // 0x1b4684: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x1B4680u, 0x1B4688u)) {
        return;
    }
    ctx->pc = 0x1B4688u;
label_1b4688:
    // 0x1b4688: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1b468c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b468cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4690: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x1B4690u;
    SET_GPR_U32(ctx, 31, 0x1B4698u);
    ctx->pc = 0x1B4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4690u;
    // 0x1b4694: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x1B4690u, 0x1B4698u)) {
        return;
    }
    ctx->pc = 0x1B4698u;
label_1b4698:
    // 0x1b4698: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1b469c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1b46a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b46a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b46a4: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1b46a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1b46a8: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x1B46A8u;
    SET_GPR_U32(ctx, 31, 0x1B46B0u);
    ctx->pc = 0x1B46ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46A8u;
    // 0x1b46ac: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1B46A8u, 0x1B46B0u)) {
        return;
    }
    ctx->pc = 0x1B46B0u;
label_1b46b0:
    // 0x1b46b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b46b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b46b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b46b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b46b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b46bc: 0x3c013fe1  lui         $at, 0x3FE1
    ctx->pc = 0x1b46bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16353 << 16));
    // 0x1b46c0: 0x3421e1e2  ori         $at, $at, 0xE1E2
    ctx->pc = 0x1b46c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57826);
    // 0x1b46c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b46c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b46c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b46c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b46cc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b46d0: 0x0  nop
    ctx->pc = 0x1b46d0u;
    // NOP
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
    // 0x1b46d8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b46d8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1b46dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b46dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b46e0: 0xc089456  jal         func_225158
    ctx->pc = 0x1B46E0u;
    SET_GPR_U32(ctx, 31, 0x1B46E8u);
    ctx->pc = 0x1B46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46E0u;
    // 0x1b46e4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1B46E0u, 0x1B46E8u)) {
        return;
    }
    ctx->pc = 0x1B46E8u;
label_1b46e8:
    // 0x1b46e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b46ec: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x1B46ECu;
    SET_GPR_U32(ctx, 31, 0x1B46F4u);
    ctx->pc = 0x1B46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46ECu;
    // 0x1b46f0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x1B46ECu, 0x1B46F4u)) {
        return;
    }
    ctx->pc = 0x1B46F4u;
label_1b46f4:
    // 0x1b46f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b46f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b46f8: 0xc097910  jal         func_25E440
    ctx->pc = 0x1B46F8u;
    SET_GPR_U32(ctx, 31, 0x1B4700u);
    ctx->pc = 0x1B46FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46F8u;
    // 0x1b46fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1B46F8u, 0x1B4700u)) {
        return;
    }
    ctx->pc = 0x1B4700u;
label_1b4700:
    // 0x1b4700: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b4700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4704: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b4704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b470c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b4710: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4710u;
        // 0x1b4714: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4718u;
}

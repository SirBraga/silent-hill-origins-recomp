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

// Function: sub_0018B480
// Address: 0x18b480 - 0x18b5a0
void sub_0018B480_0x18b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B480_0x18b480");
#endif

    switch (ctx->pc) {
        case 0x18b4b4u: goto label_18b4b4;
        case 0x18b4c4u: goto label_18b4c4;
        case 0x18b4d0u: goto label_18b4d0;
        case 0x18b4dcu: goto label_18b4dc;
        case 0x18b518u: goto label_18b518;
        case 0x18b524u: goto label_18b524;
        case 0x18b530u: goto label_18b530;
        case 0x18b53cu: goto label_18b53c;
        case 0x18b578u: goto label_18b578;
        default: break;
    }

    ctx->pc = 0x18b480u;

    // 0x18b480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18b484: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b488: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b494: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18b494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b49c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18b49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4a0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x18b4a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18b4a4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x18b4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4a8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18b4a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18b4ac: 0xc0628aa  jal         func_18A2A8
    ctx->pc = 0x18B4ACu;
    SET_GPR_U32(ctx, 31, 0x18B4B4u);
    ctx->pc = 0x18B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4ACu;
    // 0x18b4b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A2A8u, 0x18B4ACu, 0x18B4B4u)) {
        return;
    }
    ctx->pc = 0x18B4B4u;
label_18b4b4:
    // 0x18b4b4: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x18B4B4u;
    {
        const bool branch_taken_0x18b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4b4) {
            ctx->pc = 0x18B4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B4B4u;
            // 0x18b4b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B580u;
            goto label_18b580;
        }
    }
    ctx->pc = 0x18B4BCu;
    // 0x18b4bc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B4BCu;
    SET_GPR_U32(ctx, 31, 0x18B4C4u);
    ctx->pc = 0x18B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4BCu;
    // 0x18b4c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B4BCu, 0x18B4C4u)) {
        return;
    }
    ctx->pc = 0x18B4C4u;
label_18b4c4:
    // 0x18b4c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18b4c8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B4C8u;
    SET_GPR_U32(ctx, 31, 0x18B4D0u);
    ctx->pc = 0x18B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4C8u;
    // 0x18b4cc: 0xc4550000  lwc1        $f21, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B4C8u, 0x18B4D0u)) {
        return;
    }
    ctx->pc = 0x18B4D0u;
label_18b4d0:
    // 0x18b4d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b4d4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B4D4u;
    SET_GPR_U32(ctx, 31, 0x18B4DCu);
    ctx->pc = 0x18B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4D4u;
    // 0x18b4d8: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B4D4u, 0x18B4DCu)) {
        return;
    }
    ctx->pc = 0x18B4DCu;
label_18b4dc:
    // 0x18b4dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b4e0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x18b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b4e4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18b4e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x18b4e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18b4ec: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x18b4ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x18b4f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b4f4: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x18b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b4f8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x18b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b4fc: 0x0  nop
    ctx->pc = 0x18b4fcu;
    // NOP
    // 0x18b500: 0x0  nop
    ctx->pc = 0x18b500u;
    // NOP
    // 0x18b504: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x18b504u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
    // 0x18b508: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18b508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18b50c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b50cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18b510: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x18B510u;
    SET_GPR_U32(ctx, 31, 0x18B518u);
    ctx->pc = 0x18B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B510u;
    // 0x18b514: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x18B510u, 0x18B518u)) {
        return;
    }
    ctx->pc = 0x18B518u;
label_18b518:
    // 0x18b518: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18b518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b51c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B51Cu;
    SET_GPR_U32(ctx, 31, 0x18B524u);
    ctx->pc = 0x18B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B51Cu;
    // 0x18b520: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B51Cu, 0x18B524u)) {
        return;
    }
    ctx->pc = 0x18B524u;
label_18b524:
    // 0x18b524: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18b528: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B528u;
    SET_GPR_U32(ctx, 31, 0x18B530u);
    ctx->pc = 0x18B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B528u;
    // 0x18b52c: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B528u, 0x18B530u)) {
        return;
    }
    ctx->pc = 0x18B530u;
label_18b530:
    // 0x18b530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b534: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18B534u;
    SET_GPR_U32(ctx, 31, 0x18B53Cu);
    ctx->pc = 0x18B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B534u;
    // 0x18b538: 0xc4540008  lwc1        $f20, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18B534u, 0x18B53Cu)) {
        return;
    }
    ctx->pc = 0x18B53Cu;
label_18b53c:
    // 0x18b53c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b540: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x18b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b544: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18b544u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x18b548: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x18b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18b54c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x18b54cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x18b550: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b554: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x18b554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b558: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x18b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b55c: 0x0  nop
    ctx->pc = 0x18b55cu;
    // NOP
    // 0x18b560: 0x0  nop
    ctx->pc = 0x18b560u;
    // NOP
    // 0x18b564: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x18b564u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
    // 0x18b568: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18b568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18b56c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b56cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18b570: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x18B570u;
    SET_GPR_U32(ctx, 31, 0x18B578u);
    ctx->pc = 0x18B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B570u;
    // 0x18b574: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x18B570u, 0x18B578u)) {
        return;
    }
    ctx->pc = 0x18B578u;
label_18b578:
    // 0x18b578: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18b578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18b57c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18b580:
    // 0x18b580: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b58c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x18b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b590: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b594: 0x3e00008  jr          $ra
    ctx->pc = 0x18B594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B594u;
        // 0x18b598: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B59Cu;
    // 0x18b59c: 0x0  nop
    ctx->pc = 0x18b59cu;
    // NOP
    ctx->pc = 0x18b5a0u;
}

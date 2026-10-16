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

// Function: sub_002A9890
// Address: 0x2a9890 - 0x2a9a38
void sub_002A9890_0x2a9890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9890_0x2a9890");
#endif

    switch (ctx->pc) {
        case 0x2a9890u: goto label_2a9890;
        case 0x2a9894u: goto label_2a9894;
        case 0x2a9898u: goto label_2a9898;
        case 0x2a989cu: goto label_2a989c;
        case 0x2a98a0u: goto label_2a98a0;
        case 0x2a98a4u: goto label_2a98a4;
        case 0x2a98a8u: goto label_2a98a8;
        case 0x2a98acu: goto label_2a98ac;
        case 0x2a98b0u: goto label_2a98b0;
        case 0x2a98b4u: goto label_2a98b4;
        case 0x2a98b8u: goto label_2a98b8;
        case 0x2a98bcu: goto label_2a98bc;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98c4u: goto label_2a98c4;
        case 0x2a98c8u: goto label_2a98c8;
        case 0x2a98ccu: goto label_2a98cc;
        case 0x2a98d0u: goto label_2a98d0;
        case 0x2a98d4u: goto label_2a98d4;
        case 0x2a98d8u: goto label_2a98d8;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98e0u: goto label_2a98e0;
        case 0x2a98e4u: goto label_2a98e4;
        case 0x2a98e8u: goto label_2a98e8;
        case 0x2a98ecu: goto label_2a98ec;
        case 0x2a98f0u: goto label_2a98f0;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a98f8u: goto label_2a98f8;
        case 0x2a98fcu: goto label_2a98fc;
        case 0x2a9900u: goto label_2a9900;
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a990cu: goto label_2a990c;
        case 0x2a9910u: goto label_2a9910;
        case 0x2a9914u: goto label_2a9914;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a991cu: goto label_2a991c;
        case 0x2a9920u: goto label_2a9920;
        case 0x2a9924u: goto label_2a9924;
        case 0x2a9928u: goto label_2a9928;
        case 0x2a992cu: goto label_2a992c;
        case 0x2a9930u: goto label_2a9930;
        case 0x2a9934u: goto label_2a9934;
        case 0x2a9938u: goto label_2a9938;
        case 0x2a993cu: goto label_2a993c;
        case 0x2a9940u: goto label_2a9940;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a9948u: goto label_2a9948;
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9950u: goto label_2a9950;
        case 0x2a9954u: goto label_2a9954;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a995cu: goto label_2a995c;
        case 0x2a9960u: goto label_2a9960;
        case 0x2a9964u: goto label_2a9964;
        case 0x2a9968u: goto label_2a9968;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9970u: goto label_2a9970;
        case 0x2a9974u: goto label_2a9974;
        case 0x2a9978u: goto label_2a9978;
        case 0x2a997cu: goto label_2a997c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9984u: goto label_2a9984;
        case 0x2a9988u: goto label_2a9988;
        case 0x2a998cu: goto label_2a998c;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a9994u: goto label_2a9994;
        case 0x2a9998u: goto label_2a9998;
        case 0x2a999cu: goto label_2a999c;
        case 0x2a99a0u: goto label_2a99a0;
        case 0x2a99a4u: goto label_2a99a4;
        case 0x2a99a8u: goto label_2a99a8;
        case 0x2a99acu: goto label_2a99ac;
        case 0x2a99b0u: goto label_2a99b0;
        case 0x2a99b4u: goto label_2a99b4;
        case 0x2a99b8u: goto label_2a99b8;
        case 0x2a99bcu: goto label_2a99bc;
        case 0x2a99c0u: goto label_2a99c0;
        case 0x2a99c4u: goto label_2a99c4;
        case 0x2a99c8u: goto label_2a99c8;
        case 0x2a99ccu: goto label_2a99cc;
        case 0x2a99d0u: goto label_2a99d0;
        case 0x2a99d4u: goto label_2a99d4;
        case 0x2a99d8u: goto label_2a99d8;
        case 0x2a99dcu: goto label_2a99dc;
        case 0x2a99e0u: goto label_2a99e0;
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a99ecu: goto label_2a99ec;
        case 0x2a99f0u: goto label_2a99f0;
        case 0x2a99f4u: goto label_2a99f4;
        case 0x2a99f8u: goto label_2a99f8;
        case 0x2a99fcu: goto label_2a99fc;
        case 0x2a9a00u: goto label_2a9a00;
        case 0x2a9a04u: goto label_2a9a04;
        case 0x2a9a08u: goto label_2a9a08;
        case 0x2a9a0cu: goto label_2a9a0c;
        case 0x2a9a10u: goto label_2a9a10;
        case 0x2a9a14u: goto label_2a9a14;
        case 0x2a9a18u: goto label_2a9a18;
        case 0x2a9a1cu: goto label_2a9a1c;
        case 0x2a9a20u: goto label_2a9a20;
        case 0x2a9a24u: goto label_2a9a24;
        case 0x2a9a28u: goto label_2a9a28;
        case 0x2a9a2cu: goto label_2a9a2c;
        case 0x2a9a30u: goto label_2a9a30;
        case 0x2a9a34u: goto label_2a9a34;
        default: break;
    }

    ctx->pc = 0x2a9890u;

label_2a9890:
    // 0x2a9890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a9894:
    // 0x2a9894: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a9894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a9898:
    // 0x2a9898: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a989c:
    // 0x2a989c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a989cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a98a0:
    // 0x2a98a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a98a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a98a4:
    // 0x2a98a4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_2a98a8:
    if (ctx->pc == 0x2A98A8u) {
        ctx->pc = 0x2A98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98A4u;
        // 0x2a98a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98ACu;
        goto label_2a98ac;
    }
    ctx->pc = 0x2A98A4u;
    {
        const bool branch_taken_0x2a98a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98A4u;
        // 0x2a98a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98a4) {
            ctx->pc = 0x2A9940u;
            goto label_2a9940;
        }
    }
    ctx->pc = 0x2A98ACu;
label_2a98ac:
    // 0x2a98ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a98b0:
    // 0x2a98b0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a98b4:
    // 0x2a98b4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a98b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a98b8:
    // 0x2a98b8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2a98b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a98bc:
    // 0x2a98bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a98bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a98c0:
    // 0x2a98c0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2a98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a98c4:
    // 0x2a98c4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a98c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2a98c8:
    // 0x2a98c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a98c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a98cc:
    // 0x2a98cc: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x2a98ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a98d0:
    // 0x2a98d0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a98d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a98d4:
    // 0x2a98d4: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2a98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a98d8:
    // 0x2a98d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a98d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2a98dc:
    // 0x2a98dc: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x2a98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a98e0:
    // 0x2a98e0: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x2a98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a98e4:
    // 0x2a98e4: 0xc6090024  lwc1        $f9, 0x24($s0)
    ctx->pc = 0x2a98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2a98e8:
    // 0x2a98e8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2a98e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2a98ec:
    // 0x2a98ec: 0xc6080028  lwc1        $f8, 0x28($s0)
    ctx->pc = 0x2a98ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a98f0:
    // 0x2a98f0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a98f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a98f4:
    // 0x2a98f4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a98f8:
    // 0x2a98f8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2a98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a98fc:
    // 0x2a98fc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a98fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a9900:
    // 0x2a9900: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2a9900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9904:
    // 0x2a9904: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2a9904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2a9908:
    // 0x2a9908: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a9908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2a990c:
    // 0x2a990c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a990cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a9910:
    // 0x2a9910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9914:
    // 0x2a9914: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a9914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a9918:
    // 0x2a9918: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a991c:
    // 0x2a991c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2a991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9920:
    // 0x2a9920: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a9920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2a9924:
    // 0x2a9924: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9928:
    // 0x2a9928: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2a9928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_2a992c:
    // 0x2a992c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2a992cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_2a9930:
    // 0x2a9930: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a9934:
    // 0x2a9934: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a9938:
    // 0x2a9938: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a9938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a993c:
    // 0x2a993c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9940:
    // 0x2a9940: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2a9940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2a9944:
    // 0x2a9944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a9944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9948:
    // 0x2a9948: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a994c:
    // 0x2a994c: 0x40f809  jalr        $v0
label_2a9950:
    if (ctx->pc == 0x2A9950u) {
        ctx->pc = 0x2A9954u;
        goto label_2a9954;
    }
    ctx->pc = 0x2A994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9954u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A994Cu, 0x2A9954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9954u;
label_2a9954:
    // 0x2a9954: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_2a9958:
    if (ctx->pc == 0x2A9958u) {
        ctx->pc = 0x2A9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9954u;
        // 0x2a9958: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A995Cu;
        goto label_2a995c;
    }
    ctx->pc = 0x2A9954u;
    {
        const bool branch_taken_0x2a9954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9954) {
            ctx->pc = 0x2A9958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9954u;
            // 0x2a9958: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A28u;
            goto label_2a9a28;
        }
    }
    ctx->pc = 0x2A995Cu;
label_2a995c:
    // 0x2a995c: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
label_2a9960:
    if (ctx->pc == 0x2A9960u) {
        ctx->pc = 0x2A9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A995Cu;
        // 0x2a9960: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9964u;
        goto label_2a9964;
    }
    ctx->pc = 0x2A995Cu;
    {
        const bool branch_taken_0x2a995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a995c) {
            ctx->pc = 0x2A9960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A995Cu;
            // 0x2a9960: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A28u;
            goto label_2a9a28;
        }
    }
    ctx->pc = 0x2A9964u;
label_2a9964:
    // 0x2a9964: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9968:
    // 0x2a9968: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a9968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a996c:
    // 0x2a996c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9970:
    // 0x2a9970: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9974:
    // 0x2a9974: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a9978:
    // 0x2a9978: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2a9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a997c:
    // 0x2a997c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a997cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a9980:
    // 0x2a9980: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a9980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9984:
    // 0x2a9984: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2a9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a9988:
    // 0x2a9988: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a9988u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a998c:
    // 0x2a998c: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2a998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a9990:
    // 0x2a9990: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2a9990u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2a9994:
    // 0x2a9994: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x2a9994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a9998:
    // 0x2a9998: 0xc6080008  lwc1        $f8, 0x8($s0)
    ctx->pc = 0x2a9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a999c:
    // 0x2a999c: 0xc60a0018  lwc1        $f10, 0x18($s0)
    ctx->pc = 0x2a999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2a99a0:
    // 0x2a99a0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a99a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2a99a4:
    // 0x2a99a4: 0xc6090028  lwc1        $f9, 0x28($s0)
    ctx->pc = 0x2a99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2a99a8:
    // 0x2a99a8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2a99a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a99ac:
    // 0x2a99ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a99acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a99b0:
    // 0x2a99b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a99b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a99b4:
    // 0x2a99b4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a99b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a99b8:
    // 0x2a99b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a99b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a99bc:
    // 0x2a99bc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2a99bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_2a99c0:
    // 0x2a99c0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a99c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2a99c4:
    // 0x2a99c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a99c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a99c8:
    // 0x2a99c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a99c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a99cc:
    // 0x2a99cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a99ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a99d0:
    // 0x2a99d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a99d4:
    // 0x2a99d4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a99d8:
    // 0x2a99d8: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2a99d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_2a99dc:
    // 0x2a99dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a99dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a99e0:
    // 0x2a99e0: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a99e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2a99e4:
    // 0x2a99e4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2a99e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2a99e8:
    // 0x2a99e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a99e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a99ec:
    // 0x2a99ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a99ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a99f0:
    // 0x2a99f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a99f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a99f4:
    // 0x2a99f4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a99f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a99f8:
    // 0x2a99f8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a99f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a99fc:
    // 0x2a99fc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2a99fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a9a00:
    // 0x2a9a00: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2a9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9a04:
    // 0x2a9a04: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a9a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9a08:
    // 0x2a9a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9a0c:
    // 0x2a9a0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a9a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a9a10:
    // 0x2a9a10: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2a9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9a14:
    // 0x2a9a14: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9a18:
    // 0x2a9a18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9a1c:
    // 0x2a9a1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a9a20:
    // 0x2a9a20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a9a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9a24:
    // 0x2a9a24: 0x0  nop
    ctx->pc = 0x2a9a24u;
    // NOP
label_2a9a28:
    // 0x2a9a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9a2c:
    // 0x2a9a2c: 0x3e00008  jr          $ra
label_2a9a30:
    if (ctx->pc == 0x2A9A30u) {
        ctx->pc = 0x2A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A2Cu;
        // 0x2a9a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A34u;
        goto label_2a9a34;
    }
    ctx->pc = 0x2A9A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A2Cu;
        // 0x2a9a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9A34u;
label_2a9a34:
    // 0x2a9a34: 0x0  nop
    ctx->pc = 0x2a9a34u;
    // NOP
    ctx->pc = 0x2a9a38u;
}

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

// Function: sub_001E3880
// Address: 0x1e3880 - 0x1e3a40
void sub_001E3880_0x1e3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3880_0x1e3880");
#endif

    switch (ctx->pc) {
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        case 0x1e3924u: goto label_1e3924;
        case 0x1e3928u: goto label_1e3928;
        case 0x1e392cu: goto label_1e392c;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        default: break;
    }

    ctx->pc = 0x1e3880u;

label_1e3880:
    // 0x1e3880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e3884:
    // 0x1e3884: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e3884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e3888:
    // 0x1e3888: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e3888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1e388c:
    // 0x1e388c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e388cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e3890:
    // 0x1e3890: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e3890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1e3894:
    // 0x1e3894: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1e3898:
    // 0x1e3898: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e3898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e389c:
    // 0x1e389c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e38a0:
    // 0x1e38a0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e38a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1e38a4:
    // 0x1e38a4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1e38a8:
    // 0x1e38a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e38a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e38ac:
    // 0x1e38ac: 0xc0927be  jal         func_249EF8
label_1e38b0:
    if (ctx->pc == 0x1E38B0u) {
        ctx->pc = 0x1E38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38ACu;
        // 0x1e38b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38B4u;
        goto label_1e38b4;
    }
    ctx->pc = 0x1E38ACu;
    SET_GPR_U32(ctx, 31, 0x1E38B4u);
    ctx->pc = 0x1E38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38ACu;
    // 0x1e38b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E38ACu, 0x1E38B4u)) {
        return;
    }
    ctx->pc = 0x1E38B4u;
label_1e38b4:
    // 0x1e38b4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_1e38b8:
    if (ctx->pc == 0x1E38B8u) {
        ctx->pc = 0x1E38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B4u;
        // 0x1e38b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38BCu;
        goto label_1e38bc;
    }
    ctx->pc = 0x1E38B4u;
    {
        const bool branch_taken_0x1e38b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B4u;
        // 0x1e38b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b4) {
            ctx->pc = 0x1E3A0Cu;
            goto label_1e3a0c;
        }
    }
    ctx->pc = 0x1E38BCu;
label_1e38bc:
    // 0x1e38bc: 0xc0932d4  jal         func_24CB50
label_1e38c0:
    if (ctx->pc == 0x1E38C0u) {
        ctx->pc = 0x1E38C4u;
        goto label_1e38c4;
    }
    ctx->pc = 0x1E38BCu;
    SET_GPR_U32(ctx, 31, 0x1E38C4u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1E38BCu, 0x1E38C4u)) {
        return;
    }
    ctx->pc = 0x1E38C4u;
label_1e38c4:
    // 0x1e38c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e38c8:
    // 0x1e38c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e38cc:
    // 0x1e38cc: 0x40f809  jalr        $v0
label_1e38d0:
    if (ctx->pc == 0x1E38D0u) {
        ctx->pc = 0x1E38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38CCu;
        // 0x1e38d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38D4u;
        goto label_1e38d4;
    }
    ctx->pc = 0x1E38CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E38D4u);
        ctx->pc = 0x1E38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38CCu;
        // 0x1e38d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E38CCu, 0x1E38D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E38D4u;
label_1e38d4:
    // 0x1e38d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e38d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e38d8:
    // 0x1e38d8: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_1e38dc:
    if (ctx->pc == 0x1E38DCu) {
        ctx->pc = 0x1E38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38D8u;
        // 0x1e38dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38E0u;
        goto label_1e38e0;
    }
    ctx->pc = 0x1E38D8u;
    {
        const bool branch_taken_0x1e38d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38D8u;
        // 0x1e38dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38d8) {
            ctx->pc = 0x1E3A08u;
            goto label_1e3a08;
        }
    }
    ctx->pc = 0x1E38E0u;
label_1e38e0:
    // 0x1e38e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e38e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e38e4:
    // 0x1e38e4: 0xc0927be  jal         func_249EF8
label_1e38e8:
    if (ctx->pc == 0x1E38E8u) {
        ctx->pc = 0x1E38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E4u;
        // 0x1e38e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38ECu;
        goto label_1e38ec;
    }
    ctx->pc = 0x1E38E4u;
    SET_GPR_U32(ctx, 31, 0x1E38ECu);
    ctx->pc = 0x1E38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38E4u;
    // 0x1e38e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E38E4u, 0x1E38ECu)) {
        return;
    }
    ctx->pc = 0x1E38ECu;
label_1e38ec:
    // 0x1e38ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e38f0:
    if (ctx->pc == 0x1E38F0u) {
        ctx->pc = 0x1E38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38ECu;
        // 0x1e38f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38F4u;
        goto label_1e38f4;
    }
    ctx->pc = 0x1E38ECu;
    {
        const bool branch_taken_0x1e38ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38ECu;
        // 0x1e38f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38ec) {
            ctx->pc = 0x1E38FCu;
            goto label_1e38fc;
        }
    }
    ctx->pc = 0x1E38F4u;
label_1e38f4:
    // 0x1e38f4: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e38f8:
    if (ctx->pc == 0x1E38F8u) {
        ctx->pc = 0x1E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38F4u;
        // 0x1e38f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38FCu;
        goto label_1e38fc;
    }
    ctx->pc = 0x1E38F4u;
    {
        const bool branch_taken_0x1e38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38F4u;
        // 0x1e38f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38f4) {
            ctx->pc = 0x1E3A0Cu;
            goto label_1e3a0c;
        }
    }
    ctx->pc = 0x1E38FCu;
label_1e38fc:
    // 0x1e38fc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1e3900:
    // 0x1e3900: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e3900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3904:
    // 0x1e3904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3908:
    // 0x1e3908: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e3908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e390c:
    // 0x1e390c: 0xc0927be  jal         func_249EF8
label_1e3910:
    if (ctx->pc == 0x1E3910u) {
        ctx->pc = 0x1E3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E390Cu;
        // 0x1e3910: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3914u;
        goto label_1e3914;
    }
    ctx->pc = 0x1E390Cu;
    SET_GPR_U32(ctx, 31, 0x1E3914u);
    ctx->pc = 0x1E3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E390Cu;
    // 0x1e3910: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E390Cu, 0x1E3914u)) {
        return;
    }
    ctx->pc = 0x1E3914u;
label_1e3914:
    // 0x1e3914: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e3918:
    if (ctx->pc == 0x1E3918u) {
        ctx->pc = 0x1E3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3914u;
        // 0x1e3918: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E391Cu;
        goto label_1e391c;
    }
    ctx->pc = 0x1E3914u;
    {
        const bool branch_taken_0x1e3914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3914u;
        // 0x1e3918: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3914) {
            ctx->pc = 0x1E38F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E391Cu;
label_1e391c:
    // 0x1e391c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3920:
    // 0x1e3920: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1e3924:
    // 0x1e3924: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1e3924u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1e3928:
    // 0x1e3928: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e3928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e392c:
    // 0x1e392c: 0xc0927be  jal         func_249EF8
label_1e3930:
    if (ctx->pc == 0x1E3930u) {
        ctx->pc = 0x1E3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E392Cu;
        // 0x1e3930: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3934u;
        goto label_1e3934;
    }
    ctx->pc = 0x1E392Cu;
    SET_GPR_U32(ctx, 31, 0x1E3934u);
    ctx->pc = 0x1E3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E392Cu;
    // 0x1e3930: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E392Cu, 0x1E3934u)) {
        return;
    }
    ctx->pc = 0x1E3934u;
label_1e3934:
    // 0x1e3934: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_1e3938:
    if (ctx->pc == 0x1E3938u) {
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E393Cu;
        goto label_1e393c;
    }
    ctx->pc = 0x1E3934u;
    {
        const bool branch_taken_0x1e3934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3934) {
            ctx->pc = 0x1E38F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E393Cu;
label_1e393c:
    // 0x1e393c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e393cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3940:
    // 0x1e3940: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1e3944:
    // 0x1e3944: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1e3944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1e3948:
    // 0x1e3948: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e394c:
    // 0x1e394c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_1e3950:
    if (ctx->pc == 0x1E3950u) {
        ctx->pc = 0x1E3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E394Cu;
        // 0x1e3950: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3954u;
        goto label_1e3954;
    }
    ctx->pc = 0x1E394Cu;
    {
        const bool branch_taken_0x1e394c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E394Cu;
        // 0x1e3950: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e394c) {
            ctx->pc = 0x1E3A08u;
            goto label_1e3a08;
        }
    }
    ctx->pc = 0x1E3954u;
label_1e3954:
    // 0x1e3954: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3958:
    // 0x1e3958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e395c:
    // 0x1e395c: 0x0  nop
    ctx->pc = 0x1e395cu;
    // NOP
label_1e3960:
    // 0x1e3960: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e3964:
    // 0x1e3964: 0xc0927be  jal         func_249EF8
label_1e3968:
    if (ctx->pc == 0x1E3968u) {
        ctx->pc = 0x1E3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3964u;
        // 0x1e3968: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E396Cu;
        goto label_1e396c;
    }
    ctx->pc = 0x1E3964u;
    SET_GPR_U32(ctx, 31, 0x1E396Cu);
    ctx->pc = 0x1E3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3964u;
    // 0x1e3968: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E3964u, 0x1E396Cu)) {
        return;
    }
    ctx->pc = 0x1E396Cu;
label_1e396c:
    // 0x1e396c: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_1e3970:
    if (ctx->pc == 0x1E3970u) {
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3974u;
        goto label_1e3974;
    }
    ctx->pc = 0x1E396Cu;
    {
        const bool branch_taken_0x1e396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E396Cu;
        // 0x1e3970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e396c) {
            ctx->pc = 0x1E38F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E3974u;
label_1e3974:
    // 0x1e3974: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e3974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e3978:
    // 0x1e3978: 0xc0927be  jal         func_249EF8
label_1e397c:
    if (ctx->pc == 0x1E397Cu) {
        ctx->pc = 0x1E397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3978u;
        // 0x1e397c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3980u;
        goto label_1e3980;
    }
    ctx->pc = 0x1E3978u;
    SET_GPR_U32(ctx, 31, 0x1E3980u);
    ctx->pc = 0x1E397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3978u;
    // 0x1e397c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E3978u, 0x1E3980u)) {
        return;
    }
    ctx->pc = 0x1E3980u;
label_1e3980:
    // 0x1e3980: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_1e3984:
    if (ctx->pc == 0x1E3984u) {
        ctx->pc = 0x1E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3980u;
        // 0x1e3984: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3988u;
        goto label_1e3988;
    }
    ctx->pc = 0x1E3980u;
    {
        const bool branch_taken_0x1e3980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3980u;
        // 0x1e3984: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3980) {
            ctx->pc = 0x1E38F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E3988u;
label_1e3988:
    // 0x1e3988: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e398c:
    // 0x1e398c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e3990:
    // 0x1e3990: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e3990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1e3994:
    // 0x1e3994: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e3998:
    // 0x1e3998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e399c:
    if (ctx->pc == 0x1E399Cu) {
        ctx->pc = 0x1E399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3998u;
        // 0x1e399c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39A0u;
        goto label_1e39a0;
    }
    ctx->pc = 0x1E3998u;
    {
        const bool branch_taken_0x1e3998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3998u;
        // 0x1e399c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3998) {
            ctx->pc = 0x1E39B0u;
            goto label_1e39b0;
        }
    }
    ctx->pc = 0x1E39A0u;
label_1e39a0:
    // 0x1e39a0: 0x1055000b  beq         $v0, $s5, . + 4 + (0xB << 2)
label_1e39a4:
    if (ctx->pc == 0x1E39A4u) {
        ctx->pc = 0x1E39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39A0u;
        // 0x1e39a4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39A8u;
        goto label_1e39a8;
    }
    ctx->pc = 0x1E39A0u;
    {
        const bool branch_taken_0x1e39a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1E39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39A0u;
        // 0x1e39a4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39a0) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e39ac:
    if (ctx->pc == 0x1E39ACu) {
        ctx->pc = 0x1E39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39A8u;
        // 0x1e39ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39B0u;
        goto label_1e39b0;
    }
    ctx->pc = 0x1E39A8u;
    {
        const bool branch_taken_0x1e39a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39A8u;
        // 0x1e39ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39a8) {
            ctx->pc = 0x1E39FCu;
            goto label_1e39fc;
        }
    }
    ctx->pc = 0x1E39B0u;
label_1e39b0:
    // 0x1e39b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e39b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e39b4:
    // 0x1e39b4: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_1e39b8:
    if (ctx->pc == 0x1E39B8u) {
        ctx->pc = 0x1E39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B4u;
        // 0x1e39b8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39BCu;
        goto label_1e39bc;
    }
    ctx->pc = 0x1E39B4u;
    {
        const bool branch_taken_0x1e39b4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1E39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B4u;
        // 0x1e39b8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39b4) {
            ctx->pc = 0x1E39ECu;
            goto label_1e39ec;
        }
    }
    ctx->pc = 0x1E39BCu;
label_1e39bc:
    // 0x1e39bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e39c0:
    // 0x1e39c0: 0xc0927be  jal         func_249EF8
label_1e39c4:
    if (ctx->pc == 0x1E39C4u) {
        ctx->pc = 0x1E39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C0u;
        // 0x1e39c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39C8u;
        goto label_1e39c8;
    }
    ctx->pc = 0x1E39C0u;
    SET_GPR_U32(ctx, 31, 0x1E39C8u);
    ctx->pc = 0x1E39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39C0u;
    // 0x1e39c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E39C0u, 0x1E39C8u)) {
        return;
    }
    ctx->pc = 0x1E39C8u;
label_1e39c8:
    // 0x1e39c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e39cc:
    if (ctx->pc == 0x1E39CCu) {
        ctx->pc = 0x1E39D0u;
        goto label_1e39d0;
    }
    ctx->pc = 0x1E39C8u;
    {
        const bool branch_taken_0x1e39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39c8) {
            ctx->pc = 0x1E39E4u;
            goto label_1e39e4;
        }
    }
    ctx->pc = 0x1E39D0u;
label_1e39d0:
    // 0x1e39d0: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
label_1e39d4:
    if (ctx->pc == 0x1E39D4u) {
        ctx->pc = 0x1E39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39D0u;
        // 0x1e39d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39D8u;
        goto label_1e39d8;
    }
    ctx->pc = 0x1E39D0u;
    {
        const bool branch_taken_0x1e39d0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1E39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39D0u;
        // 0x1e39d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39d0) {
            ctx->pc = 0x1E39ECu;
            goto label_1e39ec;
        }
    }
    ctx->pc = 0x1E39D8u;
label_1e39d8:
    // 0x1e39d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e39d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e39dc:
    // 0x1e39dc: 0xc0927aa  jal         func_249EA8
label_1e39e0:
    if (ctx->pc == 0x1E39E0u) {
        ctx->pc = 0x1E39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39DCu;
        // 0x1e39e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39E4u;
        goto label_1e39e4;
    }
    ctx->pc = 0x1E39DCu;
    SET_GPR_U32(ctx, 31, 0x1E39E4u);
    ctx->pc = 0x1E39E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39DCu;
    // 0x1e39e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E39DCu, 0x1E39E4u)) {
        return;
    }
    ctx->pc = 0x1E39E4u;
label_1e39e4:
    // 0x1e39e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e39e8:
    if (ctx->pc == 0x1E39E8u) {
        ctx->pc = 0x1E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39E4u;
        // 0x1e39e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39ECu;
        goto label_1e39ec;
    }
    ctx->pc = 0x1E39E4u;
    {
        const bool branch_taken_0x1e39e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39E4u;
        // 0x1e39e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39e4) {
            ctx->pc = 0x1E3A0Cu;
            goto label_1e3a0c;
        }
    }
    ctx->pc = 0x1E39ECu;
label_1e39ec:
    // 0x1e39ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e39f0:
    // 0x1e39f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e39f4:
    // 0x1e39f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e39f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e39f8:
    // 0x1e39f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e39f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e39fc:
    // 0x1e39fc: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1e39fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1e3a00:
    // 0x1e3a00: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_1e3a04:
    if (ctx->pc == 0x1E3A04u) {
        ctx->pc = 0x1E3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A00u;
        // 0x1e3a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A08u;
        goto label_1e3a08;
    }
    ctx->pc = 0x1E3A00u;
    {
        const bool branch_taken_0x1e3a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A00u;
        // 0x1e3a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a00) {
            ctx->pc = 0x1E3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3960;
        }
    }
    ctx->pc = 0x1E3A08u;
label_1e3a08:
    // 0x1e3a08: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e3a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a0c:
    // 0x1e3a0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e3a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e3a10:
    // 0x1e3a10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e3a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3a14:
    // 0x1e3a14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e3a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3a18:
    // 0x1e3a18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e3a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3a1c:
    // 0x1e3a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3a20:
    // 0x1e3a20: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e3a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3a24:
    // 0x1e3a24: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e3a24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3a28:
    // 0x1e3a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a2c:
    // 0x1e3a2c: 0x3e00008  jr          $ra
label_1e3a30:
    if (ctx->pc == 0x1E3A30u) {
        ctx->pc = 0x1E3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A2Cu;
        // 0x1e3a30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A34u;
        goto label_1e3a34;
    }
    ctx->pc = 0x1E3A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A2Cu;
        // 0x1e3a30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A34u;
label_1e3a34:
    // 0x1e3a34: 0x0  nop
    ctx->pc = 0x1e3a34u;
    // NOP
label_1e3a38:
    // 0x1e3a38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e3a3c:
    // 0x1e3a3c: 0x0  nop
    ctx->pc = 0x1e3a3cu;
    // NOP
    ctx->pc = 0x1e3a40u;
}

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

// Function: sub_00270880
// Address: 0x270880 - 0x270ad0
void sub_00270880_0x270880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270880_0x270880");
#endif

    switch (ctx->pc) {
        case 0x2708d8u: goto label_2708d8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270910u: goto label_270910;
        case 0x270920u: goto label_270920;
        case 0x27092cu: goto label_27092c;
        case 0x27093cu: goto label_27093c;
        case 0x270948u: goto label_270948;
        case 0x270958u: goto label_270958;
        case 0x270964u: goto label_270964;
        case 0x270974u: goto label_270974;
        case 0x270980u: goto label_270980;
        case 0x270990u: goto label_270990;
        case 0x27099cu: goto label_27099c;
        case 0x2709c4u: goto label_2709c4;
        case 0x2709d4u: goto label_2709d4;
        case 0x2709e4u: goto label_2709e4;
        case 0x2709f0u: goto label_2709f0;
        case 0x2709fcu: goto label_2709fc;
        case 0x270a40u: goto label_270a40;
        case 0x270a4cu: goto label_270a4c;
        case 0x270a60u: goto label_270a60;
        case 0x270a70u: goto label_270a70;
        case 0x270a80u: goto label_270a80;
        case 0x270a8cu: goto label_270a8c;
        case 0x270a98u: goto label_270a98;
        case 0x270aa4u: goto label_270aa4;
        default: break;
    }

    ctx->pc = 0x270880u;

    // 0x270880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x270880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x270884: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x270884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x270888: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x270888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27088c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x270890: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x270890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270894: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x270894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x270898: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x270898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27089c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2708a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2708a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2708a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2708a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2708a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2708a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708ac: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x2708acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2708b0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2708b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2708b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2708b8: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x2708b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x2708bc: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x2708bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2708c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2708c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2708c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2708c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2708c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2708C8u;
    {
        const bool branch_taken_0x2708c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2708CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708C8u;
        // 0x2708cc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708c8) {
            ctx->pc = 0x2708F0u;
            goto label_2708f0;
        }
    }
    ctx->pc = 0x2708D0u;
    // 0x2708d0: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2708D0u;
    SET_GPR_U32(ctx, 31, 0x2708D8u);
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2708D0u, 0x2708D8u)) {
        return;
    }
    ctx->pc = 0x2708D8u;
label_2708d8:
    // 0x2708d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708D8u;
    {
        const bool branch_taken_0x2708d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2708DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708D8u;
        // 0x2708dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708d8) {
            ctx->pc = 0x2708F4u;
            goto label_2708f4;
        }
    }
    ctx->pc = 0x2708E0u;
    // 0x2708e0: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x2708e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2708e4: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x2708e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2708e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2708E8u;
    {
        const bool branch_taken_0x2708e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708E8u;
        // 0x2708ec: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708e8) {
            ctx->pc = 0x270AA8u;
            goto label_270aa8;
        }
    }
    ctx->pc = 0x2708F0u;
label_2708f0:
    // 0x2708f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2708f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2708f4:
    // 0x2708f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2708F4u;
    SET_GPR_U32(ctx, 31, 0x2708FCu);
    ctx->pc = 0x2708F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708F4u;
    // 0x2708f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2708F4u, 0x2708FCu)) {
        return;
    }
    ctx->pc = 0x2708FCu;
label_2708fc:
    // 0x2708fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2708fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270900: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270904: 0xdc25c8e8  ld          $a1, -0x3718($at)
    ctx->pc = 0x270904u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC8E8u));
    // 0x270908: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270908u;
    SET_GPR_U32(ctx, 31, 0x270910u);
    ctx->pc = 0x27090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270908u;
    // 0x27090c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270908u, 0x270910u)) {
        return;
    }
    ctx->pc = 0x270910u;
label_270910:
    // 0x270910: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270914: 0xdc25c8f0  ld          $a1, -0x3710($at)
    ctx->pc = 0x270914u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC8F0u));
    // 0x270918: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270918u;
    SET_GPR_U32(ctx, 31, 0x270920u);
    ctx->pc = 0x27091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270918u;
    // 0x27091c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270918u, 0x270920u)) {
        return;
    }
    ctx->pc = 0x270920u;
label_270920:
    // 0x270920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270924: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270924u;
    SET_GPR_U32(ctx, 31, 0x27092Cu);
    ctx->pc = 0x270928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270924u;
    // 0x270928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270924u, 0x27092Cu)) {
        return;
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270930: 0xdc25c8f8  ld          $a1, -0x3708($at)
    ctx->pc = 0x270930u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC8F8u));
    // 0x270934: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270934u;
    SET_GPR_U32(ctx, 31, 0x27093Cu);
    ctx->pc = 0x270938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270934u;
    // 0x270938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270934u, 0x27093Cu)) {
        return;
    }
    ctx->pc = 0x27093Cu;
label_27093c:
    // 0x27093c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270940: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270940u;
    SET_GPR_U32(ctx, 31, 0x270948u);
    ctx->pc = 0x270944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270940u;
    // 0x270944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270940u, 0x270948u)) {
        return;
    }
    ctx->pc = 0x270948u;
label_270948:
    // 0x270948: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x27094c: 0xdc25c900  ld          $a1, -0x3700($at)
    ctx->pc = 0x27094cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC900u));
    // 0x270950: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270950u;
    SET_GPR_U32(ctx, 31, 0x270958u);
    ctx->pc = 0x270954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270950u;
    // 0x270954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270950u, 0x270958u)) {
        return;
    }
    ctx->pc = 0x270958u;
label_270958:
    // 0x270958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27095c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x27095Cu;
    SET_GPR_U32(ctx, 31, 0x270964u);
    ctx->pc = 0x270960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27095Cu;
    // 0x270960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x27095Cu, 0x270964u)) {
        return;
    }
    ctx->pc = 0x270964u;
label_270964:
    // 0x270964: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270968: 0xdc25c908  ld          $a1, -0x36F8($at)
    ctx->pc = 0x270968u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC908u));
    // 0x27096c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27096Cu;
    SET_GPR_U32(ctx, 31, 0x270974u);
    ctx->pc = 0x270970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27096Cu;
    // 0x270970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27096Cu, 0x270974u)) {
        return;
    }
    ctx->pc = 0x270974u;
label_270974:
    // 0x270974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270978: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270978u;
    SET_GPR_U32(ctx, 31, 0x270980u);
    ctx->pc = 0x27097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270978u;
    // 0x27097c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270978u, 0x270980u)) {
        return;
    }
    ctx->pc = 0x270980u;
label_270980:
    // 0x270980: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x270980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x270984: 0xdc25c910  ld          $a1, -0x36F0($at)
    ctx->pc = 0x270984u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC910u));
    // 0x270988: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270988u;
    SET_GPR_U32(ctx, 31, 0x270990u);
    ctx->pc = 0x27098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270988u;
    // 0x27098c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270988u, 0x270990u)) {
        return;
    }
    ctx->pc = 0x270990u;
label_270990:
    // 0x270990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270994: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270994u;
    SET_GPR_U32(ctx, 31, 0x27099Cu);
    ctx->pc = 0x270998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270994u;
    // 0x270998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270994u, 0x27099Cu)) {
        return;
    }
    ctx->pc = 0x27099Cu;
label_27099c:
    // 0x27099c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27099cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709a0: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x2709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x2709a4: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x2709a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x2709a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2709a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2709ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2709ACu;
    {
        const bool branch_taken_0x2709ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2709B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709ACu;
        // 0x2709b0: 0x3c023fe9  lui         $v0, 0x3FE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709ac) {
            ctx->pc = 0x270A0Cu;
            goto label_270a0c;
        }
    }
    ctx->pc = 0x2709B4u;
    // 0x2709b4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2709b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2709b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2709b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2709bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2709BCu;
    SET_GPR_U32(ctx, 31, 0x2709C4u);
    ctx->pc = 0x2709C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709BCu;
    // 0x2709c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2709BCu, 0x2709C4u)) {
        return;
    }
    ctx->pc = 0x2709C4u;
label_2709c4:
    // 0x2709c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2709c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2709c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709cc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2709CCu;
    SET_GPR_U32(ctx, 31, 0x2709D4u);
    ctx->pc = 0x2709D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709CCu;
    // 0x2709d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2709CCu, 0x2709D4u)) {
        return;
    }
    ctx->pc = 0x2709D4u;
label_2709d4:
    // 0x2709d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2709d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2709d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709dc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2709DCu;
    SET_GPR_U32(ctx, 31, 0x2709E4u);
    ctx->pc = 0x2709E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709DCu;
    // 0x2709e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2709DCu, 0x2709E4u)) {
        return;
    }
    ctx->pc = 0x2709E4u;
label_2709e4:
    // 0x2709e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2709e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709e8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2709E8u;
    SET_GPR_U32(ctx, 31, 0x2709F0u);
    ctx->pc = 0x2709ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709E8u;
    // 0x2709ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2709E8u, 0x2709F0u)) {
        return;
    }
    ctx->pc = 0x2709F0u;
label_2709f0:
    // 0x2709f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2709f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709f4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2709F4u;
    SET_GPR_U32(ctx, 31, 0x2709FCu);
    ctx->pc = 0x2709F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709F4u;
    // 0x2709f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2709F4u, 0x2709FCu)) {
        return;
    }
    ctx->pc = 0x2709FCu;
label_2709fc:
    // 0x2709fc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2709fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x270a00: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x270a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x270a04: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x270A04u;
    {
        const bool branch_taken_0x270a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a04) {
            ctx->pc = 0x270A9Cu;
            goto label_270a9c;
        }
    }
    ctx->pc = 0x270A0Cu;
label_270a0c:
    // 0x270a0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x270a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x270a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270A10u;
    {
        const bool branch_taken_0x270a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A10u;
        // 0x270a14: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a10) {
            ctx->pc = 0x270A28u;
            goto label_270a28;
        }
    }
    ctx->pc = 0x270A18u;
    // 0x270a18: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x270a18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x270a1c: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x270a1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x270a20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270A20u;
    {
        const bool branch_taken_0x270a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a20) {
            ctx->pc = 0x270A30u;
            goto label_270a30;
        }
    }
    ctx->pc = 0x270A28u;
label_270a28:
    // 0x270a28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x270a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x270a2c: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x270a2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_270a30:
    // 0x270a30: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x270a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x270a34: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x270a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x270a38: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270A38u;
    SET_GPR_U32(ctx, 31, 0x270A40u);
    ctx->pc = 0x270A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A38u;
    // 0x270a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270A38u, 0x270A40u)) {
        return;
    }
    ctx->pc = 0x270A40u;
label_270a40:
    // 0x270a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a44: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270A44u;
    SET_GPR_U32(ctx, 31, 0x270A4Cu);
    ctx->pc = 0x270A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A44u;
    // 0x270a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270A44u, 0x270A4Cu)) {
        return;
    }
    ctx->pc = 0x270A4Cu;
label_270a4c:
    // 0x270a4c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x270a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x270a50: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x270a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x270a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a58: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270A58u;
    SET_GPR_U32(ctx, 31, 0x270A60u);
    ctx->pc = 0x270A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A58u;
    // 0x270a5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270A58u, 0x270A60u)) {
        return;
    }
    ctx->pc = 0x270A60u;
label_270a60:
    // 0x270a60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a68: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270A68u;
    SET_GPR_U32(ctx, 31, 0x270A70u);
    ctx->pc = 0x270A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A68u;
    // 0x270a6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270A68u, 0x270A70u)) {
        return;
    }
    ctx->pc = 0x270A70u;
label_270a70:
    // 0x270a70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a78: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270A78u;
    SET_GPR_U32(ctx, 31, 0x270A80u);
    ctx->pc = 0x270A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A78u;
    // 0x270a7c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270A78u, 0x270A80u)) {
        return;
    }
    ctx->pc = 0x270A80u;
label_270a80:
    // 0x270a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a84: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270A84u;
    SET_GPR_U32(ctx, 31, 0x270A8Cu);
    ctx->pc = 0x270A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A84u;
    // 0x270a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270A84u, 0x270A8Cu)) {
        return;
    }
    ctx->pc = 0x270A8Cu;
label_270a8c:
    // 0x270a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a90: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270A90u;
    SET_GPR_U32(ctx, 31, 0x270A98u);
    ctx->pc = 0x270A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A90u;
    // 0x270a94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270A90u, 0x270A98u)) {
        return;
    }
    ctx->pc = 0x270A98u;
label_270a98:
    // 0x270a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270a9c:
    // 0x270a9c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270A9Cu;
    SET_GPR_U32(ctx, 31, 0x270AA4u);
    ctx->pc = 0x270AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A9Cu;
    // 0x270aa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270A9Cu, 0x270AA4u)) {
        return;
    }
    ctx->pc = 0x270AA4u;
label_270aa4:
    // 0x270aa4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x270aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_270aa8:
    // 0x270aa8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x270aa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270aac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x270aacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270ab0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x270ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270ab4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x270ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270ab8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x270ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270abc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x270abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270ac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x270ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x270AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AC4u;
        // 0x270ac8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270ACCu;
    // 0x270acc: 0x0  nop
    ctx->pc = 0x270accu;
    // NOP
    ctx->pc = 0x270ad0u;
}

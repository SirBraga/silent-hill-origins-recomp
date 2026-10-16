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

// Function: sub_00123820
// Address: 0x123820 - 0x123b78
void sub_00123820_0x123820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123820_0x123820");
#endif

    switch (ctx->pc) {
        case 0x123820u: goto label_123820;
        case 0x123824u: goto label_123824;
        case 0x123828u: goto label_123828;
        case 0x12382cu: goto label_12382c;
        case 0x123830u: goto label_123830;
        case 0x123834u: goto label_123834;
        case 0x123838u: goto label_123838;
        case 0x12383cu: goto label_12383c;
        case 0x123840u: goto label_123840;
        case 0x123844u: goto label_123844;
        case 0x123848u: goto label_123848;
        case 0x12384cu: goto label_12384c;
        case 0x123850u: goto label_123850;
        case 0x123854u: goto label_123854;
        case 0x123858u: goto label_123858;
        case 0x12385cu: goto label_12385c;
        case 0x123860u: goto label_123860;
        case 0x123864u: goto label_123864;
        case 0x123868u: goto label_123868;
        case 0x12386cu: goto label_12386c;
        case 0x123870u: goto label_123870;
        case 0x123874u: goto label_123874;
        case 0x123878u: goto label_123878;
        case 0x12387cu: goto label_12387c;
        case 0x123880u: goto label_123880;
        case 0x123884u: goto label_123884;
        case 0x123888u: goto label_123888;
        case 0x12388cu: goto label_12388c;
        case 0x123890u: goto label_123890;
        case 0x123894u: goto label_123894;
        case 0x123898u: goto label_123898;
        case 0x12389cu: goto label_12389c;
        case 0x1238a0u: goto label_1238a0;
        case 0x1238a4u: goto label_1238a4;
        case 0x1238a8u: goto label_1238a8;
        case 0x1238acu: goto label_1238ac;
        case 0x1238b0u: goto label_1238b0;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238b8u: goto label_1238b8;
        case 0x1238bcu: goto label_1238bc;
        case 0x1238c0u: goto label_1238c0;
        case 0x1238c4u: goto label_1238c4;
        case 0x1238c8u: goto label_1238c8;
        case 0x1238ccu: goto label_1238cc;
        case 0x1238d0u: goto label_1238d0;
        case 0x1238d4u: goto label_1238d4;
        case 0x1238d8u: goto label_1238d8;
        case 0x1238dcu: goto label_1238dc;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238e4u: goto label_1238e4;
        case 0x1238e8u: goto label_1238e8;
        case 0x1238ecu: goto label_1238ec;
        case 0x1238f0u: goto label_1238f0;
        case 0x1238f4u: goto label_1238f4;
        case 0x1238f8u: goto label_1238f8;
        case 0x1238fcu: goto label_1238fc;
        case 0x123900u: goto label_123900;
        case 0x123904u: goto label_123904;
        case 0x123908u: goto label_123908;
        case 0x12390cu: goto label_12390c;
        case 0x123910u: goto label_123910;
        case 0x123914u: goto label_123914;
        case 0x123918u: goto label_123918;
        case 0x12391cu: goto label_12391c;
        case 0x123920u: goto label_123920;
        case 0x123924u: goto label_123924;
        case 0x123928u: goto label_123928;
        case 0x12392cu: goto label_12392c;
        case 0x123930u: goto label_123930;
        case 0x123934u: goto label_123934;
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        default: break;
    }

    ctx->pc = 0x123820u;

label_123820:
    // 0x123820: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x123820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_123824:
    // 0x123824: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x123824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_123828:
    // 0x123828: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x123828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_12382c:
    // 0x12382c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123830:
    // 0x123830: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x123830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_123834:
    // 0x123834: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x123834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_123838:
    // 0x123838: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_12383c:
    // 0x12383c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x12383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_123840:
    // 0x123840: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x123840u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123844:
    // 0x123844: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x123844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_123848:
    // 0x123848: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x123848u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12384c:
    // 0x12384c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_123850:
    // 0x123850: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x123850u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_123854:
    // 0x123854: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x123854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_123858:
    // 0x123858: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x123858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12385c:
    // 0x12385c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x12385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_123860:
    // 0x123860: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x123860u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_123864:
    // 0x123864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_123868:
    // 0x123868: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x123868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_12386c:
    // 0x12386c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x12386cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_123870:
    // 0x123870: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x123870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_123874:
    // 0x123874: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x123874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_123878:
    // 0x123878: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_12387c:
    // 0x12387c: 0x8c6201ac  lw          $v0, 0x1AC($v1)
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_123880:
    // 0x123880: 0x40f809  jalr        $v0
label_123884:
    if (ctx->pc == 0x123884u) {
        ctx->pc = 0x123884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123880u;
        // 0x123884: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123888u;
        goto label_123888;
    }
    ctx->pc = 0x123880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123888u);
        ctx->pc = 0x123884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123880u;
        // 0x123884: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123880u, 0x123888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123888u;
label_123888:
    // 0x123888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12388c:
    // 0x12388c: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x12388cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_123890:
    // 0x123890: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_123894:
    if (ctx->pc == 0x123894u) {
        ctx->pc = 0x123898u;
        goto label_123898;
    }
    ctx->pc = 0x123890u;
    {
        const bool branch_taken_0x123890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123890) {
            ctx->pc = 0x1238F4u;
            goto label_1238f4;
        }
    }
    ctx->pc = 0x123898u;
label_123898:
    // 0x123898: 0xc06820a  jal         func_1A0828
label_12389c:
    if (ctx->pc == 0x12389Cu) {
        ctx->pc = 0x12389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123898u;
        // 0x12389c: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238A0u;
        goto label_1238a0;
    }
    ctx->pc = 0x123898u;
    SET_GPR_U32(ctx, 31, 0x1238A0u);
    ctx->pc = 0x12389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123898u;
    // 0x12389c: 0x26440320  addiu       $a0, $s2, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0828u, 0x123898u, 0x1238A0u)) {
        return;
    }
    ctx->pc = 0x1238A0u;
label_1238a0:
    // 0x1238a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1238a4:
    if (ctx->pc == 0x1238A4u) {
        ctx->pc = 0x1238A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238A0u;
        // 0x1238a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238A8u;
        goto label_1238a8;
    }
    ctx->pc = 0x1238A0u;
    {
        const bool branch_taken_0x1238a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238A0u;
        // 0x1238a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238a0) {
            ctx->pc = 0x1238F4u;
            goto label_1238f4;
        }
    }
    ctx->pc = 0x1238A8u;
label_1238a8:
    // 0x1238a8: 0xc0406e8  jal         func_101BA0
label_1238ac:
    if (ctx->pc == 0x1238ACu) {
        ctx->pc = 0x1238ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238A8u;
        // 0x1238ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238B0u;
        goto label_1238b0;
    }
    ctx->pc = 0x1238A8u;
    SET_GPR_U32(ctx, 31, 0x1238B0u);
    ctx->pc = 0x1238ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238A8u;
    // 0x1238ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x1238A8u, 0x1238B0u)) {
        return;
    }
    ctx->pc = 0x1238B0u;
label_1238b0:
    // 0x1238b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1238b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1238b4:
    // 0x1238b4: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x1238b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_1238b8:
    // 0x1238b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1238b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1238bc:
    // 0x1238bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1238c0:
    if (ctx->pc == 0x1238C0u) {
        ctx->pc = 0x1238C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238BCu;
        // 0x1238c0: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238C4u;
        goto label_1238c4;
    }
    ctx->pc = 0x1238BCu;
    {
        const bool branch_taken_0x1238bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238BCu;
        // 0x1238c0: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238bc) {
            ctx->pc = 0x1238D8u;
            goto label_1238d8;
        }
    }
    ctx->pc = 0x1238C4u;
label_1238c4:
    // 0x1238c4: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x1238c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1238c8:
    // 0x1238c8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1238c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1238cc:
    // 0x1238cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1238d0:
    // 0x1238d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1238d4:
    if (ctx->pc == 0x1238D4u) {
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238D8u;
        goto label_1238d8;
    }
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x1238DCu;
            goto label_1238dc;
        }
    }
    ctx->pc = 0x1238D8u;
label_1238d8:
    // 0x1238d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1238d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1238dc:
    // 0x1238dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1238e0:
    if (ctx->pc == 0x1238E0u) {
        ctx->pc = 0x1238E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238DCu;
        // 0x1238e0: 0x41027  nor         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238E4u;
        goto label_1238e4;
    }
    ctx->pc = 0x1238DCu;
    {
        const bool branch_taken_0x1238dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238DCu;
        // 0x1238e0: 0x41027  nor         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238dc) {
            ctx->pc = 0x1238ECu;
            goto label_1238ec;
        }
    }
    ctx->pc = 0x1238E4u;
label_1238e4:
    // 0x1238e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1238e8:
    if (ctx->pc == 0x1238E8u) {
        ctx->pc = 0x1238E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238E4u;
        // 0x1238e8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1238ECu;
        goto label_1238ec;
    }
    ctx->pc = 0x1238E4u;
    {
        const bool branch_taken_0x1238e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238E4u;
        // 0x1238e8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238e4) {
            ctx->pc = 0x1238F4u;
            goto label_1238f4;
        }
    }
    ctx->pc = 0x1238ECu;
label_1238ec:
    // 0x1238ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1238f0:
    // 0x1238f0: 0x2a2980a  movz        $s3, $s5, $v0
    ctx->pc = 0x1238f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21));
label_1238f4:
    // 0x1238f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1238f8:
    // 0x1238f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1238f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1238fc:
    // 0x1238fc: 0x12620070  beq         $s3, $v0, . + 4 + (0x70 << 2)
label_123900:
    if (ctx->pc == 0x123900u) {
        ctx->pc = 0x123904u;
        goto label_123904;
    }
    ctx->pc = 0x1238FCu;
    {
        const bool branch_taken_0x1238fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1238fc) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123904u;
label_123904:
    // 0x123904: 0x26500320  addiu       $s0, $s2, 0x320
    ctx->pc = 0x123904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_123908:
    // 0x123908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12390c:
    // 0x12390c: 0xc068228  jal         func_1A08A0
label_123910:
    if (ctx->pc == 0x123910u) {
        ctx->pc = 0x123910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12390Cu;
        // 0x123910: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123914u;
        goto label_123914;
    }
    ctx->pc = 0x12390Cu;
    SET_GPR_U32(ctx, 31, 0x123914u);
    ctx->pc = 0x123910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12390Cu;
    // 0x123910: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A08A0u, 0x12390Cu, 0x123914u)) {
        return;
    }
    ctx->pc = 0x123914u;
label_123914:
    // 0x123914: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123918:
    // 0x123918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12391c:
    // 0x12391c: 0xc068220  jal         func_1A0880
label_123920:
    if (ctx->pc == 0x123920u) {
        ctx->pc = 0x123920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12391Cu;
        // 0x123920: 0xc6140818  lwc1        $f20, 0x818($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123924u;
        goto label_123924;
    }
    ctx->pc = 0x12391Cu;
    SET_GPR_U32(ctx, 31, 0x123924u);
    ctx->pc = 0x123920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12391Cu;
    // 0x123920: 0xc6140818  lwc1        $f20, 0x818($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0880u, 0x12391Cu, 0x123924u)) {
        return;
    }
    ctx->pc = 0x123924u;
label_123924:
    // 0x123924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123928:
    // 0x123928: 0xc068202  jal         func_1A0808
label_12392c:
    if (ctx->pc == 0x12392Cu) {
        ctx->pc = 0x12392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123928u;
        // 0x12392c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123930u;
        goto label_123930;
    }
    ctx->pc = 0x123928u;
    SET_GPR_U32(ctx, 31, 0x123930u);
    ctx->pc = 0x12392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123928u;
    // 0x12392c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0808u, 0x123928u, 0x123930u)) {
        return;
    }
    ctx->pc = 0x123930u;
label_123930:
    // 0x123930: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
label_123934:
    if (ctx->pc == 0x123934u) {
        ctx->pc = 0x123934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123930u;
        // 0x123934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123938u;
        goto label_123938;
    }
    ctx->pc = 0x123930u;
    {
        const bool branch_taken_0x123930 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x123934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123930u;
        // 0x123934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123930) {
            ctx->pc = 0x12393Cu;
            goto label_12393c;
        }
    }
    ctx->pc = 0x123938u;
label_123938:
    // 0x123938: 0x8e240834  lw          $a0, 0x834($s1)
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2100)));
label_12393c:
    // 0x12393c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123940:
    // 0x123940: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_123944:
    if (ctx->pc == 0x123944u) {
        ctx->pc = 0x123944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123940u;
        // 0x123944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123948u;
        goto label_123948;
    }
    ctx->pc = 0x123940u;
    {
        const bool branch_taken_0x123940 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x123944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123940u;
        // 0x123944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123940) {
            ctx->pc = 0x123950u;
            goto label_123950;
        }
    }
    ctx->pc = 0x123948u;
label_123948:
    // 0x123948: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_12394c:
    if (ctx->pc == 0x12394Cu) {
        ctx->pc = 0x12394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123948u;
        // 0x12394c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123950u;
        goto label_123950;
    }
    ctx->pc = 0x123948u;
    {
        const bool branch_taken_0x123948 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x123948) {
            ctx->pc = 0x12394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123948u;
            // 0x12394c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123950u;
            goto label_123950;
        }
    }
    ctx->pc = 0x123950u;
label_123950:
    // 0x123950: 0xe65501c0  swc1        $f21, 0x1C0($s2)
    ctx->pc = 0x123950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 448), bits); }
label_123954:
    // 0x123954: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x123954u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_123958:
    // 0x123958: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12395c:
    // 0x12395c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123960:
    // 0x123960: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
label_123964:
    // 0x123964: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x123964u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_123968:
    // 0x123968: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x123968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_12396c:
    // 0x12396c: 0xae470c88  sw          $a3, 0xC88($s2)
    ctx->pc = 0x12396cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3208), GPR_U32(ctx, 7));
label_123970:
    // 0x123970: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x123970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
label_123974:
    // 0x123974: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
label_123978:
    // 0x123978: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_12397c:
    if (ctx->pc == 0x12397Cu) {
        ctx->pc = 0x12397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123978u;
        // 0x12397c: 0x304a0001  andi        $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123980u;
        goto label_123980;
    }
    ctx->pc = 0x123978u;
    {
        const bool branch_taken_0x123978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123978u;
        // 0x12397c: 0x304a0001  andi        $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123978) {
            ctx->pc = 0x1239C4u;
            goto label_1239c4;
        }
    }
    ctx->pc = 0x123980u;
label_123980:
    // 0x123980: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x123980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_123984:
    // 0x123984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_123988:
    if (ctx->pc == 0x123988u) {
        ctx->pc = 0x123988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123984u;
        // 0x123988: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12398Cu;
        goto label_12398c;
    }
    ctx->pc = 0x123984u;
    {
        const bool branch_taken_0x123984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123984u;
        // 0x123988: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123984) {
            ctx->pc = 0x12399Cu;
            goto label_12399c;
        }
    }
    ctx->pc = 0x12398Cu;
label_12398c:
    // 0x12398c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_123990:
    if (ctx->pc == 0x123990u) {
        ctx->pc = 0x123990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12398Cu;
        // 0x123990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123994u;
        goto label_123994;
    }
    ctx->pc = 0x12398Cu;
    {
        const bool branch_taken_0x12398c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12398Cu;
        // 0x123990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12398c) {
            ctx->pc = 0x1239ACu;
            goto label_1239ac;
        }
    }
    ctx->pc = 0x123994u;
label_123994:
    // 0x123994: 0x10000014  b           . + 4 + (0x14 << 2)
label_123998:
    if (ctx->pc == 0x123998u) {
        ctx->pc = 0x123998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123994u;
        // 0x123998: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12399Cu;
        goto label_12399c;
    }
    ctx->pc = 0x123994u;
    {
        const bool branch_taken_0x123994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123994u;
        // 0x123998: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123994) {
            ctx->pc = 0x1239E8u;
            goto label_1239e8;
        }
    }
    ctx->pc = 0x12399Cu;
label_12399c:
    // 0x12399c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_1239a0:
    if (ctx->pc == 0x1239A0u) {
        ctx->pc = 0x1239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12399Cu;
        // 0x1239a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239A4u;
        goto label_1239a4;
    }
    ctx->pc = 0x12399Cu;
    {
        const bool branch_taken_0x12399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12399Cu;
        // 0x1239a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12399c) {
            ctx->pc = 0x1239DCu;
            goto label_1239dc;
        }
    }
    ctx->pc = 0x1239A4u;
label_1239a4:
    // 0x1239a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1239a8:
    if (ctx->pc == 0x1239A8u) {
        ctx->pc = 0x1239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239A4u;
        // 0x1239a8: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239ACu;
        goto label_1239ac;
    }
    ctx->pc = 0x1239A4u;
    {
        const bool branch_taken_0x1239a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239A4u;
        // 0x1239a8: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239a4) {
            ctx->pc = 0x1239E8u;
            goto label_1239e8;
        }
    }
    ctx->pc = 0x1239ACu;
label_1239ac:
    // 0x1239ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1239acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1239b0:
    // 0x1239b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1239b4:
    // 0x1239b4: 0xc040284  jal         func_100A10
label_1239b8:
    if (ctx->pc == 0x1239B8u) {
        ctx->pc = 0x1239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239B4u;
        // 0x1239b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239BCu;
        goto label_1239bc;
    }
    ctx->pc = 0x1239B4u;
    SET_GPR_U32(ctx, 31, 0x1239BCu);
    ctx->pc = 0x1239B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239B4u;
    // 0x1239b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100A10u, 0x1239B4u, 0x1239BCu)) {
        return;
    }
    ctx->pc = 0x1239BCu;
label_1239bc:
    // 0x1239bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1239c0:
    if (ctx->pc == 0x1239C0u) {
        ctx->pc = 0x1239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239BCu;
        // 0x1239c0: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239C4u;
        goto label_1239c4;
    }
    ctx->pc = 0x1239BCu;
    {
        const bool branch_taken_0x1239bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239BCu;
        // 0x1239c0: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239bc) {
            ctx->pc = 0x1239E8u;
            goto label_1239e8;
        }
    }
    ctx->pc = 0x1239C4u;
label_1239c4:
    // 0x1239c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1239c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1239c8:
    // 0x1239c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1239c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1239cc:
    // 0x1239cc: 0xc04074e  jal         func_101D38
label_1239d0:
    if (ctx->pc == 0x1239D0u) {
        ctx->pc = 0x1239D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239CCu;
        // 0x1239d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239D4u;
        goto label_1239d4;
    }
    ctx->pc = 0x1239CCu;
    SET_GPR_U32(ctx, 31, 0x1239D4u);
    ctx->pc = 0x1239D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239CCu;
    // 0x1239d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101D38u, 0x1239CCu, 0x1239D4u)) {
        return;
    }
    ctx->pc = 0x1239D4u;
label_1239d4:
    // 0x1239d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1239d8:
    if (ctx->pc == 0x1239D8u) {
        ctx->pc = 0x1239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239D4u;
        // 0x1239d8: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239DCu;
        goto label_1239dc;
    }
    ctx->pc = 0x1239D4u;
    {
        const bool branch_taken_0x1239d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239D4u;
        // 0x1239d8: 0x8e22083c  lw          $v0, 0x83C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239d4) {
            ctx->pc = 0x1239E8u;
            goto label_1239e8;
        }
    }
    ctx->pc = 0x1239DCu;
label_1239dc:
    // 0x1239dc: 0xc04074a  jal         func_101D28
label_1239e0:
    if (ctx->pc == 0x1239E0u) {
        ctx->pc = 0x1239E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239DCu;
        // 0x1239e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239E4u;
        goto label_1239e4;
    }
    ctx->pc = 0x1239DCu;
    SET_GPR_U32(ctx, 31, 0x1239E4u);
    ctx->pc = 0x1239E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239DCu;
    // 0x1239e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101D28u, 0x1239DCu, 0x1239E4u)) {
        return;
    }
    ctx->pc = 0x1239E4u;
label_1239e4:
    // 0x1239e4: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
label_1239e8:
    // 0x1239e8: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
label_1239ec:
    // 0x1239ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1239ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1239f0:
    // 0x1239f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1239f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1239f4:
    // 0x1239f4: 0xae420c8c  sw          $v0, 0xC8C($s2)
    ctx->pc = 0x1239f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 2));
label_1239f8:
    // 0x1239f8: 0x8623083e  lh          $v1, 0x83E($s1)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2110)));
label_1239fc:
    // 0x1239fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1239fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_123a00:
    // 0x123a00: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_123a04:
    if (ctx->pc == 0x123A04u) {
        ctx->pc = 0x123A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A00u;
        // 0x123a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A08u;
        goto label_123a08;
    }
    ctx->pc = 0x123A00u;
    {
        const bool branch_taken_0x123a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A00u;
        // 0x123a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a00) {
            ctx->pc = 0x123A74u;
            goto label_123a74;
        }
    }
    ctx->pc = 0x123A08u;
label_123a08:
    // 0x123a08: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_123a0c:
    // 0x123a0c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_123a10:
    if (ctx->pc == 0x123A10u) {
        ctx->pc = 0x123A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A0Cu;
        // 0x123a10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A14u;
        goto label_123a14;
    }
    ctx->pc = 0x123A0Cu;
    {
        const bool branch_taken_0x123a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A0Cu;
        // 0x123a10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a0c) {
            ctx->pc = 0x123A2Cu;
            goto label_123a2c;
        }
    }
    ctx->pc = 0x123A14u;
label_123a14:
    // 0x123a14: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_123a18:
    // 0x123a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x123a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123a1c:
    // 0x123a1c: 0xc042242  jal         func_108908
label_123a20:
    if (ctx->pc == 0x123A20u) {
        ctx->pc = 0x123A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A1Cu;
        // 0x123a20: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A24u;
        goto label_123a24;
    }
    ctx->pc = 0x123A1Cu;
    SET_GPR_U32(ctx, 31, 0x123A24u);
    ctx->pc = 0x123A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A1Cu;
    // 0x123a20: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108908u, 0x123A1Cu, 0x123A24u)) {
        return;
    }
    ctx->pc = 0x123A24u;
label_123a24:
    // 0x123a24: 0x10000014  b           . + 4 + (0x14 << 2)
label_123a28:
    if (ctx->pc == 0x123A28u) {
        ctx->pc = 0x123A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A24u;
        // 0x123a28: 0x26440f84  addiu       $a0, $s2, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3972));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A2Cu;
        goto label_123a2c;
    }
    ctx->pc = 0x123A24u;
    {
        const bool branch_taken_0x123a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A24u;
        // 0x123a28: 0x26440f84  addiu       $a0, $s2, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a24) {
            ctx->pc = 0x123A78u;
            goto label_123a78;
        }
    }
    ctx->pc = 0x123A2Cu;
label_123a2c:
    // 0x123a2c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_123a30:
    if (ctx->pc == 0x123A30u) {
        ctx->pc = 0x123A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A2Cu;
        // 0x123a30: 0x26440f84  addiu       $a0, $s2, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3972));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A34u;
        goto label_123a34;
    }
    ctx->pc = 0x123A2Cu;
    {
        const bool branch_taken_0x123a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123a2c) {
            ctx->pc = 0x123A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123A2Cu;
            // 0x123a30: 0x26440f84  addiu       $a0, $s2, 0xF84 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3972));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123A78u;
            goto label_123a78;
        }
    }
    ctx->pc = 0x123A34u;
label_123a34:
    // 0x123a34: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_123a38:
    // 0x123a38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x123a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123a3c:
    // 0x123a3c: 0x26104238  addiu       $s0, $s0, 0x4238
    ctx->pc = 0x123a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16952));
label_123a40:
    // 0x123a40: 0xc04223e  jal         func_1088F8
label_123a44:
    if (ctx->pc == 0x123A44u) {
        ctx->pc = 0x123A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A40u;
        // 0x123a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A48u;
        goto label_123a48;
    }
    ctx->pc = 0x123A40u;
    SET_GPR_U32(ctx, 31, 0x123A48u);
    ctx->pc = 0x123A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A40u;
    // 0x123a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1088F8u, 0x123A40u, 0x123A48u)) {
        return;
    }
    ctx->pc = 0x123A48u;
label_123a48:
    // 0x123a48: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_123a4c:
    // 0x123a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123a50:
    // 0x123a50: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x123a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_123a54:
    // 0x123a54: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_123a58:
    // 0x123a58: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_123a5c:
    // 0x123a5c: 0x40f809  jalr        $v0
label_123a60:
    if (ctx->pc == 0x123A60u) {
        ctx->pc = 0x123A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A5Cu;
        // 0x123a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A64u;
        goto label_123a64;
    }
    ctx->pc = 0x123A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123A64u);
        ctx->pc = 0x123A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A5Cu;
        // 0x123a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123A5Cu, 0x123A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x123a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123a68:
    // 0x123a68: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123a6c:
    // 0x123a6c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x123a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_123a70:
    // 0x123a70: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x123a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_123a74:
    // 0x123a74: 0x26440f84  addiu       $a0, $s2, 0xF84
    ctx->pc = 0x123a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3972));
label_123a78:
    // 0x123a78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x123a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_123a7c:
    // 0x123a7c: 0xc0419a4  jal         func_106690
label_123a80:
    if (ctx->pc == 0x123A80u) {
        ctx->pc = 0x123A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A7Cu;
        // 0x123a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A84u;
        goto label_123a84;
    }
    ctx->pc = 0x123A7Cu;
    SET_GPR_U32(ctx, 31, 0x123A84u);
    ctx->pc = 0x123A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A7Cu;
    // 0x123a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106690u, 0x123A7Cu, 0x123A84u)) {
        return;
    }
    ctx->pc = 0x123A84u;
label_123a84:
    // 0x123a84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_123a88:
    if (ctx->pc == 0x123A88u) {
        ctx->pc = 0x123A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A84u;
        // 0x123a88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A8Cu;
        goto label_123a8c;
    }
    ctx->pc = 0x123A84u;
    {
        const bool branch_taken_0x123a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A84u;
        // 0x123a88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a84) {
            ctx->pc = 0x123AC0u;
            goto label_123ac0;
        }
    }
    ctx->pc = 0x123A8Cu;
label_123a8c:
    // 0x123a8c: 0xc041ab4  jal         func_106AD0
label_123a90:
    if (ctx->pc == 0x123A90u) {
        ctx->pc = 0x123A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A8Cu;
        // 0x123a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A94u;
        goto label_123a94;
    }
    ctx->pc = 0x123A8Cu;
    SET_GPR_U32(ctx, 31, 0x123A94u);
    ctx->pc = 0x123A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A8Cu;
    // 0x123a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106AD0u, 0x123A8Cu, 0x123A94u)) {
        return;
    }
    ctx->pc = 0x123A94u;
label_123a94:
    // 0x123a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123a98:
    // 0x123a98: 0x17c20005  bne         $fp, $v0, . + 4 + (0x5 << 2)
label_123a9c:
    if (ctx->pc == 0x123A9Cu) {
        ctx->pc = 0x123A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A98u;
        // 0x123a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AA0u;
        goto label_123aa0;
    }
    ctx->pc = 0x123A98u;
    {
        const bool branch_taken_0x123a98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x123A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A98u;
        // 0x123a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a98) {
            ctx->pc = 0x123AB0u;
            goto label_123ab0;
        }
    }
    ctx->pc = 0x123AA0u;
label_123aa0:
    // 0x123aa0: 0xc041a4a  jal         func_106928
label_123aa4:
    if (ctx->pc == 0x123AA4u) {
        ctx->pc = 0x123AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AA0u;
        // 0x123aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AA8u;
        goto label_123aa8;
    }
    ctx->pc = 0x123AA0u;
    SET_GPR_U32(ctx, 31, 0x123AA8u);
    ctx->pc = 0x123AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AA0u;
    // 0x123aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106928u, 0x123AA0u, 0x123AA8u)) {
        return;
    }
    ctx->pc = 0x123AA8u;
label_123aa8:
    // 0x123aa8: 0x10000003  b           . + 4 + (0x3 << 2)
label_123aac:
    if (ctx->pc == 0x123AACu) {
        ctx->pc = 0x123AB0u;
        goto label_123ab0;
    }
    ctx->pc = 0x123AA8u;
    {
        const bool branch_taken_0x123aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123aa8) {
            ctx->pc = 0x123AB8u;
            goto label_123ab8;
        }
    }
    ctx->pc = 0x123AB0u;
label_123ab0:
    // 0x123ab0: 0xc041a4a  jal         func_106928
label_123ab4:
    if (ctx->pc == 0x123AB4u) {
        ctx->pc = 0x123AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AB0u;
        // 0x123ab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AB8u;
        goto label_123ab8;
    }
    ctx->pc = 0x123AB0u;
    SET_GPR_U32(ctx, 31, 0x123AB8u);
    ctx->pc = 0x123AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AB0u;
    // 0x123ab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106928u, 0x123AB0u, 0x123AB8u)) {
        return;
    }
    ctx->pc = 0x123AB8u;
label_123ab8:
    // 0x123ab8: 0xc041a4c  jal         func_106930
label_123abc:
    if (ctx->pc == 0x123ABCu) {
        ctx->pc = 0x123ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AB8u;
        // 0x123abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AC0u;
        goto label_123ac0;
    }
    ctx->pc = 0x123AB8u;
    SET_GPR_U32(ctx, 31, 0x123AC0u);
    ctx->pc = 0x123ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AB8u;
    // 0x123abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106930u, 0x123AB8u, 0x123AC0u)) {
        return;
    }
    ctx->pc = 0x123AC0u;
label_123ac0:
    // 0x123ac0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x123ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_123ac4:
    // 0x123ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x123ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_123ac8:
    // 0x123ac8: 0x1282001d  beq         $s4, $v0, . + 4 + (0x1D << 2)
label_123acc:
    if (ctx->pc == 0x123ACCu) {
        ctx->pc = 0x123ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC8u;
        // 0x123acc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AD0u;
        goto label_123ad0;
    }
    ctx->pc = 0x123AC8u;
    {
        const bool branch_taken_0x123ac8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x123ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC8u;
        // 0x123acc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ac8) {
            ctx->pc = 0x123B40u;
            goto label_123b40;
        }
    }
    ctx->pc = 0x123AD0u;
label_123ad0:
    // 0x123ad0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_123ad4:
    if (ctx->pc == 0x123AD4u) {
        ctx->pc = 0x123AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AD0u;
        // 0x123ad4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AD8u;
        goto label_123ad8;
    }
    ctx->pc = 0x123AD0u;
    {
        const bool branch_taken_0x123ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AD0u;
        // 0x123ad4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ad0) {
            ctx->pc = 0x123B44u;
            goto label_123b44;
        }
    }
    ctx->pc = 0x123AD8u;
label_123ad8:
    // 0x123ad8: 0x26510320  addiu       $s1, $s2, 0x320
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_123adc:
    // 0x123adc: 0xc068228  jal         func_1A08A0
label_123ae0:
    if (ctx->pc == 0x123AE0u) {
        ctx->pc = 0x123AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ADCu;
        // 0x123ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AE4u;
        goto label_123ae4;
    }
    ctx->pc = 0x123ADCu;
    SET_GPR_U32(ctx, 31, 0x123AE4u);
    ctx->pc = 0x123AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ADCu;
    // 0x123ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A08A0u, 0x123ADCu, 0x123AE4u)) {
        return;
    }
    ctx->pc = 0x123AE4u;
label_123ae4:
    // 0x123ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123ae8:
    // 0x123ae8: 0xc068220  jal         func_1A0880
label_123aec:
    if (ctx->pc == 0x123AECu) {
        ctx->pc = 0x123AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AE8u;
        // 0x123aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AF0u;
        goto label_123af0;
    }
    ctx->pc = 0x123AE8u;
    SET_GPR_U32(ctx, 31, 0x123AF0u);
    ctx->pc = 0x123AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AE8u;
    // 0x123aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0880u, 0x123AE8u, 0x123AF0u)) {
        return;
    }
    ctx->pc = 0x123AF0u;
label_123af0:
    // 0x123af0: 0xe64001c4  swc1        $f0, 0x1C4($s2)
    ctx->pc = 0x123af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
label_123af4:
    // 0x123af4: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x123af4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_123af8:
    // 0x123af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123afc:
    // 0x123afc: 0x8e230834  lw          $v1, 0x834($s1)
    ctx->pc = 0x123afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2100)));
label_123b00:
    // 0x123b00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_123b04:
    if (ctx->pc == 0x123B04u) {
        ctx->pc = 0x123B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B00u;
        // 0x123b04: 0x10302b  sltu        $a2, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B08u;
        goto label_123b08;
    }
    ctx->pc = 0x123B00u;
    {
        const bool branch_taken_0x123b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B00u;
        // 0x123b04: 0x10302b  sltu        $a2, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b00) {
            ctx->pc = 0x123B1Cu;
            goto label_123b1c;
        }
    }
    ctx->pc = 0x123B08u;
label_123b08:
    // 0x123b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123b0c:
    // 0x123b0c: 0xc040802  jal         func_102008
label_123b10:
    if (ctx->pc == 0x123B10u) {
        ctx->pc = 0x123B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B0Cu;
        // 0x123b10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B14u;
        goto label_123b14;
    }
    ctx->pc = 0x123B0Cu;
    SET_GPR_U32(ctx, 31, 0x123B14u);
    ctx->pc = 0x123B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B0Cu;
    // 0x123b10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102008u, 0x123B0Cu, 0x123B14u)) {
        return;
    }
    ctx->pc = 0x123B14u;
label_123b14:
    // 0x123b14: 0x1000000b  b           . + 4 + (0xB << 2)
label_123b18:
    if (ctx->pc == 0x123B18u) {
        ctx->pc = 0x123B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B14u;
        // 0x123b18: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B1Cu;
        goto label_123b1c;
    }
    ctx->pc = 0x123B14u;
    {
        const bool branch_taken_0x123b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B14u;
        // 0x123b18: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b14) {
            ctx->pc = 0x123B44u;
            goto label_123b44;
        }
    }
    ctx->pc = 0x123B1Cu;
label_123b1c:
    // 0x123b1c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_123b20:
    if (ctx->pc == 0x123B20u) {
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B1Cu;
        // 0x123b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B24u;
        goto label_123b24;
    }
    ctx->pc = 0x123B1Cu;
    {
        const bool branch_taken_0x123b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B1Cu;
        // 0x123b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b1c) {
            ctx->pc = 0x123B38u;
            goto label_123b38;
        }
    }
    ctx->pc = 0x123B24u;
label_123b24:
    // 0x123b24: 0xc62c0818  lwc1        $f12, 0x818($s1)
    ctx->pc = 0x123b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123b28:
    // 0x123b28: 0xc040394  jal         func_100E50
label_123b2c:
    if (ctx->pc == 0x123B2Cu) {
        ctx->pc = 0x123B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B28u;
        // 0x123b2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B30u;
        goto label_123b30;
    }
    ctx->pc = 0x123B28u;
    SET_GPR_U32(ctx, 31, 0x123B30u);
    ctx->pc = 0x123B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B28u;
    // 0x123b2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100E50u, 0x123B28u, 0x123B30u)) {
        return;
    }
    ctx->pc = 0x123B30u;
label_123b30:
    // 0x123b30: 0x10000004  b           . + 4 + (0x4 << 2)
label_123b34:
    if (ctx->pc == 0x123B34u) {
        ctx->pc = 0x123B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B30u;
        // 0x123b34: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B38u;
        goto label_123b38;
    }
    ctx->pc = 0x123B30u;
    {
        const bool branch_taken_0x123b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B30u;
        // 0x123b34: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b30) {
            ctx->pc = 0x123B44u;
            goto label_123b44;
        }
    }
    ctx->pc = 0x123B38u;
label_123b38:
    // 0x123b38: 0xc0407ce  jal         func_101F38
label_123b3c:
    if (ctx->pc == 0x123B3Cu) {
        ctx->pc = 0x123B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B38u;
        // 0x123b3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B40u;
        goto label_123b40;
    }
    ctx->pc = 0x123B38u;
    SET_GPR_U32(ctx, 31, 0x123B40u);
    ctx->pc = 0x123B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B38u;
    // 0x123b3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101F38u, 0x123B38u, 0x123B40u)) {
        return;
    }
    ctx->pc = 0x123B40u;
label_123b40:
    // 0x123b40: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x123b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_123b44:
    // 0x123b44: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x123b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_123b48:
    // 0x123b48: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x123b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_123b4c:
    // 0x123b4c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x123b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_123b50:
    // 0x123b50: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x123b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_123b54:
    // 0x123b54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x123b54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_123b58:
    // 0x123b58: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x123b58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123b5c:
    // 0x123b5c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x123b5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123b60:
    // 0x123b60: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x123b60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123b64:
    // 0x123b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123b68:
    // 0x123b68: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x123b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_123b6c:
    // 0x123b6c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x123b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123b70:
    // 0x123b70: 0x3e00008  jr          $ra
label_123b74:
    if (ctx->pc == 0x123B74u) {
        ctx->pc = 0x123B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B70u;
        // 0x123b74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B78u;
        goto label_fallthrough_0x123b70;
    }
    ctx->pc = 0x123B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B70u;
        // 0x123b74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123b70:
    ctx->pc = 0x123B78u;
}

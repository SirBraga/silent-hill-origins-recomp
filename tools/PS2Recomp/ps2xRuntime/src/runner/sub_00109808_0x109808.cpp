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

// Function: sub_00109808
// Address: 0x109808 - 0x109b60
void sub_00109808_0x109808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109808_0x109808");
#endif

    switch (ctx->pc) {
        case 0x109808u: goto label_109808;
        case 0x10980cu: goto label_10980c;
        case 0x109810u: goto label_109810;
        case 0x109814u: goto label_109814;
        case 0x109818u: goto label_109818;
        case 0x10981cu: goto label_10981c;
        case 0x109820u: goto label_109820;
        case 0x109824u: goto label_109824;
        case 0x109828u: goto label_109828;
        case 0x10982cu: goto label_10982c;
        case 0x109830u: goto label_109830;
        case 0x109834u: goto label_109834;
        case 0x109838u: goto label_109838;
        case 0x10983cu: goto label_10983c;
        case 0x109840u: goto label_109840;
        case 0x109844u: goto label_109844;
        case 0x109848u: goto label_109848;
        case 0x10984cu: goto label_10984c;
        case 0x109850u: goto label_109850;
        case 0x109854u: goto label_109854;
        case 0x109858u: goto label_109858;
        case 0x10985cu: goto label_10985c;
        case 0x109860u: goto label_109860;
        case 0x109864u: goto label_109864;
        case 0x109868u: goto label_109868;
        case 0x10986cu: goto label_10986c;
        case 0x109870u: goto label_109870;
        case 0x109874u: goto label_109874;
        case 0x109878u: goto label_109878;
        case 0x10987cu: goto label_10987c;
        case 0x109880u: goto label_109880;
        case 0x109884u: goto label_109884;
        case 0x109888u: goto label_109888;
        case 0x10988cu: goto label_10988c;
        case 0x109890u: goto label_109890;
        case 0x109894u: goto label_109894;
        case 0x109898u: goto label_109898;
        case 0x10989cu: goto label_10989c;
        case 0x1098a0u: goto label_1098a0;
        case 0x1098a4u: goto label_1098a4;
        case 0x1098a8u: goto label_1098a8;
        case 0x1098acu: goto label_1098ac;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098b4u: goto label_1098b4;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098bcu: goto label_1098bc;
        case 0x1098c0u: goto label_1098c0;
        case 0x1098c4u: goto label_1098c4;
        case 0x1098c8u: goto label_1098c8;
        case 0x1098ccu: goto label_1098cc;
        case 0x1098d0u: goto label_1098d0;
        case 0x1098d4u: goto label_1098d4;
        case 0x1098d8u: goto label_1098d8;
        case 0x1098dcu: goto label_1098dc;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098e4u: goto label_1098e4;
        case 0x1098e8u: goto label_1098e8;
        case 0x1098ecu: goto label_1098ec;
        case 0x1098f0u: goto label_1098f0;
        case 0x1098f4u: goto label_1098f4;
        case 0x1098f8u: goto label_1098f8;
        case 0x1098fcu: goto label_1098fc;
        case 0x109900u: goto label_109900;
        case 0x109904u: goto label_109904;
        case 0x109908u: goto label_109908;
        case 0x10990cu: goto label_10990c;
        case 0x109910u: goto label_109910;
        case 0x109914u: goto label_109914;
        case 0x109918u: goto label_109918;
        case 0x10991cu: goto label_10991c;
        case 0x109920u: goto label_109920;
        case 0x109924u: goto label_109924;
        case 0x109928u: goto label_109928;
        case 0x10992cu: goto label_10992c;
        case 0x109930u: goto label_109930;
        case 0x109934u: goto label_109934;
        case 0x109938u: goto label_109938;
        case 0x10993cu: goto label_10993c;
        case 0x109940u: goto label_109940;
        case 0x109944u: goto label_109944;
        case 0x109948u: goto label_109948;
        case 0x10994cu: goto label_10994c;
        case 0x109950u: goto label_109950;
        case 0x109954u: goto label_109954;
        case 0x109958u: goto label_109958;
        case 0x10995cu: goto label_10995c;
        case 0x109960u: goto label_109960;
        case 0x109964u: goto label_109964;
        case 0x109968u: goto label_109968;
        case 0x10996cu: goto label_10996c;
        case 0x109970u: goto label_109970;
        case 0x109974u: goto label_109974;
        case 0x109978u: goto label_109978;
        case 0x10997cu: goto label_10997c;
        case 0x109980u: goto label_109980;
        case 0x109984u: goto label_109984;
        case 0x109988u: goto label_109988;
        case 0x10998cu: goto label_10998c;
        case 0x109990u: goto label_109990;
        case 0x109994u: goto label_109994;
        case 0x109998u: goto label_109998;
        case 0x10999cu: goto label_10999c;
        case 0x1099a0u: goto label_1099a0;
        case 0x1099a4u: goto label_1099a4;
        case 0x1099a8u: goto label_1099a8;
        case 0x1099acu: goto label_1099ac;
        case 0x1099b0u: goto label_1099b0;
        case 0x1099b4u: goto label_1099b4;
        case 0x1099b8u: goto label_1099b8;
        case 0x1099bcu: goto label_1099bc;
        case 0x1099c0u: goto label_1099c0;
        case 0x1099c4u: goto label_1099c4;
        case 0x1099c8u: goto label_1099c8;
        case 0x1099ccu: goto label_1099cc;
        case 0x1099d0u: goto label_1099d0;
        case 0x1099d4u: goto label_1099d4;
        case 0x1099d8u: goto label_1099d8;
        case 0x1099dcu: goto label_1099dc;
        case 0x1099e0u: goto label_1099e0;
        case 0x1099e4u: goto label_1099e4;
        case 0x1099e8u: goto label_1099e8;
        case 0x1099ecu: goto label_1099ec;
        case 0x1099f0u: goto label_1099f0;
        case 0x1099f4u: goto label_1099f4;
        case 0x1099f8u: goto label_1099f8;
        case 0x1099fcu: goto label_1099fc;
        case 0x109a00u: goto label_109a00;
        case 0x109a04u: goto label_109a04;
        case 0x109a08u: goto label_109a08;
        case 0x109a0cu: goto label_109a0c;
        case 0x109a10u: goto label_109a10;
        case 0x109a14u: goto label_109a14;
        case 0x109a18u: goto label_109a18;
        case 0x109a1cu: goto label_109a1c;
        case 0x109a20u: goto label_109a20;
        case 0x109a24u: goto label_109a24;
        case 0x109a28u: goto label_109a28;
        case 0x109a2cu: goto label_109a2c;
        case 0x109a30u: goto label_109a30;
        case 0x109a34u: goto label_109a34;
        case 0x109a38u: goto label_109a38;
        case 0x109a3cu: goto label_109a3c;
        case 0x109a40u: goto label_109a40;
        case 0x109a44u: goto label_109a44;
        case 0x109a48u: goto label_109a48;
        case 0x109a4cu: goto label_109a4c;
        case 0x109a50u: goto label_109a50;
        case 0x109a54u: goto label_109a54;
        case 0x109a58u: goto label_109a58;
        case 0x109a5cu: goto label_109a5c;
        case 0x109a60u: goto label_109a60;
        case 0x109a64u: goto label_109a64;
        case 0x109a68u: goto label_109a68;
        case 0x109a6cu: goto label_109a6c;
        case 0x109a70u: goto label_109a70;
        case 0x109a74u: goto label_109a74;
        case 0x109a78u: goto label_109a78;
        case 0x109a7cu: goto label_109a7c;
        case 0x109a80u: goto label_109a80;
        case 0x109a84u: goto label_109a84;
        case 0x109a88u: goto label_109a88;
        case 0x109a8cu: goto label_109a8c;
        case 0x109a90u: goto label_109a90;
        case 0x109a94u: goto label_109a94;
        case 0x109a98u: goto label_109a98;
        case 0x109a9cu: goto label_109a9c;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aa4u: goto label_109aa4;
        case 0x109aa8u: goto label_109aa8;
        case 0x109aacu: goto label_109aac;
        case 0x109ab0u: goto label_109ab0;
        case 0x109ab4u: goto label_109ab4;
        case 0x109ab8u: goto label_109ab8;
        case 0x109abcu: goto label_109abc;
        case 0x109ac0u: goto label_109ac0;
        case 0x109ac4u: goto label_109ac4;
        case 0x109ac8u: goto label_109ac8;
        case 0x109accu: goto label_109acc;
        case 0x109ad0u: goto label_109ad0;
        case 0x109ad4u: goto label_109ad4;
        case 0x109ad8u: goto label_109ad8;
        case 0x109adcu: goto label_109adc;
        case 0x109ae0u: goto label_109ae0;
        case 0x109ae4u: goto label_109ae4;
        case 0x109ae8u: goto label_109ae8;
        case 0x109aecu: goto label_109aec;
        case 0x109af0u: goto label_109af0;
        case 0x109af4u: goto label_109af4;
        case 0x109af8u: goto label_109af8;
        case 0x109afcu: goto label_109afc;
        case 0x109b00u: goto label_109b00;
        case 0x109b04u: goto label_109b04;
        case 0x109b08u: goto label_109b08;
        case 0x109b0cu: goto label_109b0c;
        case 0x109b10u: goto label_109b10;
        case 0x109b14u: goto label_109b14;
        case 0x109b18u: goto label_109b18;
        case 0x109b1cu: goto label_109b1c;
        case 0x109b20u: goto label_109b20;
        case 0x109b24u: goto label_109b24;
        case 0x109b28u: goto label_109b28;
        case 0x109b2cu: goto label_109b2c;
        case 0x109b30u: goto label_109b30;
        case 0x109b34u: goto label_109b34;
        case 0x109b38u: goto label_109b38;
        case 0x109b3cu: goto label_109b3c;
        case 0x109b40u: goto label_109b40;
        case 0x109b44u: goto label_109b44;
        case 0x109b48u: goto label_109b48;
        case 0x109b4cu: goto label_109b4c;
        case 0x109b50u: goto label_109b50;
        case 0x109b54u: goto label_109b54;
        case 0x109b58u: goto label_109b58;
        case 0x109b5cu: goto label_109b5c;
        default: break;
    }

    ctx->pc = 0x109808u;

label_109808:
    // 0x109808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x109808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_10980c:
    // 0x10980c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x10980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_109810:
    // 0x109810: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x109810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_109814:
    // 0x109814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109818:
    // 0x109818: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x109818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_10981c:
    // 0x10981c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10981cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_109820:
    // 0x109820: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x109820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_109824:
    // 0x109824: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x109824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_109828:
    // 0x109828: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x109828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_10982c:
    // 0x10982c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x10982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_109830:
    // 0x109830: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x109830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_109834:
    // 0x109834: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x109834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_109838:
    // 0x109838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10983c:
    // 0x10983c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_109840:
    // 0x109840: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x109840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_109844:
    // 0x109844: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_109848:
    if (ctx->pc == 0x109848u) {
        ctx->pc = 0x109848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109844u;
        // 0x109848: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10984Cu;
        goto label_10984c;
    }
    ctx->pc = 0x109844u;
    {
        const bool branch_taken_0x109844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109844u;
        // 0x109848: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109844) {
            ctx->pc = 0x1098C4u;
            goto label_1098c4;
        }
    }
    ctx->pc = 0x10984Cu;
label_10984c:
    // 0x10984c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_109850:
    if (ctx->pc == 0x109850u) {
        ctx->pc = 0x109850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10984Cu;
        // 0x109850: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109854u;
        goto label_109854;
    }
    ctx->pc = 0x10984Cu;
    {
        const bool branch_taken_0x10984c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10984c) {
            ctx->pc = 0x109850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10984Cu;
            // 0x109850: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109868u;
            goto label_109868;
        }
    }
    ctx->pc = 0x109854u;
label_109854:
    // 0x109854: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x109854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_109858:
    // 0x109858: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x109858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10985c:
    // 0x10985c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x10985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109860:
    // 0x109860: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x109860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109864:
    // 0x109864: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x109864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_109868:
    // 0x109868: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x109868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_10986c:
    // 0x10986c: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x10986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_109870:
    // 0x109870: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x109870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_109874:
    // 0x109874: 0xb52023  subu        $a0, $a1, $s5
    ctx->pc = 0x109874u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_109878:
    // 0x109878: 0x6bc70007  ldl         $a3, 0x7($fp)
    ctx->pc = 0x109878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_10987c:
    // 0x10987c: 0x6fc70000  ldr         $a3, 0x0($fp)
    ctx->pc = 0x10987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109880:
    // 0x109880: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x109880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109884:
    // 0x109884: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_109888:
    // 0x109888: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
label_10988c:
    if (ctx->pc == 0x10988Cu) {
        ctx->pc = 0x10988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109888u;
        // 0x10988c: 0xb7a70000  sdr         $a3, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109890u;
        goto label_109890;
    }
    ctx->pc = 0x109888u;
    {
        const bool branch_taken_0x109888 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x10988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109888u;
        // 0x10988c: 0xb7a70000  sdr         $a3, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109888) {
            ctx->pc = 0x1098B0u;
            goto label_1098b0;
        }
    }
    ctx->pc = 0x109890u;
label_109890:
    // 0x109890: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x109890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_109894:
    // 0x109894: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x109894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_109898:
    // 0x109898: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_10989c:
    // 0x10989c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x10989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1098a0:
    // 0x1098a0: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x1098a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1098a4:
    // 0x1098a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1098a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1098a8:
    // 0x1098a8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1098ac:
    if (ctx->pc == 0x1098ACu) {
        ctx->pc = 0x1098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A8u;
        // 0x1098ac: 0xb4470000  sdr         $a3, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098B0u;
        goto label_1098b0;
    }
    ctx->pc = 0x1098A8u;
    {
        const bool branch_taken_0x1098a8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x1098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A8u;
        // 0x1098ac: 0xb4470000  sdr         $a3, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098a8) {
            ctx->pc = 0x109890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109890;
        }
    }
    ctx->pc = 0x1098B0u;
label_1098b0:
    // 0x1098b0: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x1098b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1098b4:
    // 0x1098b4: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x1098b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1098b8:
    // 0x1098b8: 0xb2a70007  sdl         $a3, 0x7($s5)
    ctx->pc = 0x1098b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1098bc:
    // 0x1098bc: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1098c0:
    if (ctx->pc == 0x1098C0u) {
        ctx->pc = 0x1098C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098BCu;
        // 0x1098c0: 0xb6a70000  sdr         $a3, 0x0($s5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098C4u;
        goto label_1098c4;
    }
    ctx->pc = 0x1098BCu;
    {
        const bool branch_taken_0x1098bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098BCu;
        // 0x1098c0: 0xb6a70000  sdr         $a3, 0x0($s5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098bc) {
            ctx->pc = 0x109B2Cu;
            goto label_109b2c;
        }
    }
    ctx->pc = 0x1098C4u;
label_1098c4:
    // 0x1098c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1098c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1098c8:
    // 0x1098c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1098c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1098cc:
    // 0x1098cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1098ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1098d0:
    // 0x1098d0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1098d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1098d4:
    // 0x1098d4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1098d8:
    // 0x1098d8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1098d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_1098dc:
    // 0x1098dc: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
label_1098e0:
    if (ctx->pc == 0x1098E0u) {
        ctx->pc = 0x1098E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098DCu;
        // 0x1098e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098E4u;
        goto label_1098e4;
    }
    ctx->pc = 0x1098DCu;
    {
        const bool branch_taken_0x1098dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098DCu;
        // 0x1098e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098dc) {
            ctx->pc = 0x109A14u;
            goto label_109a14;
        }
    }
    ctx->pc = 0x1098E4u;
label_1098e4:
    // 0x1098e4: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x1098e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1098e8:
    // 0x1098e8: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x1098e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_1098ec:
    // 0x1098ec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1098f0:
    if (ctx->pc == 0x1098F0u) {
        ctx->pc = 0x1098F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098ECu;
        // 0x1098f0: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098F4u;
        goto label_1098f4;
    }
    ctx->pc = 0x1098ECu;
    {
        const bool branch_taken_0x1098ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098ECu;
        // 0x1098f0: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098ec) {
            ctx->pc = 0x109960u;
            goto label_109960;
        }
    }
    ctx->pc = 0x1098F4u;
label_1098f4:
    // 0x1098f4: 0xc0c5472  jal         func_3151C8
label_1098f8:
    if (ctx->pc == 0x1098F8u) {
        ctx->pc = 0x1098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F4u;
        // 0x1098f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098FCu;
        goto label_1098fc;
    }
    ctx->pc = 0x1098F4u;
    SET_GPR_U32(ctx, 31, 0x1098FCu);
    ctx->pc = 0x1098F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098F4u;
    // 0x1098f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1098F4u, 0x1098FCu)) {
        return;
    }
    ctx->pc = 0x1098FCu;
label_1098fc:
    // 0x1098fc: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_109900:
    if (ctx->pc == 0x109900u) {
        ctx->pc = 0x109900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098FCu;
        // 0x109900: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109904u;
        goto label_109904;
    }
    ctx->pc = 0x1098FCu;
    {
        const bool branch_taken_0x1098fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098FCu;
        // 0x109900: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098fc) {
            ctx->pc = 0x109A1Cu;
            goto label_109a1c;
        }
    }
    ctx->pc = 0x109904u;
label_109904:
    // 0x109904: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x109904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_109908:
    // 0x109908: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x109908u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_10990c:
    // 0x10990c: 0x24569850  addiu       $s6, $v0, -0x67B0
    ctx->pc = 0x10990cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_109910:
    // 0x109910: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x109910u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
label_109914:
    // 0x109914: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x109914u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
label_109918:
    // 0x109918: 0x8e82828c  lw          $v0, -0x7D74($s4)
    ctx->pc = 0x109918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935180)));
label_10991c:
    // 0x10991c: 0x0  nop
    ctx->pc = 0x10991cu;
    // NOP
label_109920:
    // 0x109920: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_109924:
    if (ctx->pc == 0x109924u) {
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x26441878  addiu       $a0, $s2, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109928u;
        goto label_109928;
    }
    ctx->pc = 0x109920u;
    {
        const bool branch_taken_0x109920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x26441878  addiu       $a0, $s2, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109920) {
            ctx->pc = 0x109940u;
            goto label_109940;
        }
    }
    ctx->pc = 0x109928u;
label_109928:
    // 0x109928: 0xc0a6492  jal         func_299248
label_10992c:
    if (ctx->pc == 0x10992Cu) {
        ctx->pc = 0x10992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109928u;
        // 0x10992c: 0x26659ca8  addiu       $a1, $s3, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109930u;
        goto label_109930;
    }
    ctx->pc = 0x109928u;
    SET_GPR_U32(ctx, 31, 0x109930u);
    ctx->pc = 0x10992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109928u;
    // 0x10992c: 0x26659ca8  addiu       $a1, $s3, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x109928u, 0x109930u)) {
        return;
    }
    ctx->pc = 0x109930u;
label_109930:
    // 0x109930: 0x2c0f809  jalr        $s6
label_109934:
    if (ctx->pc == 0x109934u) {
        ctx->pc = 0x109934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109930u;
        // 0x109934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109938u;
        goto label_109938;
    }
    ctx->pc = 0x109930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x109938u);
        ctx->pc = 0x109934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109930u;
        // 0x109934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109930u, 0x109938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109938u;
label_109938:
    // 0x109938: 0xc07da60  jal         func_1F6980
label_10993c:
    if (ctx->pc == 0x10993Cu) {
        ctx->pc = 0x10993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109938u;
        // 0x10993c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109940u;
        goto label_109940;
    }
    ctx->pc = 0x109938u;
    SET_GPR_U32(ctx, 31, 0x109940u);
    ctx->pc = 0x10993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109938u;
    // 0x10993c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x109938u, 0x109940u)) {
        return;
    }
    ctx->pc = 0x109940u;
label_109940:
    // 0x109940: 0x40f809  jalr        $v0
label_109944:
    if (ctx->pc == 0x109944u) {
        ctx->pc = 0x109948u;
        goto label_109948;
    }
    ctx->pc = 0x109940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x109948u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109940u, 0x109948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109948u;
label_109948:
    // 0x109948: 0xc0c5472  jal         func_3151C8
label_10994c:
    if (ctx->pc == 0x10994Cu) {
        ctx->pc = 0x10994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109948u;
        // 0x10994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109950u;
        goto label_109950;
    }
    ctx->pc = 0x109948u;
    SET_GPR_U32(ctx, 31, 0x109950u);
    ctx->pc = 0x10994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109948u;
    // 0x10994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x109948u, 0x109950u)) {
        return;
    }
    ctx->pc = 0x109950u;
label_109950:
    // 0x109950: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_109954:
    if (ctx->pc == 0x109954u) {
        ctx->pc = 0x109954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109950u;
        // 0x109954: 0x8e82828c  lw          $v0, -0x7D74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109958u;
        goto label_109958;
    }
    ctx->pc = 0x109950u;
    {
        const bool branch_taken_0x109950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109950) {
            ctx->pc = 0x109954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109950u;
            // 0x109954: 0x8e82828c  lw          $v0, -0x7D74($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109920;
        }
    }
    ctx->pc = 0x109958u;
label_109958:
    // 0x109958: 0x10000030  b           . + 4 + (0x30 << 2)
label_10995c:
    if (ctx->pc == 0x10995Cu) {
        ctx->pc = 0x10995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109958u;
        // 0x10995c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109960u;
        goto label_109960;
    }
    ctx->pc = 0x109958u;
    {
        const bool branch_taken_0x109958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109958u;
        // 0x10995c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109958) {
            ctx->pc = 0x109A1Cu;
            goto label_109a1c;
        }
    }
    ctx->pc = 0x109960u;
label_109960:
    // 0x109960: 0x26e40007  addiu       $a0, $s7, 0x7
    ctx->pc = 0x109960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 7));
label_109964:
    // 0x109964: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x109964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_109968:
    // 0x109968: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x109968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_10996c:
    // 0x10996c: 0x24728290  addiu       $s2, $v1, -0x7D70
    ctx->pc = 0x10996cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_109970:
    // 0x109970: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_109974:
    // 0x109974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109978:
    // 0x109978: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x109978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_10997c:
    // 0x10997c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_109980:
    // 0x109980: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
label_109984:
    if (ctx->pc == 0x109984u) {
        ctx->pc = 0x109984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109980u;
        // 0x109984: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109988u;
        goto label_109988;
    }
    ctx->pc = 0x109980u;
    {
        const bool branch_taken_0x109980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x109980) {
            ctx->pc = 0x109984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109980u;
            // 0x109984: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A08u;
            goto label_109a08;
        }
    }
    ctx->pc = 0x109988u;
label_109988:
    // 0x109988: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x109988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_10998c:
    // 0x10998c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x10998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_109990:
    // 0x109990: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_109994:
    // 0x109994: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x109994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_109998:
    // 0x109998: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_10999c:
    // 0x10999c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1099a0:
    // 0x1099a0: 0xc04257c  jal         func_1095F0
label_1099a4:
    if (ctx->pc == 0x1099A4u) {
        ctx->pc = 0x1099A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099A0u;
        // 0x1099a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099A8u;
        goto label_1099a8;
    }
    ctx->pc = 0x1099A0u;
    SET_GPR_U32(ctx, 31, 0x1099A8u);
    ctx->pc = 0x1099A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099A0u;
    // 0x1099a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1095F0u, 0x1099A0u, 0x1099A8u)) {
        return;
    }
    ctx->pc = 0x1099A8u;
label_1099a8:
    // 0x1099a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1099ac:
    // 0x1099ac: 0x10730014  beq         $v1, $s3, . + 4 + (0x14 << 2)
label_1099b0:
    if (ctx->pc == 0x1099B0u) {
        ctx->pc = 0x1099B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099ACu;
        // 0x1099b0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099B4u;
        goto label_1099b4;
    }
    ctx->pc = 0x1099ACu;
    {
        const bool branch_taken_0x1099ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1099B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099ACu;
        // 0x1099b0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099ac) {
            ctx->pc = 0x109A00u;
            goto label_109a00;
        }
    }
    ctx->pc = 0x1099B4u;
label_1099b4:
    // 0x1099b4: 0x1010c2  srl         $v0, $s0, 3
    ctx->pc = 0x1099b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
label_1099b8:
    // 0x1099b8: 0xf02821  addu        $a1, $a3, $s0
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1099bc:
    // 0x1099bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1099c0:
    // 0x1099c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1099c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1099c4:
    // 0x1099c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1099c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1099c8:
    // 0x1099c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1099c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1099cc:
    // 0x1099cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1099ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1099d0:
    // 0x1099d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1099d4:
    // 0x1099d4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1099d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1099d8:
    // 0x1099d8: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_1099dc:
    if (ctx->pc == 0x1099DCu) {
        ctx->pc = 0x1099DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099D8u;
        // 0x1099dc: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099E0u;
        goto label_1099e0;
    }
    ctx->pc = 0x1099D8u;
    {
        const bool branch_taken_0x1099d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1099DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099D8u;
        // 0x1099dc: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099d8) {
            ctx->pc = 0x1099FCu;
            goto label_1099fc;
        }
    }
    ctx->pc = 0x1099E0u;
label_1099e0:
    // 0x1099e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1099e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1099e4:
    // 0x1099e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1099e8:
    // 0x1099e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1099ec:
    // 0x1099ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1099ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1099f0:
    // 0x1099f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1099f4:
    // 0x1099f4: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
label_1099f8:
    if (ctx->pc == 0x1099F8u) {
        ctx->pc = 0x1099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099F4u;
        // 0x1099f8: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099FCu;
        goto label_1099fc;
    }
    ctx->pc = 0x1099F4u;
    {
        const bool branch_taken_0x1099f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099F4u;
        // 0x1099f8: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099f4) {
            ctx->pc = 0x1099E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1099e0;
        }
    }
    ctx->pc = 0x1099FCu;
label_1099fc:
    // 0x1099fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_109a00:
    // 0x109a00: 0x10000006  b           . + 4 + (0x6 << 2)
label_109a04:
    if (ctx->pc == 0x109A04u) {
        ctx->pc = 0x109A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A00u;
        // 0x109a04: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A08u;
        goto label_109a08;
    }
    ctx->pc = 0x109A00u;
    {
        const bool branch_taken_0x109a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A00u;
        // 0x109a04: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a00) {
            ctx->pc = 0x109A1Cu;
            goto label_109a1c;
        }
    }
    ctx->pc = 0x109A08u;
label_109a08:
    // 0x109a08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x109a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109a0c:
    // 0x109a0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_109a10:
    if (ctx->pc == 0x109A10u) {
        ctx->pc = 0x109A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A0Cu;
        // 0x109a10: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A14u;
        goto label_109a14;
    }
    ctx->pc = 0x109A0Cu;
    {
        const bool branch_taken_0x109a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A0Cu;
        // 0x109a10: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a0c) {
            ctx->pc = 0x109A1Cu;
            goto label_109a1c;
        }
    }
    ctx->pc = 0x109A14u;
label_109a14:
    // 0x109a14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x109a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a18:
    // 0x109a18: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x109a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a1c:
    // 0x109a1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x109a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_109a20:
    // 0x109a20: 0x1055000a  beq         $v0, $s5, . + 4 + (0xA << 2)
label_109a24:
    if (ctx->pc == 0x109A24u) {
        ctx->pc = 0x109A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A20u;
        // 0x109a24: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A28u;
        goto label_109a28;
    }
    ctx->pc = 0x109A20u;
    {
        const bool branch_taken_0x109a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x109A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A20u;
        // 0x109a24: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a20) {
            ctx->pc = 0x109A4Cu;
            goto label_109a4c;
        }
    }
    ctx->pc = 0x109A28u;
label_109a28:
    // 0x109a28: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_109a2c:
    if (ctx->pc == 0x109A2Cu) {
        ctx->pc = 0x109A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A28u;
        // 0x109a2c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A30u;
        goto label_109a30;
    }
    ctx->pc = 0x109A28u;
    {
        const bool branch_taken_0x109a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a28) {
            ctx->pc = 0x109A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A28u;
            // 0x109a2c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A44u;
            goto label_109a44;
        }
    }
    ctx->pc = 0x109A30u;
label_109a30:
    // 0x109a30: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x109a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109a34:
    // 0x109a34: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x109a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109a38:
    // 0x109a38: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x109a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a3c:
    // 0x109a3c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x109a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a40:
    // 0x109a40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x109a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_109a44:
    // 0x109a44: 0x1455fff8  bne         $v0, $s5, . + 4 + (-0x8 << 2)
label_109a48:
    if (ctx->pc == 0x109A48u) {
        ctx->pc = 0x109A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A44u;
        // 0x109a48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A4Cu;
        goto label_109a4c;
    }
    ctx->pc = 0x109A44u;
    {
        const bool branch_taken_0x109a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x109A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A44u;
        // 0x109a48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a44) {
            ctx->pc = 0x109A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a28;
        }
    }
    ctx->pc = 0x109A4Cu;
label_109a4c:
    // 0x109a4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x109a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109a50:
    // 0x109a50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_109a54:
    if (ctx->pc == 0x109A54u) {
        ctx->pc = 0x109A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A50u;
        // 0x109a54: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A58u;
        goto label_109a58;
    }
    ctx->pc = 0x109A50u;
    {
        const bool branch_taken_0x109a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a50) {
            ctx->pc = 0x109A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A50u;
            // 0x109a54: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A6Cu;
            goto label_109a6c;
        }
    }
    ctx->pc = 0x109A58u;
label_109a58:
    // 0x109a58: 0x6bc80007  ldl         $t0, 0x7($fp)
    ctx->pc = 0x109a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109a5c:
    // 0x109a5c: 0x6fc80000  ldr         $t0, 0x0($fp)
    ctx->pc = 0x109a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109a60:
    // 0x109a60: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x109a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a64:
    // 0x109a64: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x109a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a68:
    // 0x109a68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x109a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_109a6c:
    // 0x109a6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x109a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_109a70:
    // 0x109a70: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_109a74:
    if (ctx->pc == 0x109A74u) {
        ctx->pc = 0x109A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A70u;
        // 0x109a74: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A78u;
        goto label_109a78;
    }
    ctx->pc = 0x109A70u;
    {
        const bool branch_taken_0x109a70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x109A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A70u;
        // 0x109a74: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a70) {
            ctx->pc = 0x109A9Cu;
            goto label_109a9c;
        }
    }
    ctx->pc = 0x109A78u;
label_109a78:
    // 0x109a78: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_109a7c:
    if (ctx->pc == 0x109A7Cu) {
        ctx->pc = 0x109A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A78u;
        // 0x109a7c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A80u;
        goto label_109a80;
    }
    ctx->pc = 0x109A78u;
    {
        const bool branch_taken_0x109a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a78) {
            ctx->pc = 0x109A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A78u;
            // 0x109a7c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A94u;
            goto label_109a94;
        }
    }
    ctx->pc = 0x109A80u;
label_109a80:
    // 0x109a80: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x109a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_109a84:
    // 0x109a84: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x109a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_109a88:
    // 0x109a88: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x109a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a8c:
    // 0x109a8c: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x109a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a90:
    // 0x109a90: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x109a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_109a94:
    // 0x109a94: 0x14a3fff8  bne         $a1, $v1, . + 4 + (-0x8 << 2)
label_109a98:
    if (ctx->pc == 0x109A98u) {
        ctx->pc = 0x109A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A94u;
        // 0x109a98: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A9Cu;
        goto label_109a9c;
    }
    ctx->pc = 0x109A94u;
    {
        const bool branch_taken_0x109a94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x109A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A94u;
        // 0x109a98: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a94) {
            ctx->pc = 0x109A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a78;
        }
    }
    ctx->pc = 0x109A9Cu;
label_109a9c:
    // 0x109a9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_109aa0:
    // 0x109aa0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x109aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_109aa4:
    // 0x109aa4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x109aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109aa8:
    // 0x109aa8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x109aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_109aac:
    // 0x109aac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_109ab0:
    if (ctx->pc == 0x109AB0u) {
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AB4u;
        goto label_109ab4;
    }
    ctx->pc = 0x109AACu;
    {
        const bool branch_taken_0x109aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aac) {
            ctx->pc = 0x109AD0u;
            goto label_109ad0;
        }
    }
    ctx->pc = 0x109AB4u;
label_109ab4:
    // 0x109ab4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x109ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_109ab8:
    // 0x109ab8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x109ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_109abc:
    // 0x109abc: 0x0  nop
    ctx->pc = 0x109abcu;
    // NOP
label_109ac0:
    // 0x109ac0: 0x0  nop
    ctx->pc = 0x109ac0u;
    // NOP
label_109ac4:
    // 0x109ac4: 0x0  nop
    ctx->pc = 0x109ac4u;
    // NOP
label_109ac8:
    // 0x109ac8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_109acc:
    if (ctx->pc == 0x109ACCu) {
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AD0u;
        goto label_109ad0;
    }
    ctx->pc = 0x109AC8u;
    {
        const bool branch_taken_0x109ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109ac8) {
            ctx->pc = 0x109ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109AC8u;
            // 0x109acc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109ab8;
        }
    }
    ctx->pc = 0x109AD0u;
label_109ad0:
    // 0x109ad0: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x109ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_109ad4:
    // 0x109ad4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x109ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_109ad8:
    // 0x109ad8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_109adc:
    if (ctx->pc == 0x109ADCu) {
        ctx->pc = 0x109ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD8u;
        // 0x109adc: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AE0u;
        goto label_109ae0;
    }
    ctx->pc = 0x109AD8u;
    {
        const bool branch_taken_0x109ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD8u;
        // 0x109adc: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ad8) {
            ctx->pc = 0x109B1Cu;
            goto label_109b1c;
        }
    }
    ctx->pc = 0x109AE0u;
label_109ae0:
    // 0x109ae0: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x109ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_109ae4:
    // 0x109ae4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_109ae8:
    if (ctx->pc == 0x109AE8u) {
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AECu;
        goto label_109aec;
    }
    ctx->pc = 0x109AE4u;
    {
        const bool branch_taken_0x109ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ae4) {
            ctx->pc = 0x109AFCu;
            goto label_109afc;
        }
    }
    ctx->pc = 0x109AECu;
label_109aec:
    // 0x109aec: 0xc0c5486  jal         func_315218
label_109af0:
    if (ctx->pc == 0x109AF0u) {
        ctx->pc = 0x109AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AECu;
        // 0x109af0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AF4u;
        goto label_109af4;
    }
    ctx->pc = 0x109AECu;
    SET_GPR_U32(ctx, 31, 0x109AF4u);
    ctx->pc = 0x109AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AECu;
    // 0x109af0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x109AECu, 0x109AF4u)) {
        return;
    }
    ctx->pc = 0x109AF4u;
label_109af4:
    // 0x109af4: 0x1000000a  b           . + 4 + (0xA << 2)
label_109af8:
    if (ctx->pc == 0x109AF8u) {
        ctx->pc = 0x109AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AF4u;
        // 0x109af8: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AFCu;
        goto label_109afc;
    }
    ctx->pc = 0x109AF4u;
    {
        const bool branch_taken_0x109af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AF4u;
        // 0x109af8: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109af4) {
            ctx->pc = 0x109B20u;
            goto label_109b20;
        }
    }
    ctx->pc = 0x109AFCu;
label_109afc:
    // 0x109afc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x109afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_109b00:
    // 0x109b00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_109b04:
    // 0x109b04: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x109b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_109b08:
    // 0x109b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109b0c:
    // 0x109b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109b10:
    // 0x109b10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x109b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109b14:
    // 0x109b14: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x109b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_109b18:
    // 0x109b18: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x109b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_109b1c:
    // 0x109b1c: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x109b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_109b20:
    // 0x109b20: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x109b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_109b24:
    // 0x109b24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x109b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_109b28:
    // 0x109b28: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x109b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_109b2c:
    // 0x109b2c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x109b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_109b30:
    // 0x109b30: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x109b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_109b34:
    // 0x109b34: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x109b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_109b38:
    // 0x109b38: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x109b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_109b3c:
    // 0x109b3c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x109b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_109b40:
    // 0x109b40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x109b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_109b44:
    // 0x109b44: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x109b44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_109b48:
    // 0x109b48: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x109b48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_109b4c:
    // 0x109b4c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x109b4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_109b50:
    // 0x109b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109b54:
    // 0x109b54: 0x3e00008  jr          $ra
label_109b58:
    if (ctx->pc == 0x109B58u) {
        ctx->pc = 0x109B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B54u;
        // 0x109b58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109B5Cu;
        goto label_109b5c;
    }
    ctx->pc = 0x109B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B54u;
        // 0x109b58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109B5Cu;
label_109b5c:
    // 0x109b5c: 0x0  nop
    ctx->pc = 0x109b5cu;
    // NOP
    ctx->pc = 0x109b60u;
}

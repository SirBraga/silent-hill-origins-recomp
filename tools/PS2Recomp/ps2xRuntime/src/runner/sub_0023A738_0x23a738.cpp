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

// Function: sub_0023A738
// Address: 0x23a738 - 0x23a890
void sub_0023A738_0x23a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A738_0x23a738");
#endif

    switch (ctx->pc) {
        case 0x23a770u: goto label_23a770;
        case 0x23a784u: goto label_23a784;
        case 0x23a7acu: goto label_23a7ac;
        case 0x23a820u: goto label_23a820;
        case 0x23a840u: goto label_23a840;
        case 0x23a858u: goto label_23a858;
        default: break;
    }

    ctx->pc = 0x23a738u;

    // 0x23a738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a73c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x23a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x23a740: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23a744: 0x24623c90  addiu       $v0, $v1, 0x3C90
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15504));
    // 0x23a748: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23a74c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23a750: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a758: 0x8c643c90  lw          $a0, 0x3C90($v1)
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x703C90u));
    // 0x23a75c: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x23a75cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x703CA4u));
    // 0x23a760: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x703C98u));
    // 0x23a764: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x703C94u));
    // 0x23a768: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x23A768u;
    SET_GPR_U32(ctx, 31, 0x23A770u);
    ctx->pc = 0x23A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A768u;
    // 0x23a76c: 0x34e70002  ori         $a3, $a3, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x23A768u, 0x23A770u)) {
        return;
    }
    ctx->pc = 0x23A770u;
label_23a770:
    // 0x23a770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a774: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x23a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x23a778: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x23a778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23a77c: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A77Cu;
    SET_GPR_U32(ctx, 31, 0x23A784u);
    ctx->pc = 0x23A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A77Cu;
    // 0x23a780: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A77Cu, 0x23A784u)) {
        return;
    }
    ctx->pc = 0x23A784u;
label_23a784:
    // 0x23a784: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23a788: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x23a788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x23a78c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23a790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23a794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A794u;
    {
        const bool branch_taken_0x23a794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A794u;
        // 0x23a798: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a794) {
            ctx->pc = 0x23A7A4u;
            goto label_23a7a4;
        }
    }
    ctx->pc = 0x23A79Cu;
    // 0x23a79c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23a7a0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23a7a4:
    // 0x23a7a4: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A7A4u;
    SET_GPR_U32(ctx, 31, 0x23A7ACu);
    ctx->pc = 0x23A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7A4u;
    // 0x23a7a8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A7A4u, 0x23A7ACu)) {
        return;
    }
    ctx->pc = 0x23A7ACu;
label_23a7ac:
    // 0x23a7ac: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23a7b0: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x23a7b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a7b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23a7bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A7BCu;
    {
        const bool branch_taken_0x23a7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7BCu;
        // 0x23a7c0: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7bc) {
            ctx->pc = 0x23A7CCu;
            goto label_23a7cc;
        }
    }
    ctx->pc = 0x23A7C4u;
    // 0x23a7c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23a7c8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x23a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_23a7cc:
    // 0x23a7cc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x23a7d0: 0x8e10416c  lw          $s0, 0x416C($s0)
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x23a7d4: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x23a7d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23a7dc: 0xdf838458  ld          $v1, -0x7BA8($gp)
    ctx->pc = 0x23a7dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x23a7e0: 0x31c3b  dsra        $v1, $v1, 16
    ctx->pc = 0x23a7e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 16);
    // 0x23a7e4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x23a7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x23a7e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a7ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a7ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x23a7f0: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x23a7f4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a7f8: 0xdf828458  ld          $v0, -0x7BA8($gp)
    ctx->pc = 0x23a7f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x23a7fc: 0x2163b  dsra        $v0, $v0, 24
    ctx->pc = 0x23a7fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 24);
    // 0x23a800: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x23a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x23a804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a808: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a80c: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x23a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x23a810: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a814: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a818: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A818u;
    SET_GPR_U32(ctx, 31, 0x23A820u);
    ctx->pc = 0x23A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A818u;
    // 0x23a81c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A818u, 0x23A820u)) {
        return;
    }
    ctx->pc = 0x23A820u;
label_23a820:
    // 0x23a820: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a824: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a828: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x23a828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x23a82c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x23a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x23a830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a834: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a838: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A838u;
    SET_GPR_U32(ctx, 31, 0x23A840u);
    ctx->pc = 0x23A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A838u;
    // 0x23a83c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A838u, 0x23A840u)) {
        return;
    }
    ctx->pc = 0x23A840u;
label_23a840:
    // 0x23a840: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a844: 0x21780  sll         $v0, $v0, 30
    ctx->pc = 0x23a844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
    // 0x23a848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a84c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a850: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A850u;
    SET_GPR_U32(ctx, 31, 0x23A858u);
    ctx->pc = 0x23A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A850u;
    // 0x23a854: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A850u, 0x23A858u)) {
        return;
    }
    ctx->pc = 0x23A858u;
label_23a858:
    // 0x23a858: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a85c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a860: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23a860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x23a864: 0xa2120017  sb          $s2, 0x17($s0)
    ctx->pc = 0x23a864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 18));
    // 0x23a868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a86c: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x23a86cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a870: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x23a870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x23a874: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23a878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a87c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23a87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a880: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23a880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a888: 0x3e00008  jr          $ra
    ctx->pc = 0x23A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A888u;
        // 0x23a88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A890u;
}

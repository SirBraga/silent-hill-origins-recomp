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

// Function: sub_00221638
// Address: 0x221638 - 0x221bd8
void sub_00221638_0x221638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221638_0x221638");
#endif

    switch (ctx->pc) {
        case 0x221690u: goto label_221690;
        case 0x221770u: goto label_221770;
        case 0x2217e4u: goto label_2217e4;
        case 0x221814u: goto label_221814;
        case 0x221840u: goto label_221840;
        case 0x221850u: goto label_221850;
        case 0x221930u: goto label_221930;
        case 0x221a24u: goto label_221a24;
        case 0x221a60u: goto label_221a60;
        case 0x221a8cu: goto label_221a8c;
        case 0x221a9cu: goto label_221a9c;
        default: break;
    }

    ctx->pc = 0x221638u;

    // 0x221638: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x221638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x22163c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x22163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x221640: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x221640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x221644: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x221644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221648: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x221648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x22164c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x22164cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221650: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x221650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x221654: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x221654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x221658: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x221658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x22165c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x22165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x221660: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x221660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x221664: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x221664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x221668: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x221668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x22166c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x221670: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x221670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x221674: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x221674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x221678: 0x8cbe0050  lw          $fp, 0x50($a1)
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22167c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x22167cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x221680: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221684: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x221684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
    // 0x221688: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x221688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x22168c: 0x0  nop
    ctx->pc = 0x22168cu;
    // NOP
label_221690:
    // 0x221690: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x221690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x221694: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221698: 0x5062009c  beql        $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x221698u;
    {
        const bool branch_taken_0x221698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221698) {
            ctx->pc = 0x22169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221698u;
            // 0x22169c: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22190Cu;
            goto label_22190c;
        }
    }
    ctx->pc = 0x2216A0u;
    // 0x2216a0: 0x96e40010  lhu         $a0, 0x10($s7)
    ctx->pc = 0x2216a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2216a4: 0x86e20010  lh          $v0, 0x10($s7)
    ctx->pc = 0x2216a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2216a8: 0xa7a400a0  sh          $a0, 0xA0($sp)
    ctx->pc = 0x2216a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2216ac: 0x96e40060  lhu         $a0, 0x60($s7)
    ctx->pc = 0x2216acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 96)));
    // 0x2216b0: 0x96e30020  lhu         $v1, 0x20($s7)
    ctx->pc = 0x2216b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2216b4: 0x96f60030  lhu         $s6, 0x30($s7)
    ctx->pc = 0x2216b4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2216b8: 0x96f30050  lhu         $s3, 0x50($s7)
    ctx->pc = 0x2216b8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x2216bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2216BCu;
    {
        const bool branch_taken_0x2216bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2216C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216BCu;
        // 0x2216c0: 0x96f20070  lhu         $s2, 0x70($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216bc) {
            ctx->pc = 0x221710u;
            goto label_221710;
        }
    }
    ctx->pc = 0x2216C4u;
    // 0x2216c4: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2216C4u;
    {
        const bool branch_taken_0x2216c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2216c4) {
            ctx->pc = 0x2216C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2216C4u;
            // 0x2216c8: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221714u;
            goto label_221714;
        }
    }
    ctx->pc = 0x2216CCu;
    // 0x2216cc: 0x16c00011  bnez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2216CCu;
    {
        const bool branch_taken_0x2216cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2216D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216CCu;
        // 0x2216d0: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216cc) {
            ctx->pc = 0x221714u;
            goto label_221714;
        }
    }
    ctx->pc = 0x2216D4u;
    // 0x2216d4: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2216D4u;
    {
        const bool branch_taken_0x2216d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2216d4) {
            ctx->pc = 0x221714u;
            goto label_221714;
        }
    }
    ctx->pc = 0x2216DCu;
    // 0x2216dc: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2216DCu;
    {
        const bool branch_taken_0x2216dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2216dc) {
            ctx->pc = 0x2216E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2216DCu;
            // 0x2216e0: 0x8fc700c0  lw          $a3, 0xC0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221718u;
            goto label_221718;
        }
    }
    ctx->pc = 0x2216E4u;
    // 0x2216e4: 0x5640000c  bnel        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2216E4u;
    {
        const bool branch_taken_0x2216e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2216e4) {
            ctx->pc = 0x2216E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2216E4u;
            // 0x2216e8: 0x8fc700c0  lw          $a3, 0xC0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221718u;
            goto label_221718;
        }
    }
    ctx->pc = 0x2216ECu;
    // 0x2216ec: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2216f0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2216f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2216f4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2216f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2216f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2216f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2216fc: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x2216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x221700: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x221700u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x221704: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x221704u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x221708: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x221708u;
    {
        const bool branch_taken_0x221708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221708u;
        // 0x22170c: 0xaea20040  sw          $v0, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221708) {
            ctx->pc = 0x221904u;
            goto label_221904;
        }
    }
    ctx->pc = 0x221710u;
label_221710:
    // 0x221710: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x221710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_221714:
    // 0x221714: 0x8fc700c0  lw          $a3, 0xC0($fp)
    ctx->pc = 0x221714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
label_221718:
    // 0x221718: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x221718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x22171c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x22171cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x221720: 0x86e60000  lh          $a2, 0x0($s7)
    ctx->pc = 0x221720u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x221724: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x221728: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x221728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22172c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22172cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x221730: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x221730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x221734: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x221734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x221738: 0x2405e782  addiu       $a1, $zero, -0x187E
    ctx->pc = 0x221738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961026));
    // 0x22173c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x22173cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x221740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221744: 0x118138  dsll        $s0, $s1, 4
    ctx->pc = 0x221744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << 4);
    // 0x221748: 0x211802f  dsubu       $s0, $s0, $s1
    ctx->pc = 0x221748u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 17));
    // 0x22174c: 0x1080b8  dsll        $s0, $s0, 2
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
    // 0x221750: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x221750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221754: 0x211802f  dsubu       $s0, $s0, $s1
    ctx->pc = 0x221754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 17));
    // 0x221758: 0x14a3b8  dsll        $s4, $s4, 14
    ctx->pc = 0x221758u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 14);
    // 0x22175c: 0x1080f8  dsll        $s0, $s0, 3
    ctx->pc = 0x22175cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 3);
    // 0x221760: 0x211802d  daddu       $s0, $s0, $s1
    ctx->pc = 0x221760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221764: 0x108178  dsll        $s0, $s0, 5
    ctx->pc = 0x221764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 5);
    // 0x221768: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221768u;
    SET_GPR_U32(ctx, 31, 0x221770u);
    ctx->pc = 0x22176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221768u;
    // 0x22176c: 0x211802d  daddu       $s0, $s0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221768u, 0x221770u)) {
        return;
    }
    ctx->pc = 0x221770u;
label_221770:
    // 0x221770: 0x97a700a0  lhu         $a3, 0xA0($sp)
    ctx->pc = 0x221770u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x221774: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x221778: 0x8fce00a0  lw          $t6, 0xA0($fp)
    ctx->pc = 0x221778u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 160)));
    // 0x22177c: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x22177cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x221780: 0x8fc600e0  lw          $a2, 0xE0($fp)
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 224)));
    // 0x221784: 0x76400  sll         $t4, $a3, 16
    ctx->pc = 0x221784u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x221788: 0x8fcd0060  lw          $t5, 0x60($fp)
    ctx->pc = 0x221788u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x22178c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22178cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x221790: 0x8fcf0020  lw          $t7, 0x20($fp)
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x221794: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x221794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x221798: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x22179c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x22179cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2217a0: 0xae2818  mult        $a1, $a1, $t6
    ctx->pc = 0x2217a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2217a4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2217a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2217a8: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x2217ac: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x2217acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2217b0: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x2217b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2217b4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2217b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2217b8: 0x290102f  dsubu       $v0, $s4, $s0
    ctx->pc = 0x2217b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 16));
    // 0x2217bc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2217bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217c0: 0x290a02d  daddu       $s4, $s4, $s0
    ctx->pc = 0x2217c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2217c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2217c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217c8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2217c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217cc: 0xffb40088  sd          $s4, 0x88($sp)
    ctx->pc = 0x2217ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 20));
    // 0x2217d0: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x2217d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217d4: 0xffa20090  sd          $v0, 0x90($sp)
    ctx->pc = 0x2217d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x2217d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2217d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217dc: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2217DCu;
    SET_GPR_U32(ctx, 31, 0x2217E4u);
    ctx->pc = 0x2217E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217DCu;
    // 0x2217e0: 0x2405f93e  addiu       $a1, $zero, -0x6C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965566));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2217DCu, 0x2217E4u)) {
        return;
    }
    ctx->pc = 0x2217E4u;
label_2217e4:
    // 0x2217e4: 0x113178  dsll        $a2, $s1, 5
    ctx->pc = 0x2217e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << 5);
    // 0x2217e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2217e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217ec: 0xd1302f  dsubu       $a2, $a2, $s1
    ctx->pc = 0x2217ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    // 0x2217f0: 0x2405ba79  addiu       $a1, $zero, -0x4587
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294949497));
    // 0x2217f4: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x2217f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x2217f8: 0xd1302f  dsubu       $a2, $a2, $s1
    ctx->pc = 0x2217f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    // 0x2217fc: 0x618b8  dsll        $v1, $a2, 2
    ctx->pc = 0x2217fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 2);
    // 0x221800: 0x66182f  dsubu       $v1, $v1, $a2
    ctx->pc = 0x221800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
    // 0x221804: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221808: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x221808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x22180c: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x22180Cu;
    SET_GPR_U32(ctx, 31, 0x221814u);
    ctx->pc = 0x221810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22180Cu;
    // 0x221810: 0x43802d  daddu       $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x22180Cu, 0x221814u)) {
        return;
    }
    ctx->pc = 0x221814u;
label_221814:
    // 0x221814: 0x121938  dsll        $v1, $s2, 4
    ctx->pc = 0x221814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << 4);
    // 0x221818: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x22181c: 0x72182d  daddu       $v1, $v1, $s2
    ctx->pc = 0x22181cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221824: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x221824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x221828: 0x2405efb0  addiu       $a1, $zero, -0x1050
    ctx->pc = 0x221828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963120));
    // 0x22182c: 0x72182f  dsubu       $v1, $v1, $s2
    ctx->pc = 0x22182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 18));
    // 0x221830: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x221830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x221834: 0x72182d  daddu       $v1, $v1, $s2
    ctx->pc = 0x221834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221838: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221838u;
    SET_GPR_U32(ctx, 31, 0x221840u);
    ctx->pc = 0x22183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221838u;
    // 0x22183c: 0x203a02d  daddu       $s4, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221838u, 0x221840u)) {
        return;
    }
    ctx->pc = 0x221840u;
label_221840:
    // 0x221840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221848: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221848u;
    SET_GPR_U32(ctx, 31, 0x221850u);
    ctx->pc = 0x22184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221848u;
    // 0x22184c: 0x2405ecc2  addiu       $a1, $zero, -0x133E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294962370));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221848u, 0x221850u)) {
        return;
    }
    ctx->pc = 0x221850u;
label_221850:
    // 0x221850: 0x1318f8  dsll        $v1, $s3, 3
    ctx->pc = 0x221850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 3);
    // 0x221854: 0x1220b8  dsll        $a0, $s2, 2
    ctx->pc = 0x221854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << 2);
    // 0x221858: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x22185c: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221860: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221864: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x221864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x221868: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x221868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x22186c: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x22186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221870: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221874: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x221874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x221878: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x22187c: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x22187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221880: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221884: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221888: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x221888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x22188c: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x22188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x221890: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221894: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x221894u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x221898: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x22189c: 0x92202f  dsubu       $a0, $a0, $s2
    ctx->pc = 0x22189cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 18));
    // 0x2218a0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x2218a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2218a4: 0xdfa70090  ld          $a3, 0x90($sp)
    ctx->pc = 0x2218a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2218a8: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x2218a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2218ac: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2218acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2218b0: 0xf4302f  dsubu       $a2, $a3, $s4
    ctx->pc = 0x2218b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) - GPR_U64(ctx, 20));
    // 0x2218b4: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x2218b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2218b8: 0xf4282d  daddu       $a1, $a3, $s4
    ctx->pc = 0x2218b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
    // 0x2218bc: 0x50182f  dsubu       $v1, $v0, $s0
    ctx->pc = 0x2218bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x2218c0: 0x64a50800  daddiu      $a1, $a1, 0x800
    ctx->pc = 0x2218c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)2048);
    // 0x2218c4: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x2218c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2218c8: 0x64c60800  daddiu      $a2, $a2, 0x800
    ctx->pc = 0x2218c8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)2048);
    // 0x2218cc: 0x64420800  daddiu      $v0, $v0, 0x800
    ctx->pc = 0x2218ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2048);
    // 0x2218d0: 0x64630800  daddiu      $v1, $v1, 0x800
    ctx->pc = 0x2218d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2048);
    // 0x2218d4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x2218d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x2218d8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2218d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2218dc: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x2218dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x2218e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2218e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2218e4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2218e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2218e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2218e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2218ec: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x2218f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2218f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2218f4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2218f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2218f8: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x2218f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x2218fc: 0xaea50020  sw          $a1, 0x20($s5)
    ctx->pc = 0x2218fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x221900: 0xaea60040  sw          $a2, 0x40($s5)
    ctx->pc = 0x221900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 6));
label_221904:
    // 0x221904: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x221904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x221908: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x221908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_22190c:
    // 0x22190c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x22190cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x221910: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x221914: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x221918: 0x1c60ff5d  bgtz        $v1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x221918u;
    {
        const bool branch_taken_0x221918 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x22191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221918u;
        // 0x22191c: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221918) {
            ctx->pc = 0x221690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221690;
        }
    }
    ctx->pc = 0x221920u;
    // 0x221920: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221924: 0x8fbe0080  lw          $fp, 0x80($sp)
    ctx->pc = 0x221924u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221928: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x221928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x22192c: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x22192cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_221930:
    // 0x221930: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x221930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x221934: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x221934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x221938: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x221938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x22193c: 0x46b821  addu        $s7, $v0, $a2
    ctx->pc = 0x22193cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x221940: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x221940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x221944: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x221944u;
    {
        const bool branch_taken_0x221944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221944u;
        // 0x221948: 0x8ea50018  lw          $a1, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221944) {
            ctx->pc = 0x2219B4u;
            goto label_2219b4;
        }
    }
    ctx->pc = 0x22194Cu;
    // 0x22194c: 0x5480001a  bnel        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22194Cu;
    {
        const bool branch_taken_0x22194c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22194c) {
            ctx->pc = 0x221950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22194Cu;
            // 0x221950: 0x24033b21  addiu       $v1, $zero, 0x3B21 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15137));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2219B8u;
            goto label_2219b8;
        }
    }
    ctx->pc = 0x221954u;
    // 0x221954: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x221954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x221958: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x221958u;
    {
        const bool branch_taken_0x221958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221958u;
        // 0x22195c: 0x24033b21  addiu       $v1, $zero, 0x3B21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221958) {
            ctx->pc = 0x2219B8u;
            goto label_2219b8;
        }
    }
    ctx->pc = 0x221960u;
    // 0x221960: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x221964: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x221964u;
    {
        const bool branch_taken_0x221964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221964) {
            ctx->pc = 0x2219B8u;
            goto label_2219b8;
        }
    }
    ctx->pc = 0x22196Cu;
    // 0x22196c: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22196Cu;
    {
        const bool branch_taken_0x22196c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x221970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22196Cu;
        // 0x221970: 0x2402e782  addiu       $v0, $zero, -0x187E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22196c) {
            ctx->pc = 0x2219BCu;
            goto label_2219bc;
        }
    }
    ctx->pc = 0x221974u;
    // 0x221974: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x221978: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x221978u;
    {
        const bool branch_taken_0x221978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221978u;
        // 0x22197c: 0x2402e782  addiu       $v0, $zero, -0x187E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221978) {
            ctx->pc = 0x2219BCu;
            goto label_2219bc;
        }
    }
    ctx->pc = 0x221980u;
    // 0x221980: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x221984: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x221984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x221988: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x221988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x22198c: 0x64420010  daddiu      $v0, $v0, 0x10
    ctx->pc = 0x22198cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)16);
    // 0x221990: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x221990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x221994: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221998: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x221998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x22199c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2219a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2219a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2219a4: 0xa2e30003  sb          $v1, 0x3($s7)
    ctx->pc = 0x2219a4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2219a8: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x2219a8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2219ac: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2219ACu;
    {
        const bool branch_taken_0x2219ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219ACu;
        // 0x2219b0: 0xa2e30001  sb          $v1, 0x1($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219ac) {
            ctx->pc = 0x221B8Cu;
            goto label_221b8c;
        }
    }
    ctx->pc = 0x2219B4u;
label_2219b4:
    // 0x2219b4: 0x24033b21  addiu       $v1, $zero, 0x3B21
    ctx->pc = 0x2219b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15137));
label_2219b8:
    // 0x2219b8: 0x2402e782  addiu       $v0, $zero, -0x187E
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961026));
label_2219bc:
    // 0x2219bc: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x2219bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2219c0: 0x8eb6001c  lw          $s6, 0x1C($s5)
    ctx->pc = 0x2219c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x2219c4: 0x8eb10014  lw          $s1, 0x14($s5)
    ctx->pc = 0x2219c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2219c8: 0x3012  mflo        $a2
    ctx->pc = 0x2219c8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2219cc: 0x1810  mfhi        $v1
    ctx->pc = 0x2219ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2219d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2219d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2219d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2219d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2219d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2219dc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2219dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2219e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2219e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2219e4: 0x2405f93e  addiu       $a1, $zero, -0x6C2
    ctx->pc = 0x2219e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965566));
    // 0x2219e8: 0x2012  mflo        $a0
    ctx->pc = 0x2219e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2219ec: 0x1010  mfhi        $v0
    ctx->pc = 0x2219ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2219f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2219f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2219f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2219f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2219f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2219fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2219fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x221a00: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x221a04: 0x62802d  daddu       $s0, $v1, $v0
    ctx->pc = 0x221a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221a08: 0x4a3b8  dsll        $s4, $a0, 14
    ctx->pc = 0x221a08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << 14);
    // 0x221a0c: 0x290302f  dsubu       $a2, $s4, $s0
    ctx->pc = 0x221a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) - GPR_U64(ctx, 16));
    // 0x221a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a14: 0x290a02d  daddu       $s4, $s4, $s0
    ctx->pc = 0x221a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 16));
    // 0x221a18: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x221a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x221a1c: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221A1Cu;
    SET_GPR_U32(ctx, 31, 0x221A24u);
    ctx->pc = 0x221A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A1Cu;
    // 0x221a20: 0xffb40088  sd          $s4, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221A1Cu, 0x221A24u)) {
        return;
    }
    ctx->pc = 0x221A24u;
label_221a24:
    // 0x221a24: 0x113178  dsll        $a2, $s1, 5
    ctx->pc = 0x221a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << 5);
    // 0x221a28: 0x8eb3000c  lw          $s3, 0xC($s5)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x221a2c: 0xd1302f  dsubu       $a2, $a2, $s1
    ctx->pc = 0x221a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    // 0x221a30: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x221a34: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x221a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x221a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x221a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a3c: 0xd1302f  dsubu       $a2, $a2, $s1
    ctx->pc = 0x221a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    // 0x221a40: 0x2405ba79  addiu       $a1, $zero, -0x4587
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294949497));
    // 0x221a44: 0x618b8  dsll        $v1, $a2, 2
    ctx->pc = 0x221a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 2);
    // 0x221a48: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x221a48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x221a4c: 0x66182f  dsubu       $v1, $v1, $a2
    ctx->pc = 0x221a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
    // 0x221a50: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221a54: 0x71182d  daddu       $v1, $v1, $s1
    ctx->pc = 0x221a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x221a58: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221A58u;
    SET_GPR_U32(ctx, 31, 0x221A60u);
    ctx->pc = 0x221A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A58u;
    // 0x221a5c: 0x43802d  daddu       $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221A58u, 0x221A60u)) {
        return;
    }
    ctx->pc = 0x221A60u;
label_221a60:
    // 0x221a60: 0x121938  dsll        $v1, $s2, 4
    ctx->pc = 0x221a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << 4);
    // 0x221a64: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221a68: 0x72182d  daddu       $v1, $v1, $s2
    ctx->pc = 0x221a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221a6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a70: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x221a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x221a74: 0x2405efb0  addiu       $a1, $zero, -0x1050
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963120));
    // 0x221a78: 0x72182f  dsubu       $v1, $v1, $s2
    ctx->pc = 0x221a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 18));
    // 0x221a7c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x221a80: 0x72182d  daddu       $v1, $v1, $s2
    ctx->pc = 0x221a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221a84: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221A84u;
    SET_GPR_U32(ctx, 31, 0x221A8Cu);
    ctx->pc = 0x221A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A84u;
    // 0x221a88: 0x203a02d  daddu       $s4, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221A84u, 0x221A8Cu)) {
        return;
    }
    ctx->pc = 0x221A8Cu;
label_221a8c:
    // 0x221a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a94: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221A94u;
    SET_GPR_U32(ctx, 31, 0x221A9Cu);
    ctx->pc = 0x221A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A94u;
    // 0x221a98: 0x2405ecc2  addiu       $a1, $zero, -0x133E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294962370));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221A94u, 0x221A9Cu)) {
        return;
    }
    ctx->pc = 0x221A9Cu;
label_221a9c:
    // 0x221a9c: 0x1318f8  dsll        $v1, $s3, 3
    ctx->pc = 0x221a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 3);
    // 0x221aa0: 0x1220b8  dsll        $a0, $s2, 2
    ctx->pc = 0x221aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << 2);
    // 0x221aa4: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x221aa8: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x221aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221aac: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221ab0: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x221ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x221ab4: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x221ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221ab8: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x221ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221abc: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221ac0: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x221ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x221ac4: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x221ac8: 0xdfa70090  ld          $a3, 0x90($sp)
    ctx->pc = 0x221ac8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221acc: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221ad0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221ad4: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x221ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221ad8: 0x92202d  daddu       $a0, $a0, $s2
    ctx->pc = 0x221ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 18));
    // 0x221adc: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221ae0: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x221ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x221ae4: 0x73182f  dsubu       $v1, $v1, $s3
    ctx->pc = 0x221ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x221ae8: 0x92202f  dsubu       $a0, $a0, $s2
    ctx->pc = 0x221ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 18));
    // 0x221aec: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221af0: 0xf4302d  daddu       $a2, $a3, $s4
    ctx->pc = 0x221af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
    // 0x221af4: 0x73182d  daddu       $v1, $v1, $s3
    ctx->pc = 0x221af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
    // 0x221af8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x221af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x221afc: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x221afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x221b00: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x221b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221b04: 0xdfa30088  ld          $v1, 0x88($sp)
    ctx->pc = 0x221b04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x221b08: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x221b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x221b0c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x221b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x221b10: 0xf4282f  dsubu       $a1, $a3, $s4
    ctx->pc = 0x221b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) - GPR_U64(ctx, 20));
    // 0x221b14: 0x70102d  daddu       $v0, $v1, $s0
    ctx->pc = 0x221b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
    // 0x221b18: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x221b1c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x221b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x221b20: 0x70182f  dsubu       $v1, $v1, $s0
    ctx->pc = 0x221b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 16));
    // 0x221b24: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x221b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x221b28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221b28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221b2c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x221b2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x221b30: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x221b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x221b34: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x221b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x221b38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x221b38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x221b3c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x221b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x221b40: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x221b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x221b44: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x221b44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221b48: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x221b4c: 0x63378  dsll        $a2, $a2, 13
    ctx->pc = 0x221b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 13);
    // 0x221b50: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x221b50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x221b54: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x221b58: 0xa2e40000  sb          $a0, 0x0($s7)
    ctx->pc = 0x221b58u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x221b5c: 0x30c603ff  andi        $a2, $a2, 0x3FF
    ctx->pc = 0x221b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1023);
    // 0x221b60: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x221b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221b64: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x221b68: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x221b68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221b6c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x221b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x221b70: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x221b70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x221b74: 0x30a503ff  andi        $a1, $a1, 0x3FF
    ctx->pc = 0x221b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x221b78: 0xa2e40003  sb          $a0, 0x3($s7)
    ctx->pc = 0x221b78u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x221b7c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x221b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x221b80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x221b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x221b84: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x221b84u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x221b88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x221b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_221b8c:
    // 0x221b8c: 0xa2e30002  sb          $v1, 0x2($s7)
    ctx->pc = 0x221b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x221b90: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x221b94: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x221b94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x221b98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x221b9c: 0x461ff64  bgez        $v1, . + 4 + (-0x9C << 2)
    ctx->pc = 0x221B9Cu;
    {
        const bool branch_taken_0x221b9c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x221BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B9Cu;
        // 0x221ba0: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b9c) {
            ctx->pc = 0x221930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221930;
        }
    }
    ctx->pc = 0x221BA4u;
    // 0x221ba4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x221ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x221ba8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x221ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x221bac: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x221bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x221bb0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x221bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x221bb4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x221bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x221bb8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x221bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x221bbc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x221bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x221bc0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x221bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x221bc4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x221bc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x221bc8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x221BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BCCu;
        // 0x221bd0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BD4u;
    // 0x221bd4: 0x0  nop
    ctx->pc = 0x221bd4u;
    // NOP
    ctx->pc = 0x221bd8u;
}

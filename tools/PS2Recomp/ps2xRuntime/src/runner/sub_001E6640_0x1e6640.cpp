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

// Function: sub_001E6640
// Address: 0x1e6640 - 0x1e69c8
void sub_001E6640_0x1e6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6640_0x1e6640");
#endif

    switch (ctx->pc) {
        case 0x1e6678u: goto label_1e6678;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e66b8u: goto label_1e66b8;
        case 0x1e66c4u: goto label_1e66c4;
        case 0x1e66dcu: goto label_1e66dc;
        case 0x1e66f4u: goto label_1e66f4;
        case 0x1e6700u: goto label_1e6700;
        case 0x1e6710u: goto label_1e6710;
        case 0x1e671cu: goto label_1e671c;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6750u: goto label_1e6750;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6770u: goto label_1e6770;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e6814u: goto label_1e6814;
        case 0x1e6834u: goto label_1e6834;
        case 0x1e6864u: goto label_1e6864;
        case 0x1e6870u: goto label_1e6870;
        case 0x1e689cu: goto label_1e689c;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68b8u: goto label_1e68b8;
        case 0x1e6900u: goto label_1e6900;
        case 0x1e6908u: goto label_1e6908;
        case 0x1e691cu: goto label_1e691c;
        case 0x1e6928u: goto label_1e6928;
        case 0x1e693cu: goto label_1e693c;
        case 0x1e696cu: goto label_1e696c;
        case 0x1e697cu: goto label_1e697c;
        case 0x1e698cu: goto label_1e698c;
        case 0x1e6994u: goto label_1e6994;
        default: break;
    }

    ctx->pc = 0x1e6640u;

    // 0x1e6640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e6644: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e6644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e6648: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e664c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e664cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6650: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e6650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e6654: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e6654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e6658: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e665c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e6660: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e6660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e6664: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e6668: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e666c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6670: 0xc05a294  jal         func_168A50
    ctx->pc = 0x1E6670u;
    SET_GPR_U32(ctx, 31, 0x1E6678u);
    ctx->pc = 0x1E6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6670u;
    // 0x1e6674: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168A50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168A50u, 0x1E6670u, 0x1E6678u)) {
        return;
    }
    ctx->pc = 0x1E6678u;
label_1e6678:
    // 0x1e6678: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e6678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e667c: 0x1aa000c5  blez        $s5, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1E667Cu;
    {
        const bool branch_taken_0x1e667c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1E6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E667Cu;
        // 0x1e6680: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e667c) {
            ctx->pc = 0x1E6994u;
            goto label_1e6994;
        }
    }
    ctx->pc = 0x1E6684u;
    // 0x1e6684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6688: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1e6688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e668c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1e668cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1e6690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6694: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E6694u;
    SET_GPR_U32(ctx, 31, 0x1E669Cu);
    ctx->pc = 0x1E6698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6694u;
    // 0x1e6698: 0x2aa83  sra         $s5, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E6694u, 0x1E669Cu)) {
        return;
    }
    ctx->pc = 0x1E669Cu;
label_1e669c:
    // 0x1e669c: 0xde0334c0  ld          $v1, 0x34C0($s0)
    ctx->pc = 0x1e669cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1e66a0: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1e66a4: 0x2e52824  and         $a1, $s7, $a1
    ctx->pc = 0x1e66a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1e66a8: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e66ac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1e66acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1e66b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E66B0u;
    SET_GPR_U32(ctx, 31, 0x1E66B8u);
    ctx->pc = 0x1E66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66B0u;
    // 0x1e66b4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E66B0u, 0x1E66B8u)) {
        return;
    }
    ctx->pc = 0x1E66B8u;
label_1e66b8:
    // 0x1e66b8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e66bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E66BCu;
    SET_GPR_U32(ctx, 31, 0x1E66C4u);
    ctx->pc = 0x1E66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66BCu;
    // 0x1e66c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E66BCu, 0x1E66C4u)) {
        return;
    }
    ctx->pc = 0x1E66C4u;
label_1e66c4:
    // 0x1e66c4: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x1e66c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1e66c8: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1e66c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1e66cc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1e66ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1e66d0: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x1e66d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x1e66d4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E66D4u;
    SET_GPR_U32(ctx, 31, 0x1E66DCu);
    ctx->pc = 0x1E66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66D4u;
    // 0x1e66d8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E66D4u, 0x1E66DCu)) {
        return;
    }
    ctx->pc = 0x1E66DCu;
label_1e66dc:
    // 0x1e66dc: 0xde0234c0  ld          $v0, 0x34C0($s0)
    ctx->pc = 0x1e66dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1e66e0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e66e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e66e4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e66e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e66e8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e66ec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E66ECu;
    SET_GPR_U32(ctx, 31, 0x1E66F4u);
    ctx->pc = 0x1E66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66ECu;
    // 0x1e66f0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E66ECu, 0x1E66F4u)) {
        return;
    }
    ctx->pc = 0x1E66F4u;
label_1e66f4:
    // 0x1e66f4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e66f8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E66F8u;
    SET_GPR_U32(ctx, 31, 0x1E6700u);
    ctx->pc = 0x1E66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66F8u;
    // 0x1e66fc: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E66F8u, 0x1E6700u)) {
        return;
    }
    ctx->pc = 0x1E6700u;
label_1e6700:
    // 0x1e6700: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6704: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6708: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6708u;
    SET_GPR_U32(ctx, 31, 0x1E6710u);
    ctx->pc = 0x1E670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6708u;
    // 0x1e670c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6708u, 0x1E6710u)) {
        return;
    }
    ctx->pc = 0x1E6710u;
label_1e6710:
    // 0x1e6710: 0x24050261  addiu       $a1, $zero, 0x261
    ctx->pc = 0x1e6710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x1e6714: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6714u;
    SET_GPR_U32(ctx, 31, 0x1E671Cu);
    ctx->pc = 0x1E6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6714u;
    // 0x1e6718: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6714u, 0x1E671Cu)) {
        return;
    }
    ctx->pc = 0x1E671Cu;
label_1e671c:
    // 0x1e671c: 0x32e501ff  andi        $a1, $s7, 0x1FF
    ctx->pc = 0x1e671cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)511);
    // 0x1e6720: 0x34029900  ori         $v0, $zero, 0x9900
    ctx->pc = 0x1e6720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x1e6724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e6728: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e672c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1e672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1e6730: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e6730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e6734: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6738: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6738u;
    SET_GPR_U32(ctx, 31, 0x1E6740u);
    ctx->pc = 0x1E673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6738u;
    // 0x1e673c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6738u, 0x1E6740u)) {
        return;
    }
    ctx->pc = 0x1E6740u;
label_1e6740:
    // 0x1e6740: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6744: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6748: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6748u;
    SET_GPR_U32(ctx, 31, 0x1E6750u);
    ctx->pc = 0x1E674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6748u;
    // 0x1e674c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6748u, 0x1E6750u)) {
        return;
    }
    ctx->pc = 0x1E6750u;
label_1e6750:
    // 0x1e6750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6754: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6754u;
    SET_GPR_U32(ctx, 31, 0x1E675Cu);
    ctx->pc = 0x1E6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6754u;
    // 0x1e6758: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6754u, 0x1E675Cu)) {
        return;
    }
    ctx->pc = 0x1E675Cu;
label_1e675c:
    // 0x1e675c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e675cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e6760: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6764: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e6764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e6768: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6768u;
    SET_GPR_U32(ctx, 31, 0x1E6770u);
    ctx->pc = 0x1E676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6768u;
    // 0x1e676c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6768u, 0x1E6770u)) {
        return;
    }
    ctx->pc = 0x1E6770u;
label_1e6770:
    // 0x1e6770: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e6770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e6774: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6778: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e6778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e677c: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e6780: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e6780u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e6784: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6788: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E6788u;
    {
        const bool branch_taken_0x1e6788 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6788u;
        // 0x1e678c: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6788) {
            ctx->pc = 0x1E680Cu;
            goto label_1e680c;
        }
    }
    ctx->pc = 0x1E6790u;
    // 0x1e6790: 0x24140207  addiu       $s4, $zero, 0x207
    ctx->pc = 0x1e6790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x1e6794: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x1e6794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e6798: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e679c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1e67a0:
    // 0x1e67a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e67a4: 0x2422825  or          $a1, $s2, $v0
    ctx->pc = 0x1e67a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1e67a8: 0x118240  sll         $s0, $s1, 9
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x1e67ac: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E67ACu;
    SET_GPR_U32(ctx, 31, 0x1E67B4u);
    ctx->pc = 0x1E67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67ACu;
    // 0x1e67b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E67ACu, 0x1E67B4u)) {
        return;
    }
    ctx->pc = 0x1E67B4u;
label_1e67b4:
    // 0x1e67b4: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x1e67b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e67b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e67bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E67BCu;
    SET_GPR_U32(ctx, 31, 0x1E67C4u);
    ctx->pc = 0x1E67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67BCu;
    // 0x1e67c0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E67BCu, 0x1E67C4u)) {
        return;
    }
    ctx->pc = 0x1E67C4u;
label_1e67c4:
    // 0x1e67c4: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x1e67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x1e67c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e67cc: 0x2822825  or          $a1, $s4, $v0
    ctx->pc = 0x1e67ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1e67d0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E67D0u;
    SET_GPR_U32(ctx, 31, 0x1E67D8u);
    ctx->pc = 0x1E67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67D0u;
    // 0x1e67d4: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E67D0u, 0x1E67D8u)) {
        return;
    }
    ctx->pc = 0x1E67D8u;
label_1e67d8:
    // 0x1e67d8: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1e67dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e67e0: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x1e67e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1e67e4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E67E4u;
    SET_GPR_U32(ctx, 31, 0x1E67ECu);
    ctx->pc = 0x1E67E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67E4u;
    // 0x1e67e8: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E67E4u, 0x1E67ECu)) {
        return;
    }
    ctx->pc = 0x1E67ECu;
label_1e67ec:
    // 0x1e67ec: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e67f0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e67f4: 0x3c3202a  slt         $a0, $fp, $v1
    ctx->pc = 0x1e67f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e67f8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e67f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e67fc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e67fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6800: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e6800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6804: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1E6804u;
    {
        const bool branch_taken_0x1e6804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6804u;
        // 0x1e6808: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6804) {
            ctx->pc = 0x1E67A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e67a0;
        }
    }
    ctx->pc = 0x1E680Cu;
label_1e680c:
    // 0x1e680c: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E680Cu;
    SET_GPR_U32(ctx, 31, 0x1E6814u);
    ctx->pc = 0x1E6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E680Cu;
    // 0x1e6810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E680Cu, 0x1E6814u)) {
        return;
    }
    ctx->pc = 0x1E6814u;
label_1e6814:
    // 0x1e6814: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1e6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1e6818: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1e6818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e681c: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1e6820: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x1e6820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6824: 0x31283  sra         $v0, $v1, 10
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1e6828: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x1e6828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e682c: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E682Cu;
    SET_GPR_U32(ctx, 31, 0x1E6834u);
    ctx->pc = 0x1E6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E682Cu;
    // 0x1e6830: 0x29283  sra         $s2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E682Cu, 0x1E6834u)) {
        return;
    }
    ctx->pc = 0x1E6834u;
label_1e6834:
    // 0x1e6834: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1e6834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1e6838: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1e683c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1e683cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6844: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1e6848: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1e684c: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x1e684cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6850: 0x31283  sra         $v0, $v1, 10
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1e6854: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x1e6854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6858: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1e6858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1e685c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E685Cu;
    SET_GPR_U32(ctx, 31, 0x1E6864u);
    ctx->pc = 0x1E6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E685Cu;
    // 0x1e6860: 0xc28823  subu        $s1, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E685Cu, 0x1E6864u)) {
        return;
    }
    ctx->pc = 0x1E6864u;
label_1e6864:
    // 0x1e6864: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1e6868: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6868u;
    SET_GPR_U32(ctx, 31, 0x1E6870u);
    ctx->pc = 0x1E686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6868u;
    // 0x1e686c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6868u, 0x1E6870u)) {
        return;
    }
    ctx->pc = 0x1E6870u;
label_1e6870:
    // 0x1e6870: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e6870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e6874: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e6874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6878: 0xdc4534c0  ld          $a1, 0x34C0($v0)
    ctx->pc = 0x1e6878u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34C0u));
    // 0x1e687c: 0x34029900  ori         $v0, $zero, 0x9900
    ctx->pc = 0x1e687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x1e6880: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e6880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e6884: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6888: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1e6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1e688c: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1e688cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1e6890: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e6890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e6894: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6894u;
    SET_GPR_U32(ctx, 31, 0x1E689Cu);
    ctx->pc = 0x1E6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6894u;
    // 0x1e6898: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6894u, 0x1E689Cu)) {
        return;
    }
    ctx->pc = 0x1E689Cu;
label_1e689c:
    // 0x1e689c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E68A0u;
    SET_GPR_U32(ctx, 31, 0x1E68A8u);
    ctx->pc = 0x1E68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68A0u;
    // 0x1e68a4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E68A0u, 0x1E68A8u)) {
        return;
    }
    ctx->pc = 0x1E68A8u;
label_1e68a8:
    // 0x1e68a8: 0x3c055080  lui         $a1, 0x5080
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20608 << 16));
    // 0x1e68ac: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e68acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e68b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E68B0u;
    SET_GPR_U32(ctx, 31, 0x1E68B8u);
    ctx->pc = 0x1E68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68B0u;
    // 0x1e68b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E68B0u, 0x1E68B8u)) {
        return;
    }
    ctx->pc = 0x1E68B8u;
label_1e68b8:
    // 0x1e68b8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e68bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e68c0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e68c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e68c4: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e68c8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e68c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e68cc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e68ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e68d0: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E68D0u;
    {
        const bool branch_taken_0x1e68d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68D0u;
        // 0x1e68d4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e68d0) {
            ctx->pc = 0x1E695Cu;
            goto label_1e695c;
        }
    }
    ctx->pc = 0x1E68D8u;
    // 0x1e68d8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1e68dc: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x1e68dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x1e68e0: 0x3a438  dsll        $s4, $v1, 16
    ctx->pc = 0x1e68e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << 16);
    // 0x1e68e4: 0x3c1e1c00  lui         $fp, 0x1C00
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)7168 << 16));
    // 0x1e68e8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e68ec: 0x24130207  addiu       $s3, $zero, 0x207
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x1e68f0: 0x24120200  addiu       $s2, $zero, 0x200
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e68f4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e68f8: 0x2352825  or          $a1, $s1, $s5
    ctx->pc = 0x1e68f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 21));
    // 0x1e68fc: 0x0  nop
    ctx->pc = 0x1e68fcu;
    // NOP
label_1e6900:
    // 0x1e6900: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6900u;
    SET_GPR_U32(ctx, 31, 0x1E6908u);
    ctx->pc = 0x1E6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6900u;
    // 0x1e6904: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6900u, 0x1E6908u)) {
        return;
    }
    ctx->pc = 0x1E6908u;
label_1e6908:
    // 0x1e6908: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x1e690c: 0x102a40  sll         $a1, $s0, 9
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x1e6910: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e6910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6914: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6914u;
    SET_GPR_U32(ctx, 31, 0x1E691Cu);
    ctx->pc = 0x1E6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6914u;
    // 0x1e6918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6914u, 0x1E691Cu)) {
        return;
    }
    ctx->pc = 0x1E691Cu;
label_1e691c:
    // 0x1e691c: 0x2742825  or          $a1, $s3, $s4
    ctx->pc = 0x1e691cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 20));
    // 0x1e6920: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6920u;
    SET_GPR_U32(ctx, 31, 0x1E6928u);
    ctx->pc = 0x1E6924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6920u;
    // 0x1e6924: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6920u, 0x1E6928u)) {
        return;
    }
    ctx->pc = 0x1E6928u;
label_1e6928:
    // 0x1e6928: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x1e6928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x1e692c: 0x25e2825  or          $a1, $s2, $fp
    ctx->pc = 0x1e692cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 30));
    // 0x1e6930: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e6930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6934: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6934u;
    SET_GPR_U32(ctx, 31, 0x1E693Cu);
    ctx->pc = 0x1E6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6934u;
    // 0x1e6938: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6934u, 0x1E693Cu)) {
        return;
    }
    ctx->pc = 0x1E693Cu;
label_1e693c:
    // 0x1e693c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e6940: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e6944: 0x2e3202a  slt         $a0, $s7, $v1
    ctx->pc = 0x1e6944u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e6948: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e6948u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e694c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6950: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e6950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6954: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E6954u;
    {
        const bool branch_taken_0x1e6954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6954u;
        // 0x1e6958: 0x2352825  or          $a1, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6954) {
            ctx->pc = 0x1E6900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6900;
        }
    }
    ctx->pc = 0x1E695Cu;
label_1e695c:
    // 0x1e695c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e695cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e6960: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e6964: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6964u;
    SET_GPR_U32(ctx, 31, 0x1E696Cu);
    ctx->pc = 0x1E6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6964u;
    // 0x1e6968: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6964u, 0x1E696Cu)) {
        return;
    }
    ctx->pc = 0x1E696Cu;
label_1e696c:
    // 0x1e696c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e6970: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6974: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6974u;
    SET_GPR_U32(ctx, 31, 0x1E697Cu);
    ctx->pc = 0x1E6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6974u;
    // 0x1e6978: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6974u, 0x1E697Cu)) {
        return;
    }
    ctx->pc = 0x1E697Cu;
label_1e697c:
    // 0x1e697c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e6980: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e6984: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6984u;
    SET_GPR_U32(ctx, 31, 0x1E698Cu);
    ctx->pc = 0x1E6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6984u;
    // 0x1e6988: 0xdc4534c8  ld          $a1, 0x34C8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6984u, 0x1E698Cu)) {
        return;
    }
    ctx->pc = 0x1E698Cu;
label_1e698c:
    // 0x1e698c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E698Cu;
    SET_GPR_U32(ctx, 31, 0x1E6994u);
    ctx->pc = 0x1E6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E698Cu;
    // 0x1e6990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E698Cu, 0x1E6994u)) {
        return;
    }
    ctx->pc = 0x1E6994u;
label_1e6994:
    // 0x1e6994: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e6994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e6998: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e6998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e699c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e699cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e69a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e69a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e69a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e69a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e69a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e69a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e69ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e69acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e69b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e69b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e69b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e69b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e69b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e69b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e69bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E69BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69BCu;
        // 0x1e69c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E69BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E69C4u;
    // 0x1e69c4: 0x0  nop
    ctx->pc = 0x1e69c4u;
    // NOP
    ctx->pc = 0x1e69c8u;
}

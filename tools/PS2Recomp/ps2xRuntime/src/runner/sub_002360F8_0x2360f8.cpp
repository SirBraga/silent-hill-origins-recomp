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

// Function: sub_002360F8
// Address: 0x2360f8 - 0x236340
void sub_002360F8_0x2360f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002360F8_0x2360f8");
#endif

    switch (ctx->pc) {
        case 0x236128u: goto label_236128;
        case 0x236160u: goto label_236160;
        case 0x236198u: goto label_236198;
        case 0x2361a8u: goto label_2361a8;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362d0u: goto label_2362d0;
        default: break;
    }

    ctx->pc = 0x2360f8u;

    // 0x2360f8: 0x27bdef80  addiu       $sp, $sp, -0x1080
    ctx->pc = 0x2360f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963072));
    // 0x2360fc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2360fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236100: 0x7fb01070  sq          $s0, 0x1070($sp)
    ctx->pc = 0x236100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 16));
    // 0x236104: 0x7fb11060  sq          $s1, 0x1060($sp)
    ctx->pc = 0x236104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 17));
    // 0x236108: 0x7fb21050  sq          $s2, 0x1050($sp)
    ctx->pc = 0x236108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 18));
    // 0x23610c: 0x7fb31040  sq          $s3, 0x1040($sp)
    ctx->pc = 0x23610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 19));
    // 0x236110: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x236110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x236114: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x236114u;
    {
        const bool branch_taken_0x236114 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236114u;
        // 0x236118: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236114) {
            ctx->pc = 0x236324u;
            goto label_236324;
        }
    }
    ctx->pc = 0x23611Cu;
    // 0x23611c: 0x27b21000  addiu       $s2, $sp, 0x1000
    ctx->pc = 0x23611cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x236120: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x236120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x236124: 0x0  nop
    ctx->pc = 0x236124u;
    // NOP
label_236128:
    // 0x236128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23612c: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x23612Cu;
    {
        const bool branch_taken_0x23612c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x25b30004  addiu       $s3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23612c) {
            ctx->pc = 0x2362A8u;
            goto label_2362a8;
        }
    }
    ctx->pc = 0x236134u;
    // 0x236134: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x236134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x236138: 0x25a50002  addiu       $a1, $t5, 0x2
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x23613c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23613cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236140: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x236140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x236144: 0x1a41018  mult        $v0, $t5, $a0
    ctx->pc = 0x236144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x236148: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x236148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23614c: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x236150: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x236150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x236154: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x236154u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236158: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x236158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x23615c: 0x0  nop
    ctx->pc = 0x23615cu;
    // NOP
label_236160:
    // 0x236160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x236160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236164: 0x992821  addu        $a1, $a0, $t9
    ctx->pc = 0x236164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x236168: 0x25180010  addiu       $t8, $t0, 0x10
    ctx->pc = 0x236168u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x23616c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23616cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236170: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x236170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x236174: 0x7fa31000  sq          $v1, 0x1000($sp)
    ctx->pc = 0x236174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4096), GPR_VEC(ctx, 3));
    // 0x236178: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x236178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23617c: 0x7fa21010  sq          $v0, 0x1010($sp)
    ctx->pc = 0x23617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 2));
    // 0x236180: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x236180u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236184: 0x7fa31020  sq          $v1, 0x1020($sp)
    ctx->pc = 0x236184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 3));
    // 0x236188: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x236188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23618c: 0x7fa21030  sq          $v0, 0x1030($sp)
    ctx->pc = 0x23618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 2));
    // 0x236190: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x236190u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236194: 0x0  nop
    ctx->pc = 0x236194u;
    // NOP
label_236198:
    // 0x236198: 0x254e0010  addiu       $t6, $t2, 0x10
    ctx->pc = 0x236198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x23619c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x23619cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361a0: 0xa4827  nor         $t1, $zero, $t2
    ctx->pc = 0x2361a0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x2361a4: 0x0  nop
    ctx->pc = 0x2361a4u;
    // NOP
label_2361a8:
    // 0x2361a8: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2361A8u;
    {
        const bool branch_taken_0x2361a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361A8u;
        // 0x2361ac: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361a8) {
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361B0u;
    // 0x2361b0: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x2361b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2361b4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2361b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2361b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2361b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2361bc: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x2361bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2361c0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2361c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2361c4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2361c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2361c8: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x2361c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x2361cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2361ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2361d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2361d4: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x2361d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x2361d8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x2361d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2361dc: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x2361dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2361e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2361e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2361e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2361e8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2361e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2361ec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2361ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2361f0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2361f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2361f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2361f8: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x2361f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2361fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2361FCu;
    {
        const bool branch_taken_0x2361fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361FCu;
        // 0x236200: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361fc) {
            ctx->pc = 0x236250u;
            goto label_236250;
        }
    }
    ctx->pc = 0x236204u;
label_236204:
    // 0x236204: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x236204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236208: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x23620c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23620cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x236210: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x236210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x236214: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236218: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x23621c: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x23621cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x236220: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x236220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236224: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x236224u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x236228: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x236228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x23622c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23622cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x236230: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236234: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x236234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x236238: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x23623c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23623cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x236240: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x236240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x236244: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x236244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236248: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x236248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x23624c: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x23624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_236250:
    // 0x236250: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x236254: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x236254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x236258: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x236258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23625c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x23625cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x236260: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x236264: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x236264u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23626c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x23626cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x236270: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x236270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x236274: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x236274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x236278: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x236278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23627c: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x23627cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x236280: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x236280u;
    {
        const bool branch_taken_0x236280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236280u;
        // 0x236284: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236280) {
            ctx->pc = 0x2361A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2361a8;
        }
    }
    ctx->pc = 0x236288u;
    // 0x236288: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x236288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23628c: 0x29420040  slti        $v0, $t2, 0x40
    ctx->pc = 0x23628cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x236290: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x236290u;
    {
        const bool branch_taken_0x236290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236290) {
            ctx->pc = 0x236294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236290u;
            // 0x236294: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236198;
        }
    }
    ctx->pc = 0x236298u;
    // 0x236298: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x236298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23629c: 0x111102a  slt         $v0, $t0, $s1
    ctx->pc = 0x23629cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2362a0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2362A0u;
    {
        const bool branch_taken_0x2362a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2362A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362A0u;
        // 0x2362a4: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362a0) {
            ctx->pc = 0x236160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236160;
        }
    }
    ctx->pc = 0x2362A8u;
label_2362a8:
    // 0x2362a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2362a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362ac: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x2362acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_2362b0:
    // 0x2362b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2362b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362b4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2362B4u;
    {
        const bool branch_taken_0x2362b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362b4) {
            ctx->pc = 0x236300u;
            goto label_236300;
        }
    }
    ctx->pc = 0x2362BCu;
    // 0x2362bc: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x2362bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x2362c0: 0x1a43821  addu        $a3, $t5, $a0
    ctx->pc = 0x2362c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2362c4: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x2362c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2362c8: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x2362c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x2362cc: 0x0  nop
    ctx->pc = 0x2362ccu;
    // NOP
label_2362d0:
    // 0x2362d0: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x2362d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2362d4: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x2362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2362d8: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x2362d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2362dc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2362dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2362e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2362e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2362e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2362e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2362e8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2362e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2362ec: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2362ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2362f0: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x2362f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2362f4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2362f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2362f8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2362F8u;
    {
        const bool branch_taken_0x2362f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2362f8) {
            ctx->pc = 0x2362FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2362F8u;
            // 0x2362fc: 0x8d840018  lw          $a0, 0x18($t4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2362d0;
        }
    }
    ctx->pc = 0x236300u;
label_236300:
    // 0x236300: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x236300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236304: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x236304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x236308: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x236308u;
    {
        const bool branch_taken_0x236308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236308) {
            ctx->pc = 0x23630Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236308u;
            // 0x23630c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2362b0;
        }
    }
    ctx->pc = 0x236310u;
    // 0x236310: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x236310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x236314: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x236314u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236318: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x236318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23631c: 0x5440ff82  bnel        $v0, $zero, . + 4 + (-0x7E << 2)
    ctx->pc = 0x23631Cu;
    {
        const bool branch_taken_0x23631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23631c) {
            ctx->pc = 0x236320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23631Cu;
            // 0x236320: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236128;
        }
    }
    ctx->pc = 0x236324u;
label_236324:
    // 0x236324: 0x7bb01070  lq          $s0, 0x1070($sp)
    ctx->pc = 0x236324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x236328: 0x7bb11060  lq          $s1, 0x1060($sp)
    ctx->pc = 0x236328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x23632c: 0x7bb21050  lq          $s2, 0x1050($sp)
    ctx->pc = 0x23632cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x236330: 0x7bb31040  lq          $s3, 0x1040($sp)
    ctx->pc = 0x236330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x236334: 0x3e00008  jr          $ra
    ctx->pc = 0x236334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236334u;
        // 0x236338: 0x27bd1080  addiu       $sp, $sp, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23633Cu;
    // 0x23633c: 0x0  nop
    ctx->pc = 0x23633cu;
    // NOP
    ctx->pc = 0x236340u;
}

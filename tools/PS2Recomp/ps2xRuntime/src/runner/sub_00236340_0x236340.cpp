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

// Function: sub_00236340
// Address: 0x236340 - 0x236650
void sub_00236340_0x236340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236340_0x236340");
#endif

    switch (ctx->pc) {
        case 0x236370u: goto label_236370;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363f8u: goto label_2363f8;
        case 0x236408u: goto label_236408;
        case 0x2365c0u: goto label_2365c0;
        case 0x2365e0u: goto label_2365e0;
        default: break;
    }

    ctx->pc = 0x236340u;

    // 0x236340: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x236340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x236344: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x236344u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236348: 0x7fb00870  sq          $s0, 0x870($sp)
    ctx->pc = 0x236348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 16));
    // 0x23634c: 0x7fb10860  sq          $s1, 0x860($sp)
    ctx->pc = 0x23634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 17));
    // 0x236350: 0x7fb20850  sq          $s2, 0x850($sp)
    ctx->pc = 0x236350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 18));
    // 0x236354: 0x7fb30840  sq          $s3, 0x840($sp)
    ctx->pc = 0x236354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 19));
    // 0x236358: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x236358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x23635c: 0x184000b6  blez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x23635Cu;
    {
        const bool branch_taken_0x23635c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23635Cu;
        // 0x236360: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23635c) {
            ctx->pc = 0x236638u;
            goto label_236638;
        }
    }
    ctx->pc = 0x236364u;
    // 0x236364: 0x27ae0800  addiu       $t6, $sp, 0x800
    ctx->pc = 0x236364u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x236368: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x236368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x23636c: 0x0  nop
    ctx->pc = 0x23636cu;
    // NOP
label_236370:
    // 0x236370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236374: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x236374u;
    {
        const bool branch_taken_0x236374 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236374u;
        // 0x236378: 0x25f30004  addiu       $s3, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236374) {
            ctx->pc = 0x2365B4u;
            goto label_2365b4;
        }
    }
    ctx->pc = 0x23637Cu;
    // 0x23637c: 0x8da40018  lw          $a0, 0x18($t5)
    ctx->pc = 0x23637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x236380: 0x25e50002  addiu       $a1, $t7, 0x2
    ctx->pc = 0x236380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x236384: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x236384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x236388: 0x31f90004  andi        $t9, $t7, 0x4
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x23638c: 0x1e41018  mult        $v0, $t7, $a0
    ctx->pc = 0x23638cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x236390: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x236390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x236394: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x236394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236398: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x236398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23639c: 0x2292821  addu        $a1, $s1, $t1
    ctx->pc = 0x23639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_2363a0:
    // 0x2363a0: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x2363a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2363a4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2363a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2363a8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2363a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2363ac: 0x2493021  addu        $a2, $s2, $t1
    ctx->pc = 0x2363acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x2363b0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2363b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363b4: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x2363b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
    // 0x2363b8: 0x25300020  addiu       $s0, $t1, 0x20
    ctx->pc = 0x2363b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2363bc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2363bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2363c0: 0x7fa20810  sq          $v0, 0x810($sp)
    ctx->pc = 0x2363c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 2));
    // 0x2363c4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2363c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2363c8: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x2363c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
    // 0x2363cc: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2363ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2363d0: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x2363d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
    // 0x2363d4: 0xfc800608  sd          $zero, 0x608($a0)
    ctx->pc = 0x2363d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1544), GPR_U64(ctx, 0));
    // 0x2363d8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x2363d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x2363dc: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x2363dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x2363e0: 0xfc800200  sd          $zero, 0x200($a0)
    ctx->pc = 0x2363e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 512), GPR_U64(ctx, 0));
    // 0x2363e4: 0xfc800208  sd          $zero, 0x208($a0)
    ctx->pc = 0x2363e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 520), GPR_U64(ctx, 0));
    // 0x2363e8: 0xfc800400  sd          $zero, 0x400($a0)
    ctx->pc = 0x2363e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1024), GPR_U64(ctx, 0));
    // 0x2363ec: 0xfc800408  sd          $zero, 0x408($a0)
    ctx->pc = 0x2363ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1032), GPR_U64(ctx, 0));
    // 0x2363f0: 0xfc800600  sd          $zero, 0x600($a0)
    ctx->pc = 0x2363f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1536), GPR_U64(ctx, 0));
    // 0x2363f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2363f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2363f8:
    // 0x2363f8: 0x25980020  addiu       $t8, $t4, 0x20
    ctx->pc = 0x2363f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2363fc: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2363fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236400: 0xc5827  nor         $t3, $zero, $t4
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
    // 0x236404: 0x0  nop
    ctx->pc = 0x236404u;
    // NOP
label_236408:
    // 0x236408: 0x13200019  beqz        $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x236408u;
    {
        const bool branch_taken_0x236408 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x23640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236408u;
        // 0x23640c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236408) {
            ctx->pc = 0x236470u;
            goto label_236470;
        }
    }
    ctx->pc = 0x236410u;
    // 0x236410: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x236410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x236414: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236418: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x236418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23641c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23641cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236420: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x236420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236424: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236424u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236428: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x236428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x23642c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23642cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236430: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x236434: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236438: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x236438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x23643c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x23643cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236440: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x236440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x236444: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x236444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x236448: 0x31650001  andi        $a1, $t3, 0x1
    ctx->pc = 0x236448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x23644c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23644cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236450: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x236450u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x236454: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x236454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x236458: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x236458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23645c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x23645cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x236460: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x236464: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x236464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x236468: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x236468u;
    {
        const bool branch_taken_0x236468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236468u;
        // 0x23646c: 0x18a3021  addu        $a2, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236468) {
            ctx->pc = 0x2364C8u;
            goto label_2364c8;
        }
    }
    ctx->pc = 0x236470u;
label_236470:
    // 0x236470: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x236470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x236474: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236478: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x236478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23647c: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x23647cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236480: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236484: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236484u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236488: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x236488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x23648c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23648cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236490: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x236494: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x236494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x236498: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23649c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2364a0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2364a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2364a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2364a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2364a8: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x2364a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x2364ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2364acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2364b0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2364b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2364b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2364b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2364b8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2364b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2364bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2364bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2364c0: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2364c4: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x2364c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_2364c8:
    // 0x2364c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2364c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2364cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2364CCu;
    {
        const bool branch_taken_0x2364cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364CCu;
        // 0x2364d0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364cc) {
            ctx->pc = 0x23652Cu;
            goto label_23652c;
        }
    }
    ctx->pc = 0x2364D4u;
    // 0x2364d4: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x2364d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2364d8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2364d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2364dc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2364dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2364e0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2364e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2364e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2364e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2364e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2364e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2364ec: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2364ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2364f0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2364F0u;
    {
        const bool branch_taken_0x2364f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F0u;
        // 0x2364f4: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364f0) {
            ctx->pc = 0x23650Cu;
            goto label_23650c;
        }
    }
    ctx->pc = 0x2364F8u;
    // 0x2364f8: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2364fc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x236500: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x236500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236504: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x236504u;
    {
        const bool branch_taken_0x236504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236504u;
        // 0x236508: 0x306300f0  andi        $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236504) {
            ctx->pc = 0x236574u;
            goto label_236574;
        }
    }
    ctx->pc = 0x23650Cu;
label_23650c:
    // 0x23650c: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x23650cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x236510: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x236514: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x236514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236518: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x236518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23651c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x236520: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x236520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x236524: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x236524u;
    {
        const bool branch_taken_0x236524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236524u;
        // 0x236528: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236524) {
            ctx->pc = 0x23657Cu;
            goto label_23657c;
        }
    }
    ctx->pc = 0x23652Cu;
label_23652c:
    // 0x23652c: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x23652cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x236530: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x236530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x236534: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x236534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x236538: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x236538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x23653c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236540: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x236540u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x236544: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x236544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x236548: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236548u;
    {
        const bool branch_taken_0x236548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236548u;
        // 0x23654c: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236548) {
            ctx->pc = 0x236564u;
            goto label_236564;
        }
    }
    ctx->pc = 0x236550u;
    // 0x236550: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x236550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x236554: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x236554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x236558: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x236558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23655c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23655Cu;
    {
        const bool branch_taken_0x23655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23655Cu;
        // 0x236560: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23655c) {
            ctx->pc = 0x236574u;
            goto label_236574;
        }
    }
    ctx->pc = 0x236564u;
label_236564:
    // 0x236564: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x236564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x236568: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x236568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x23656c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23656cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236570: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x236570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_236574:
    // 0x236574: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x236574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x236578: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x236578u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_23657c:
    // 0x23657c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23657cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x236580: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x236580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x236584: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x236584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x236588: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x236588u;
    {
        const bool branch_taken_0x236588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236588u;
        // 0x23658c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236588) {
            ctx->pc = 0x236408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236408;
        }
    }
    ctx->pc = 0x236590u;
    // 0x236590: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x236590u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236594: 0x29820080  slti        $v0, $t4, 0x80
    ctx->pc = 0x236594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x236598: 0x5440ff97  bnel        $v0, $zero, . + 4 + (-0x69 << 2)
    ctx->pc = 0x236598u;
    {
        const bool branch_taken_0x236598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236598) {
            ctx->pc = 0x23659Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236598u;
            // 0x23659c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2363F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2363f8;
        }
    }
    ctx->pc = 0x2365A0u;
    // 0x2365a0: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x2365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2365a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2365a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a8: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2365a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2365ac: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x2365ACu;
    {
        const bool branch_taken_0x2365ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365ACu;
        // 0x2365b0: 0x2292821  addu        $a1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365ac) {
            ctx->pc = 0x2363A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2363a0;
        }
    }
    ctx->pc = 0x2365B4u;
label_2365b4:
    // 0x2365b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2365b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365b8: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x2365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2365bc: 0x0  nop
    ctx->pc = 0x2365bcu;
    // NOP
label_2365c0:
    // 0x2365c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2365c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2365c8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2365C8u;
    {
        const bool branch_taken_0x2365c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2365CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365C8u;
        // 0x2365cc: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365c8) {
            ctx->pc = 0x236614u;
            goto label_236614;
        }
    }
    ctx->pc = 0x2365D0u;
    // 0x2365d0: 0x41240  sll         $v0, $a0, 9
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2365d4: 0x1e43821  addu        $a3, $t7, $a0
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x2365d8: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x2365d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2365dc: 0x8da40018  lw          $a0, 0x18($t5)
    ctx->pc = 0x2365dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
label_2365e0:
    // 0x2365e0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x2365e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2365e4: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2365e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2365e8: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x2365e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2365ec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2365ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2365f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2365f4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2365f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2365f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2365fc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x2365fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x236600: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x236600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x236604: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236608: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x236608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23660c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x23660Cu;
    {
        const bool branch_taken_0x23660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23660c) {
            ctx->pc = 0x236610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23660Cu;
            // 0x236610: 0x8da40018  lw          $a0, 0x18($t5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2365E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2365e0;
        }
    }
    ctx->pc = 0x236614u;
label_236614:
    // 0x236614: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x236614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236618: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x236618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23661c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23661Cu;
    {
        const bool branch_taken_0x23661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23661c) {
            ctx->pc = 0x236620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23661Cu;
            // 0x236620: 0x8da2000c  lw          $v0, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2365C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2365c0;
        }
    }
    ctx->pc = 0x236624u;
    // 0x236624: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x236624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x236628: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x236628u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23662c: 0x1e2102a  slt         $v0, $t7, $v0
    ctx->pc = 0x23662cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236630: 0x5440ff4f  bnel        $v0, $zero, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x236630u;
    {
        const bool branch_taken_0x236630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236630) {
            ctx->pc = 0x236634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236630u;
            // 0x236634: 0x8da2000c  lw          $v0, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236370;
        }
    }
    ctx->pc = 0x236638u;
label_236638:
    // 0x236638: 0x7bb00870  lq          $s0, 0x870($sp)
    ctx->pc = 0x236638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x23663c: 0x7bb10860  lq          $s1, 0x860($sp)
    ctx->pc = 0x23663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x236640: 0x7bb20850  lq          $s2, 0x850($sp)
    ctx->pc = 0x236640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x236644: 0x7bb30840  lq          $s3, 0x840($sp)
    ctx->pc = 0x236644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x236648: 0x3e00008  jr          $ra
    ctx->pc = 0x236648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236648u;
        // 0x23664c: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236650u;
}

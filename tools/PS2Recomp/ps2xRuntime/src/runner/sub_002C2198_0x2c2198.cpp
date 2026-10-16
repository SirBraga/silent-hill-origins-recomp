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

// Function: sub_002C2198
// Address: 0x2c2198 - 0x2c48b0
void sub_002C2198_0x2c2198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2198_0x2c2198");
#endif

    switch (ctx->pc) {
        case 0x2c21f8u: goto label_2c21f8;
        case 0x2c2230u: goto label_2c2230;
        case 0x2c2280u: goto label_2c2280;
        case 0x2c22c0u: goto label_2c22c0;
        case 0x2c22d8u: goto label_2c22d8;
        case 0x2c22ecu: goto label_2c22ec;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23d8u: goto label_2c23d8;
        case 0x2c23ecu: goto label_2c23ec;
        case 0x2c2530u: goto label_2c2530;
        case 0x2c2720u: goto label_2c2720;
        case 0x2c2748u: goto label_2c2748;
        case 0x2c2798u: goto label_2c2798;
        case 0x2c2968u: goto label_2c2968;
        case 0x2c2bb8u: goto label_2c2bb8;
        case 0x2c2d68u: goto label_2c2d68;
        case 0x2c2d80u: goto label_2c2d80;
        case 0x2c2d84u: goto label_2c2d84;
        case 0x2c2e50u: goto label_2c2e50;
        case 0x2c2eb0u: goto label_2c2eb0;
        case 0x2c2f78u: goto label_2c2f78;
        case 0x2c3040u: goto label_2c3040;
        case 0x2c3068u: goto label_2c3068;
        case 0x2c30b0u: goto label_2c30b0;
        case 0x2c30d8u: goto label_2c30d8;
        case 0x2c3108u: goto label_2c3108;
        case 0x2c3180u: goto label_2c3180;
        case 0x2c31a8u: goto label_2c31a8;
        case 0x2c31f8u: goto label_2c31f8;
        case 0x2c3220u: goto label_2c3220;
        case 0x2c3280u: goto label_2c3280;
        case 0x2c32b0u: goto label_2c32b0;
        case 0x2c32d8u: goto label_2c32d8;
        case 0x2c3314u: goto label_2c3314;
        case 0x2c33a8u: goto label_2c33a8;
        case 0x2c3428u: goto label_2c3428;
        case 0x2c3450u: goto label_2c3450;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c36a0u: goto label_2c36a0;
        case 0x2c3730u: goto label_2c3730;
        case 0x2c37c8u: goto label_2c37c8;
        case 0x2c37f8u: goto label_2c37f8;
        case 0x2c3830u: goto label_2c3830;
        case 0x2c3838u: goto label_2c3838;
        case 0x2c38f8u: goto label_2c38f8;
        case 0x2c3928u: goto label_2c3928;
        case 0x2c3960u: goto label_2c3960;
        case 0x2c3968u: goto label_2c3968;
        case 0x2c39fcu: goto label_2c39fc;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a80u: goto label_2c3a80;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3ac0u: goto label_2c3ac0;
        case 0x2c3b90u: goto label_2c3b90;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c94u: goto label_2c3c94;
        case 0x2c3c9cu: goto label_2c3c9c;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d70u: goto label_2c3d70;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3f38u: goto label_2c3f38;
        case 0x2c3f60u: goto label_2c3f60;
        case 0x2c3fa8u: goto label_2c3fa8;
        case 0x2c3fd0u: goto label_2c3fd0;
        case 0x2c4014u: goto label_2c4014;
        case 0x2c40f0u: goto label_2c40f0;
        case 0x2c4158u: goto label_2c4158;
        case 0x2c41a4u: goto label_2c41a4;
        case 0x2c41b0u: goto label_2c41b0;
        case 0x2c41c8u: goto label_2c41c8;
        case 0x2c4238u: goto label_2c4238;
        case 0x2c4260u: goto label_2c4260;
        case 0x2c42b0u: goto label_2c42b0;
        case 0x2c42d8u: goto label_2c42d8;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4798u: goto label_2c4798;
        case 0x2c47d8u: goto label_2c47d8;
        default: break;
    }

    ctx->pc = 0x2c2198u;

    // 0x2c2198: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2c219c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2c219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c21a0: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2c21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2c21a4: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2c21a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2c21a8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2c21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2c21ac: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2c21acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2c21b0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2c21b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x2c21b4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2c21b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x2c21b8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2c21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x2c21bc: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2c21bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x2c21c0: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2c21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2c21c4: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2c21c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x2c21c8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2c21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2c21cc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2c21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c21d0: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x2c21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2c21d4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2c21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2c21d8: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x2c21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x2c21dc: 0xa7828fb8  sh          $v0, -0x7048($gp)
    ctx->pc = 0x2c21dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938552), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c21e0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2c21e4: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2c21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x2c21e8: 0x8ca500c8  lw          $a1, 0xC8($a1)
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2c21ec: 0x10a00949  beqz        $a1, . + 4 + (0x949 << 2)
    ctx->pc = 0x2C21ECu;
    {
        const bool branch_taken_0x2c21ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21ECu;
        // 0x2c21f0: 0xafa500b0  sw          $a1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21ec) {
            ctx->pc = 0x2C4714u;
            goto label_2c4714;
        }
    }
    ctx->pc = 0x2C21F4u;
    // 0x2c21f4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2c21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2c21f8:
    // 0x2c21f8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2c21f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c21fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c2200: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2c2204: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2208: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2c220c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c220cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2210: 0x14400938  bnez        $v0, . + 4 + (0x938 << 2)
    ctx->pc = 0x2C2210u;
    {
        const bool branch_taken_0x2c2210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2210u;
        // 0x2c2214: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2210) {
            ctx->pc = 0x2C46F4u;
            goto label_2c46f4;
        }
    }
    ctx->pc = 0x2C2218u;
    // 0x2c2218: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c221c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2220: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x2c2220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2c2224: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C2224u;
    {
        const bool branch_taken_0x2c2224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2224u;
        // 0x2c2228: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2224) {
            ctx->pc = 0x2C23A0u;
            goto label_2c23a0;
        }
    }
    ctx->pc = 0x2C222Cu;
    // 0x2c222c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2c222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2c2230:
    // 0x2c2230: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2c2230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c2234: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c2238: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c2238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c223c: 0xa00013  mtlo        $a1
    ctx->pc = 0x2c223cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x2c2240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2244: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2c2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c2248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c224c: 0x72652000  madd        $a0, $s3, $a1
    ctx->pc = 0x2c224cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2250: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2c2250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2254: 0x96820020  lhu         $v0, 0x20($s4)
    ctx->pc = 0x2c2254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c2258: 0x9683000c  lhu         $v1, 0xC($s4)
    ctx->pc = 0x2c2258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c225c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2c225cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2c2260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2264: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2c2264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c2268: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2c2268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2c226c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c2270: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2270u;
    {
        const bool branch_taken_0x2c2270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2270u;
        // 0x2c2274: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2270) {
            ctx->pc = 0x2C22ACu;
            goto label_2c22ac;
        }
    }
    ctx->pc = 0x2C2278u;
    // 0x2c2278: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c227c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2c227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2c2280:
    // 0x2c2280: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2284: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2284u;
    {
        const bool branch_taken_0x2c2284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2284) {
            ctx->pc = 0x2C2288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2284u;
            // 0x2c2288: 0x9682000c  lhu         $v0, 0xC($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C229Cu;
            goto label_2c229c;
        }
    }
    ctx->pc = 0x2C228Cu;
    // 0x2c228c: 0xa4c0002a  sh          $zero, 0x2A($a2)
    ctx->pc = 0x2c228cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2290: 0xa4c00026  sh          $zero, 0x26($a2)
    ctx->pc = 0x2c2290u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2294: 0xa4c00028  sh          $zero, 0x28($a2)
    ctx->pc = 0x2c2294u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2298: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_2c229c:
    // 0x2c229c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c229cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c22a0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c22a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c22a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C22A4u;
    {
        const bool branch_taken_0x2c22a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22A4u;
        // 0x2c22a8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22a4) {
            ctx->pc = 0x2C2280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2280;
        }
    }
    ctx->pc = 0x2C22ACu;
label_2c22ac:
    // 0x2c22ac: 0x96820014  lhu         $v0, 0x14($s4)
    ctx->pc = 0x2c22acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2c22b0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C22B0u;
    {
        const bool branch_taken_0x2c22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22B0u;
        // 0x2c22b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22b0) {
            ctx->pc = 0x2C238Cu;
            goto label_2c238c;
        }
    }
    ctx->pc = 0x2C22B8u;
    // 0x2c22b8: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x2c22b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c22bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c22bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c22c0:
    // 0x2c22c0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2c22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2c22c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c22c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c22c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c22cc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c22ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c22d0: 0xc0af7b0  jal         func_2BDEC0
    ctx->pc = 0x2C22D0u;
    SET_GPR_U32(ctx, 31, 0x2C22D8u);
    ctx->pc = 0x2C22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22D0u;
    // 0x2c22d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDEC0u, 0x2C22D0u, 0x2C22D8u)) {
        return;
    }
    ctx->pc = 0x2C22D8u;
label_2c22d8:
    // 0x2c22d8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c22dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c22dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c22e0: 0x29082  srl         $s2, $v0, 2
    ctx->pc = 0x2c22e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c22e4: 0xc0af7b0  jal         func_2BDEC0
    ctx->pc = 0x2C22E4u;
    SET_GPR_U32(ctx, 31, 0x2C22ECu);
    ctx->pc = 0x2C22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22E4u;
    // 0x2c22e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDEC0u, 0x2C22E4u, 0x2C22ECu)) {
        return;
    }
    ctx->pc = 0x2C22ECu;
label_2c22ec:
    // 0x2c22ec: 0x96230054  lhu         $v1, 0x54($s1)
    ctx->pc = 0x2c22ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c22f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c22f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c22f4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c22f8: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x2c22f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c22fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2300: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c2304: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2304u;
    {
        const bool branch_taken_0x2c2304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2304) {
            ctx->pc = 0x2C2308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2304u;
            // 0x2c2308: 0x9622005c  lhu         $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2338u;
            goto label_2c2338;
        }
    }
    ctx->pc = 0x2C230Cu;
    // 0x2c230c: 0x94c20026  lhu         $v0, 0x26($a2)
    ctx->pc = 0x2c230cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x2c2310: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x2c2310u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c2314: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x2c2314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c2318: 0x94c4002a  lhu         $a0, 0x2A($a2)
    ctx->pc = 0x2c2318u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c231c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c2320: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c2320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c2324: 0xa4c20026  sh          $v0, 0x26($a2)
    ctx->pc = 0x2c2324u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c2328: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c2328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c232c: 0xa4c30028  sh          $v1, 0x28($a2)
    ctx->pc = 0x2c232cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2330: 0xa4c4002a  sh          $a0, 0x2A($a2)
    ctx->pc = 0x2c2330u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c2334: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x2c2334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_2c2338:
    // 0x2c2338: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c233c: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2c233cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2344: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c2344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2348: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2348u;
    {
        const bool branch_taken_0x2c2348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2348) {
            ctx->pc = 0x2C234Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2348u;
            // 0x2c234c: 0x96820014  lhu         $v0, 0x14($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C237Cu;
            goto label_2c237c;
        }
    }
    ctx->pc = 0x2C2350u;
    // 0x2c2350: 0x94c20026  lhu         $v0, 0x26($a2)
    ctx->pc = 0x2c2350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x2c2354: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x2c2354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c2358: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x2c2358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c235c: 0x94c4002a  lhu         $a0, 0x2A($a2)
    ctx->pc = 0x2c235cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c2360: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c2364: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c2368: 0xa4c20026  sh          $v0, 0x26($a2)
    ctx->pc = 0x2c2368u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c236c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c2370: 0xa4c30028  sh          $v1, 0x28($a2)
    ctx->pc = 0x2c2370u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2374: 0xa4c4002a  sh          $a0, 0x2A($a2)
    ctx->pc = 0x2c2374u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c2378: 0x96820014  lhu         $v0, 0x14($s4)
    ctx->pc = 0x2c2378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_2c237c:
    // 0x2c237c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c237cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2380: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c2380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2384: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2C2384u;
    {
        const bool branch_taken_0x2c2384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2384u;
        // 0x2c2388: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2384) {
            ctx->pc = 0x2C22C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c22c0;
        }
    }
    ctx->pc = 0x2C238Cu;
label_2c238c:
    // 0x2c238c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2390: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c2390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2394: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c2394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2398: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2C2398u;
    {
        const bool branch_taken_0x2c2398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2398) {
            ctx->pc = 0x2C239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2398u;
            // 0x2c239c: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2230;
        }
    }
    ctx->pc = 0x2C23A0u;
label_2c23a0:
    // 0x2c23a0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2c23a4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C23A4u;
    {
        const bool branch_taken_0x2c23a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23A4u;
        // 0x2c23a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23a4) {
            ctx->pc = 0x2C2508u;
            goto label_2c2508;
        }
    }
    ctx->pc = 0x2C23ACu;
    // 0x2c23ac: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c23b0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c23b4: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2c23b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c23b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c23b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23bc: 0x0  nop
    ctx->pc = 0x2c23bcu;
    // NOP
label_2c23c0:
    // 0x2c23c0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2c23c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c23c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c23cc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c23ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c23d0: 0xc0af7b0  jal         func_2BDEC0
    ctx->pc = 0x2C23D0u;
    SET_GPR_U32(ctx, 31, 0x2C23D8u);
    ctx->pc = 0x2C23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23D0u;
    // 0x2c23d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDEC0u, 0x2C23D0u, 0x2C23D8u)) {
        return;
    }
    ctx->pc = 0x2C23D8u;
label_2c23d8:
    // 0x2c23d8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c23dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c23dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23e0: 0x29082  srl         $s2, $v0, 2
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c23e4: 0xc0af7b0  jal         func_2BDEC0
    ctx->pc = 0x2C23E4u;
    SET_GPR_U32(ctx, 31, 0x2C23ECu);
    ctx->pc = 0x2C23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23E4u;
    // 0x2c23e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDEC0u, 0x2C23E4u, 0x2C23ECu)) {
        return;
    }
    ctx->pc = 0x2C23ECu;
label_2c23ec:
    // 0x2c23ec: 0x96230054  lhu         $v1, 0x54($s1)
    ctx->pc = 0x2c23ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c23f0: 0x1077001f  beq         $v1, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C23F0u;
    {
        const bool branch_taken_0x2c23f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x2C23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23F0u;
        // 0x2c23f4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23f0) {
            ctx->pc = 0x2C2470u;
            goto label_2c2470;
        }
    }
    ctx->pc = 0x2C23F8u;
    // 0x2c23f8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x2c23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2c23fc: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2400: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C2400u;
    {
        const bool branch_taken_0x2c2400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2400) {
            ctx->pc = 0x2C2404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2400u;
            // 0x2c2404: 0x9622005c  lhu         $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2474u;
            goto label_2c2474;
        }
    }
    ctx->pc = 0x2C2408u;
    // 0x2c2408: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c2408u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c240c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2410: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2418: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c2418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c241c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2420: 0x962004  sllv        $a0, $s6, $a0
    ctx->pc = 0x2c2420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2428: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c2428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c242c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C242Cu;
    {
        const bool branch_taken_0x2c242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c242c) {
            ctx->pc = 0x2C2430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C242Cu;
            // 0x2c2430: 0x9622005c  lhu         $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2474u;
            goto label_2c2474;
        }
    }
    ctx->pc = 0x2C2434u;
    // 0x2c2434: 0x96220054  lhu         $v0, 0x54($s1)
    ctx->pc = 0x2c2434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c2438: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x2c2438u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c243c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c2440: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2c2440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2448: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c2448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c244c: 0x94c30026  lhu         $v1, 0x26($a2)
    ctx->pc = 0x2c244cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x2c2450: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x2c2450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c2454: 0x94c4002a  lhu         $a0, 0x2A($a2)
    ctx->pc = 0x2c2454u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c2458: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c2458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c245c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c2460: 0xa4c30026  sh          $v1, 0x26($a2)
    ctx->pc = 0x2c2460u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2464: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c2464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c2468: 0xa4c20028  sh          $v0, 0x28($a2)
    ctx->pc = 0x2c2468u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c246c: 0xa4c4002a  sh          $a0, 0x2A($a2)
    ctx->pc = 0x2c246cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 4));
label_2c2470:
    // 0x2c2470: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x2c2470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_2c2474:
    // 0x2c2474: 0x50570020  beql        $v0, $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C2474u;
    {
        const bool branch_taken_0x2c2474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2c2474) {
            ctx->pc = 0x2C2478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2474u;
            // 0x2c2478: 0x8fc20010  lw          $v0, 0x10($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24F8u;
            goto label_2c24f8;
        }
    }
    ctx->pc = 0x2C247Cu;
    // 0x2c247c: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x2c247cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2c2480: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2484: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C2484u;
    {
        const bool branch_taken_0x2c2484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2484) {
            ctx->pc = 0x2C2488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2484u;
            // 0x2c2488: 0x8fc20010  lw          $v0, 0x10($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24F8u;
            goto label_2c24f8;
        }
    }
    ctx->pc = 0x2C248Cu;
    // 0x2c248c: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c248cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c2490: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2494: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2494u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c249c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c249cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c24a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c24a4: 0x962004  sllv        $a0, $s6, $a0
    ctx->pc = 0x2c24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c24a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c24ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c24acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c24b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C24B0u;
    {
        const bool branch_taken_0x2c24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c24b0) {
            ctx->pc = 0x2C24B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24B0u;
            // 0x2c24b4: 0x8fc20010  lw          $v0, 0x10($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24F8u;
            goto label_2c24f8;
        }
    }
    ctx->pc = 0x2C24B8u;
    // 0x2c24b8: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x2c24b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2c24bc: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x2c24bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c24c0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c24c4: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2c24c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c24c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c24cc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c24d0: 0x94c30026  lhu         $v1, 0x26($a2)
    ctx->pc = 0x2c24d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x2c24d4: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x2c24d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c24d8: 0x94c4002a  lhu         $a0, 0x2A($a2)
    ctx->pc = 0x2c24d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c24dc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c24e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c24e4: 0xa4c30026  sh          $v1, 0x26($a2)
    ctx->pc = 0x2c24e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c24e8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c24e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c24ec: 0xa4c20028  sh          $v0, 0x28($a2)
    ctx->pc = 0x2c24ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c24f0: 0xa4c4002a  sh          $a0, 0x2A($a2)
    ctx->pc = 0x2c24f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c24f4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x2c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2c24f8:
    // 0x2c24f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c24f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c24fc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c24fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2500: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2C2500u;
    {
        const bool branch_taken_0x2c2500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2500u;
        // 0x2c2504: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2500) {
            ctx->pc = 0x2C23C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c23c0;
        }
    }
    ctx->pc = 0x2C2508u;
label_2c2508:
    // 0x2c2508: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x2c2508u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c250c: 0x1240007d  beqz        $s2, . + 4 + (0x7D << 2)
    ctx->pc = 0x2C250Cu;
    {
        const bool branch_taken_0x2c250c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C250Cu;
        // 0x2c2510: 0x8fa600b8  lw          $a2, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c250c) {
            ctx->pc = 0x2C2704u;
            goto label_2c2704;
        }
    }
    ctx->pc = 0x2C2514u;
    // 0x2c2514: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c2514u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c2518: 0x978a8fb8  lhu         $t2, -0x7048($gp)
    ctx->pc = 0x2c2518u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x2c251c: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x2c251cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2520: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2c2520u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2524: 0x3529fffc  ori         $t1, $t1, 0xFFFC
    ctx->pc = 0x2c2524u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65532);
    // 0x2c2528: 0x964200b8  lhu         $v0, 0xB8($s2)
    ctx->pc = 0x2c2528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c252c: 0x0  nop
    ctx->pc = 0x2c252cu;
    // NOP
label_2c2530:
    // 0x2c2530: 0x504c0038  beql        $v0, $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C2530u;
    {
        const bool branch_taken_0x2c2530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c2530) {
            ctx->pc = 0x2C2534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2530u;
            // 0x2c2534: 0x964200c0  lhu         $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2614u;
            goto label_2c2614;
        }
    }
    ctx->pc = 0x2C2538u;
    // 0x2c2538: 0x8e4600b4  lw          $a2, 0xB4($s2)
    ctx->pc = 0x2c2538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c253c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2540: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C2540u;
    {
        const bool branch_taken_0x2c2540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2540u;
        // 0x2c2544: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2540) {
            ctx->pc = 0x2C2610u;
            goto label_2c2610;
        }
    }
    ctx->pc = 0x2C2548u;
    // 0x2c2548: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c2548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c254c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2550: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2558: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c2558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c255c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2560: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c2560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2564: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2568: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c2568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c256c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C256Cu;
    {
        const bool branch_taken_0x2c256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C256Cu;
        // 0x2c2570: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c256c) {
            ctx->pc = 0x2C2610u;
            goto label_2c2610;
        }
    }
    ctx->pc = 0x2C2574u;
    // 0x2c2574: 0x964400b8  lhu         $a0, 0xB8($s2)
    ctx->pc = 0x2c2574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c2578: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x2c2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c257c: 0x8b2018  mult        $a0, $a0, $t3
    ctx->pc = 0x2c257cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2580: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2c2580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2584: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c2584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c2588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c258c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c2590: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c2594: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x2c2594u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c2598: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c259c: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x2c259cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c25a0: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x2c25a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c25a4: 0x94c40028  lhu         $a0, 0x28($a2)
    ctx->pc = 0x2c25a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c25a8: 0x94c2002a  lhu         $v0, 0x2A($a2)
    ctx->pc = 0x2c25a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c25ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c25acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c25b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c25b4: 0xa4c40028  sh          $a0, 0x28($a2)
    ctx->pc = 0x2c25b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c25b8: 0xa4c2002a  sh          $v0, 0x2A($a2)
    ctx->pc = 0x2c25b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c25bc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2c25bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c25c0: 0x144202b  sltu        $a0, $t2, $a0
    ctx->pc = 0x2c25c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c25c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c25c8: 0x96820020  lhu         $v0, 0x20($s4)
    ctx->pc = 0x2c25c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c25cc: 0x104180b  movn        $v1, $t0, $a0
    ctx->pc = 0x2c25ccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8));
    // 0x2c25d0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2c25d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c25d4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c25d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c25dc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2c25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2c25e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c25e4: 0x96830020  lhu         $v1, 0x20($s4)
    ctx->pc = 0x2c25e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c25e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c25ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c25f0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2c25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c25f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c25f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c25fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c2600: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2c2600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2c2604: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2c2604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2c2608: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c260c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x2c260cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_2c2610:
    // 0x2c2610: 0x964200c0  lhu         $v0, 0xC0($s2)
    ctx->pc = 0x2c2610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
label_2c2614:
    // 0x2c2614: 0x504c0038  beql        $v0, $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C2614u;
    {
        const bool branch_taken_0x2c2614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c2614) {
            ctx->pc = 0x2C2618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2614u;
            // 0x2c2618: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C26F8u;
            goto label_2c26f8;
        }
    }
    ctx->pc = 0x2C261Cu;
    // 0x2c261c: 0x8e4600bc  lw          $a2, 0xBC($s2)
    ctx->pc = 0x2c261cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2c2620: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2624: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C2624u;
    {
        const bool branch_taken_0x2c2624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2624u;
        // 0x2c2628: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2624) {
            ctx->pc = 0x2C26F4u;
            goto label_2c26f4;
        }
    }
    ctx->pc = 0x2C262Cu;
    // 0x2c262c: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c262cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c2630: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c2630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2634: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c263c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c263cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c2640: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2644: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c2644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c264c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2650: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C2650u;
    {
        const bool branch_taken_0x2c2650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2650u;
        // 0x2c2654: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2650) {
            ctx->pc = 0x2C26F4u;
            goto label_2c26f4;
        }
    }
    ctx->pc = 0x2C2658u;
    // 0x2c2658: 0x964400c0  lhu         $a0, 0xC0($s2)
    ctx->pc = 0x2c2658u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2c265c: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x2c265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c2660: 0x8b2018  mult        $a0, $a0, $t3
    ctx->pc = 0x2c2660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2664: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2c2664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2668: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c266c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2670: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c2674: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c2674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c2678: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x2c2678u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c267c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2c267cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c2680: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x2c2680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c2684: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x2c2684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c2688: 0x94c40028  lhu         $a0, 0x28($a2)
    ctx->pc = 0x2c2688u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c268c: 0x94c2002a  lhu         $v0, 0x2A($a2)
    ctx->pc = 0x2c268cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c2690: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c2694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2698: 0xa4c40028  sh          $a0, 0x28($a2)
    ctx->pc = 0x2c2698u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c269c: 0xa4c2002a  sh          $v0, 0x2A($a2)
    ctx->pc = 0x2c269cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c26a0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2c26a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c26a4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c26a8: 0x144202b  sltu        $a0, $t2, $a0
    ctx->pc = 0x2c26a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c26ac: 0x96820020  lhu         $v0, 0x20($s4)
    ctx->pc = 0x2c26acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c26b0: 0x104300b  movn        $a2, $t0, $a0
    ctx->pc = 0x2c26b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8));
    // 0x2c26b4: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2c26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c26b8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c26bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c26c0: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x2c26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x2c26c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c26c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c26cc: 0x96830020  lhu         $v1, 0x20($s4)
    ctx->pc = 0x2c26ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c26d0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c26d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c26d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c26dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c26e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c26e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c26e4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2c26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2c26e8: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2c26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2c26ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c26f0: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x2c26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_2c26f4:
    // 0x2c26f4: 0x8e5200dc  lw          $s2, 0xDC($s2)
    ctx->pc = 0x2c26f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2c26f8:
    // 0x2c26f8: 0x5640ff8d  bnel        $s2, $zero, . + 4 + (-0x73 << 2)
    ctx->pc = 0x2C26F8u;
    {
        const bool branch_taken_0x2c26f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c26f8) {
            ctx->pc = 0x2C26FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C26F8u;
            // 0x2c26fc: 0x964200b8  lhu         $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2530;
        }
    }
    ctx->pc = 0x2C2700u;
    // 0x2c2700: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2c2700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c2704:
    // 0x2c2704: 0x10c00188  beqz        $a2, . + 4 + (0x188 << 2)
    ctx->pc = 0x2C2704u;
    {
        const bool branch_taken_0x2c2704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2704u;
        // 0x2c2708: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2704) {
            ctx->pc = 0x2C2D28u;
            goto label_2c2d28;
        }
    }
    ctx->pc = 0x2C270Cu;
    // 0x2c270c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2710: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
    ctx->pc = 0x2C2710u;
    {
        const bool branch_taken_0x2c2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2710u;
        // 0x2c2714: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2710) {
            ctx->pc = 0x2C2D28u;
            goto label_2c2d28;
        }
    }
    ctx->pc = 0x2C2718u;
    // 0x2c2718: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c271c: 0x0  nop
    ctx->pc = 0x2c271cu;
    // NOP
label_2c2720:
    // 0x2c2720: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2c2720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c2724: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c2724u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c2728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c272c: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2730: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c2734: 0x10400176  beqz        $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2C2734u;
    {
        const bool branch_taken_0x2c2734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2734u;
        // 0x2c2738: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2734) {
            ctx->pc = 0x2C2D10u;
            goto label_2c2d10;
        }
    }
    ctx->pc = 0x2C273Cu;
    // 0x2c273c: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x2c273cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2740: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x2c2740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2744: 0x0  nop
    ctx->pc = 0x2c2744u;
    // NOP
label_2c2748:
    // 0x2c2748: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2c2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c274c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2750: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2754: 0x11200169  beqz        $t1, . + 4 + (0x169 << 2)
    ctx->pc = 0x2C2754u;
    {
        const bool branch_taken_0x2c2754 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2754u;
        // 0x2c2758: 0x260f0001  addiu       $t7, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2754) {
            ctx->pc = 0x2C2CFCu;
            goto label_2c2cfc;
        }
    }
    ctx->pc = 0x2C275Cu;
    // 0x2c275c: 0x95230028  lhu         $v1, 0x28($t1)
    ctx->pc = 0x2c275cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2c2760: 0x97828fb8  lhu         $v0, -0x7048($gp)
    ctx->pc = 0x2c2760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x2c2764: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c2764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c2768: 0x50400165  beql        $v0, $zero, . + 4 + (0x165 << 2)
    ctx->pc = 0x2C2768u;
    {
        const bool branch_taken_0x2c2768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2768) {
            ctx->pc = 0x2C276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2768u;
            // 0x2c276c: 0x9682000c  lhu         $v0, 0xC($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D00u;
            goto label_2c2d00;
        }
    }
    ctx->pc = 0x2C2770u;
    // 0x2c2770: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c2774: 0x12400161  beqz        $s2, . + 4 + (0x161 << 2)
    ctx->pc = 0x2C2774u;
    {
        const bool branch_taken_0x2c2774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2774u;
        // 0x2c2778: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2774) {
            ctx->pc = 0x2C2CFCu;
            goto label_2c2cfc;
        }
    }
    ctx->pc = 0x2C277Cu;
    // 0x2c277c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x2c277cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x2c2780: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2c2780u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2784: 0x358cfffc  ori         $t4, $t4, 0xFFFC
    ctx->pc = 0x2c2784u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65532);
    // 0x2c2788: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c278c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2c278cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c2790: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c2794: 0x0  nop
    ctx->pc = 0x2c2794u;
    // NOP
label_2c2798:
    // 0x2c2798: 0x50a00156  beql        $a1, $zero, . + 4 + (0x156 << 2)
    ctx->pc = 0x2C2798u;
    {
        const bool branch_taken_0x2c2798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2798) {
            ctx->pc = 0x2C279Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2798u;
            // 0x2c279c: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C27A0u;
    // 0x2c27a0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x2c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c27a4: 0x54540093  bnel        $v0, $s4, . + 4 + (0x93 << 2)
    ctx->pc = 0x2C27A4u;
    {
        const bool branch_taken_0x2c27a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c27a4) {
            ctx->pc = 0x2C27A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C27A4u;
            // 0x2c27a8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29F4u;
            goto label_2c29f4;
        }
    }
    ctx->pc = 0x2C27ACu;
    // 0x2c27ac: 0x964300b8  lhu         $v1, 0xB8($s2)
    ctx->pc = 0x2c27acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c27b0: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c27b4: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2c27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c27b8: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2c27b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c27bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c27c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c27c4: 0x5522014b  bnel        $t1, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2C27C4u;
    {
        const bool branch_taken_0x2c27c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c27c4) {
            ctx->pc = 0x2C27C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C27C4u;
            // 0x2c27c8: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C27CCu;
    // 0x2c27cc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c27d0: 0x95230028  lhu         $v1, 0x28($t1)
    ctx->pc = 0x2c27d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2c27d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c27d8: 0x9524002a  lhu         $a0, 0x2A($t1)
    ctx->pc = 0x2c27d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
    // 0x2c27dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c27e0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2c27e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2c27e4: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x2c27e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c27e8: 0x4c4024  and         $t0, $v0, $t4
    ctx->pc = 0x2c27e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2c27ec: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2c27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c27f0: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c27f4: 0xa5230028  sh          $v1, 0x28($t1)
    ctx->pc = 0x2c27f4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c27f8: 0x2a7a823  subu        $s5, $s5, $a3
    ctx->pc = 0x2c27f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c27fc: 0xa524002a  sh          $a0, 0x2A($t1)
    ctx->pc = 0x2c27fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c2800: 0x964200c0  lhu         $v0, 0xC0($s2)
    ctx->pc = 0x2c2800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2c2804: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C2804u;
    {
        const bool branch_taken_0x2c2804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2804u;
        // 0x2c2808: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2804) {
            ctx->pc = 0x2C2878u;
            goto label_2c2878;
        }
    }
    ctx->pc = 0x2C280Cu;
    // 0x2c280c: 0x8e4600bc  lw          $a2, 0xBC($s2)
    ctx->pc = 0x2c280cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2c2810: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c2810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2814: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2814u;
    {
        const bool branch_taken_0x2c2814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2814) {
            ctx->pc = 0x2C2818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2814u;
            // 0x2c2818: 0x97828fb8  lhu         $v0, -0x7048($gp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C287Cu;
            goto label_2c287c;
        }
    }
    ctx->pc = 0x2C281Cu;
    // 0x2c281c: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c281cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c2820: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c2820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2824: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2828: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c282c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c2830: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c2830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2834: 0x8e2004  sllv        $a0, $t6, $a0
    ctx->pc = 0x2c2834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2838: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c283c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2840: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2840u;
    {
        const bool branch_taken_0x2c2840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2840u;
        // 0x2c2844: 0x97828fb8  lhu         $v0, -0x7048($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2840) {
            ctx->pc = 0x2C287Cu;
            goto label_2c287c;
        }
    }
    ctx->pc = 0x2C2848u;
    // 0x2c2848: 0x964200c0  lhu         $v0, 0xC0($s2)
    ctx->pc = 0x2c2848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2c284c: 0x2a7a823  subu        $s5, $s5, $a3
    ctx->pc = 0x2c284cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c2850: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c2850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c2854: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2c2854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c285c: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2c285cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2860: 0x95430028  lhu         $v1, 0x28($t2)
    ctx->pc = 0x2c2860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x2c2864: 0x9542002a  lhu         $v0, 0x2A($t2)
    ctx->pc = 0x2c2864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2c2868: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2c2868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c286c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2c286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c2870: 0xa5430028  sh          $v1, 0x28($t2)
    ctx->pc = 0x2c2870u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2874: 0xa542002a  sh          $v0, 0x2A($t2)
    ctx->pc = 0x2c2874u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 42), (uint16_t)GPR_U32(ctx, 2));
label_2c2878:
    // 0x2c2878: 0x97828fb8  lhu         $v0, -0x7048($gp)
    ctx->pc = 0x2c2878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
label_2c287c:
    // 0x2c287c: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x2c287cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2c2880: 0x5440011b  bnel        $v0, $zero, . + 4 + (0x11B << 2)
    ctx->pc = 0x2C2880u;
    {
        const bool branch_taken_0x2c2880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2880) {
            ctx->pc = 0x2C2884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2880u;
            // 0x2c2884: 0xae4000ac  sw          $zero, 0xAC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2888u;
    // 0x2c2888: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c288c: 0x26ab0001  addiu       $t3, $s5, 0x1
    ctx->pc = 0x2c288cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c2890: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c2890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2894: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c2894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c2898: 0x14400101  bnez        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2C2898u;
    {
        const bool branch_taken_0x2c2898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2898u;
        // 0x2c289c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2898) {
            ctx->pc = 0x2C2CA0u;
            goto label_2c2ca0;
        }
    }
    ctx->pc = 0x2C28A0u;
    // 0x2c28a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c28a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c28a4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2c28a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c28a8: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2C28A8u;
    {
        const bool branch_taken_0x2c28a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A8u;
        // 0x2c28ac: 0xc6410018  lwc1        $f1, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28a8) {
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C28B0u;
    // 0x2c28b0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2c28b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c28b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c28b8: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2c28bc: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x2c28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2c28c0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2c28c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c28c4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C28C4u;
    {
        const bool branch_taken_0x2c28c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28C4u;
        // 0x2c28c8: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28c4) {
            ctx->pc = 0x2C2934u;
            goto label_2c2934;
        }
    }
    ctx->pc = 0x2C28CCu;
    // 0x2c28cc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C28CCu;
    {
        const bool branch_taken_0x2c28cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28CCu;
        // 0x2c28d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28cc) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C28D4u;
    // 0x2c28d4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C28D4u;
    {
        const bool branch_taken_0x2c28d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c28d4) {
            ctx->pc = 0x2C28D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C28D4u;
            // 0x2c28d8: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2938u;
            goto label_2c2938;
        }
    }
    ctx->pc = 0x2C28DCu;
    // 0x2c28dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c28dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c28e0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C28E0u;
    {
        const bool branch_taken_0x2c28e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c28e0) {
            ctx->pc = 0x2C28E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C28E0u;
            // 0x2c28e4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2910u;
            goto label_2c2910;
        }
    }
    ctx->pc = 0x2C28E8u;
    // 0x2c28e8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2c28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c28ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c28ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c28f0: 0x0  nop
    ctx->pc = 0x2c28f0u;
    // NOP
    // 0x2c28f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C28F4u;
    {
        const bool branch_taken_0x2c28f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28F4u;
        // 0x2c28f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28f4) {
            ctx->pc = 0x2C2904u;
            goto label_2c2904;
        }
    }
    ctx->pc = 0x2C28FCu;
    // 0x2c28fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c28fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2900: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c2900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2904:
    // 0x2c2904: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x2c2904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x2c2908: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c2908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c290c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2910:
    // 0x2c2910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2914: 0x0  nop
    ctx->pc = 0x2c2914u;
    // NOP
    // 0x2c2918: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2918u;
    {
        const bool branch_taken_0x2c2918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2918) {
            ctx->pc = 0x2C291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2918u;
            // 0x2c291c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C292Cu;
            goto label_2c292c;
        }
    }
    ctx->pc = 0x2C2920u;
    // 0x2c2920: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2920u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2924: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c2924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c292c:
    // 0x2c292c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2c292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c2930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c2930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c2934:
    // 0x2c2934: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2938:
    // 0x2c2938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c293c: 0x0  nop
    ctx->pc = 0x2c293cu;
    // NOP
    // 0x2c2940: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2940u;
    {
        const bool branch_taken_0x2c2940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2940u;
        // 0x2c2944: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2940) {
            ctx->pc = 0x2C2950u;
            goto label_2c2950;
        }
    }
    ctx->pc = 0x2C2948u;
    // 0x2c2948: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2948u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c294c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c294cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c2950:
    // 0x2c2950: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c2950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c2954: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2c2954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c2958: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2C2958u;
    {
        const bool branch_taken_0x2c2958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2958u;
        // 0x2c295c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2958) {
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C2960u;
label_2c2960:
    // 0x2c2960: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c2960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2964: 0x0  nop
    ctx->pc = 0x2c2964u;
    // NOP
label_2c2968:
    // 0x2c2968: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c296c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c296cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2970: 0x0  nop
    ctx->pc = 0x2c2970u;
    // NOP
    // 0x2c2974: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2974u;
    {
        const bool branch_taken_0x2c2974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2974) {
            ctx->pc = 0x2C2978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2974u;
            // 0x2c2978: 0xc4600028  lwc1        $f0, 0x28($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2988u;
            goto label_2c2988;
        }
    }
    ctx->pc = 0x2C297Cu;
    // 0x2c297c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c297cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2980: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c2980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2984: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2c2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2988:
    // 0x2c2988: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c298c: 0x0  nop
    ctx->pc = 0x2c298cu;
    // NOP
    // 0x2c2990: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2990u;
    {
        const bool branch_taken_0x2c2990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2990u;
        // 0x2c2994: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2990) {
            ctx->pc = 0x2C29A0u;
            goto label_2c29a0;
        }
    }
    ctx->pc = 0x2C2998u;
    // 0x2c2998: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c2998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c299c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c299cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c29a0:
    // 0x2c29a0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2c29a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c29a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c29a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c29a8: 0x0  nop
    ctx->pc = 0x2c29a8u;
    // NOP
    // 0x2c29ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29ACu;
    {
        const bool branch_taken_0x2c29ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29ACu;
        // 0x2c29b0: 0x24a20002  addiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29ac) {
            ctx->pc = 0x2C29BCu;
            goto label_2c29bc;
        }
    }
    ctx->pc = 0x2C29B4u;
    // 0x2c29b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c29b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c29b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c29bc:
    // 0x2c29bc: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x2c29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c29c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c29c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c29c4: 0x0  nop
    ctx->pc = 0x2c29c4u;
    // NOP
    // 0x2c29c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29C8u;
    {
        const bool branch_taken_0x2c29c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29C8u;
        // 0x2c29cc: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29c8) {
            ctx->pc = 0x2C29D8u;
            goto label_2c29d8;
        }
    }
    ctx->pc = 0x2C29D0u;
    // 0x2c29d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c29d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29d4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c29d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c29d8:
    // 0x2c29d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c29d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c29dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c29dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c29e0: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2c29e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c29e4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2C29E4u;
    {
        const bool branch_taken_0x2c29e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29E4u;
        // 0x2c29e8: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29e4) {
            ctx->pc = 0x2C2968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2968;
        }
    }
    ctx->pc = 0x2C29ECu;
    // 0x2c29ec: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2C29ECu;
    {
        const bool branch_taken_0x2c29ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c29ec) {
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C29F4u;
label_2c29f4:
    // 0x2c29f4: 0x545400bf  bnel        $v0, $s4, . + 4 + (0xBF << 2)
    ctx->pc = 0x2C29F4u;
    {
        const bool branch_taken_0x2c29f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c29f4) {
            ctx->pc = 0x2C29F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C29F4u;
            // 0x2c29f8: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C29FCu;
    // 0x2c29fc: 0x964300c0  lhu         $v1, 0xC0($s2)
    ctx->pc = 0x2c29fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2c2a00: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2c2a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2a04: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2c2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2a08: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2c2a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c2a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2a10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c2a14: 0x552200b7  bnel        $t1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2C2A14u;
    {
        const bool branch_taken_0x2c2a14 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2a14) {
            ctx->pc = 0x2C2A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2A14u;
            // 0x2c2a18: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C2A1Cu;
    // 0x2c2a1c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c2a20: 0x95230028  lhu         $v1, 0x28($t1)
    ctx->pc = 0x2c2a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2c2a24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c2a28: 0x9524002a  lhu         $a0, 0x2A($t1)
    ctx->pc = 0x2c2a28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
    // 0x2c2a2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c2a30: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2c2a30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2c2a34: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x2c2a34u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c2a38: 0x4c4024  and         $t0, $v0, $t4
    ctx->pc = 0x2c2a38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2c2a3c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2c2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c2a40: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x2c2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c2a44: 0xa5230028  sh          $v1, 0x28($t1)
    ctx->pc = 0x2c2a44u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2a48: 0x2a7a823  subu        $s5, $s5, $a3
    ctx->pc = 0x2c2a48u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c2a4c: 0xa524002a  sh          $a0, 0x2A($t1)
    ctx->pc = 0x2c2a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c2a50: 0x964200b8  lhu         $v0, 0xB8($s2)
    ctx->pc = 0x2c2a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c2a54: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C2A54u;
    {
        const bool branch_taken_0x2c2a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A54u;
        // 0x2c2a58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a54) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2A5Cu;
    // 0x2c2a5c: 0x8e4600b4  lw          $a2, 0xB4($s2)
    ctx->pc = 0x2c2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c2a60: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c2a64: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2A64u;
    {
        const bool branch_taken_0x2c2a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a64) {
            ctx->pc = 0x2C2A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2A64u;
            // 0x2c2a68: 0x97828fb8  lhu         $v0, -0x7048($gp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2ACCu;
            goto label_2c2acc;
        }
    }
    ctx->pc = 0x2C2A6Cu;
    // 0x2c2a6c: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c2a6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c2a70: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2a74: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2a7c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c2a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c2a80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2a84: 0x8e2004  sllv        $a0, $t6, $a0
    ctx->pc = 0x2c2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2a8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c2a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2a90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2A90u;
    {
        const bool branch_taken_0x2c2a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A90u;
        // 0x2c2a94: 0x97828fb8  lhu         $v0, -0x7048($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a90) {
            ctx->pc = 0x2C2ACCu;
            goto label_2c2acc;
        }
    }
    ctx->pc = 0x2C2A98u;
    // 0x2c2a98: 0x964200b8  lhu         $v0, 0xB8($s2)
    ctx->pc = 0x2c2a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c2a9c: 0x2a7a823  subu        $s5, $s5, $a3
    ctx->pc = 0x2c2a9cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2c2aa0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c2aa4: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2c2aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2aac: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2c2aacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2ab0: 0x95430028  lhu         $v1, 0x28($t2)
    ctx->pc = 0x2c2ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x2c2ab4: 0x9542002a  lhu         $v0, 0x2A($t2)
    ctx->pc = 0x2c2ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2c2ab8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2c2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c2abc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2c2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c2ac0: 0xa5430028  sh          $v1, 0x28($t2)
    ctx->pc = 0x2c2ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2ac4: 0xa542002a  sh          $v0, 0x2A($t2)
    ctx->pc = 0x2c2ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 42), (uint16_t)GPR_U32(ctx, 2));
label_2c2ac8:
    // 0x2c2ac8: 0x97828fb8  lhu         $v0, -0x7048($gp)
    ctx->pc = 0x2c2ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
label_2c2acc:
    // 0x2c2acc: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x2c2accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2c2ad0: 0x54400087  bnel        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x2C2AD0u;
    {
        const bool branch_taken_0x2c2ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ad0) {
            ctx->pc = 0x2C2AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2AD0u;
            // 0x2c2ad4: 0xae4000ac  sw          $zero, 0xAC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2AD8u;
    // 0x2c2ad8: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c2adc: 0x26ab0001  addiu       $t3, $s5, 0x1
    ctx->pc = 0x2c2adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c2ae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c2ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ae4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c2ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c2ae8: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2C2AE8u;
    {
        const bool branch_taken_0x2c2ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE8u;
        // 0x2c2aec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ae8) {
            ctx->pc = 0x2C2CA0u;
            goto label_2c2ca0;
        }
    }
    ctx->pc = 0x2C2AF0u;
    // 0x2c2af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2af4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2c2af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c2af8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2C2AF8u;
    {
        const bool branch_taken_0x2c2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AF8u;
        // 0x2c2afc: 0xc6410018  lwc1        $f1, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2af8) {
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C2B00u;
    // 0x2c2b00: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2c2b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b08: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x2c2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2c2b0c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x2c2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2c2b10: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2c2b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c2b14: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C2B14u;
    {
        const bool branch_taken_0x2c2b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B14u;
        // 0x2c2b18: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b14) {
            ctx->pc = 0x2C2B84u;
            goto label_2c2b84;
        }
    }
    ctx->pc = 0x2C2B1Cu;
    // 0x2c2b1c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C2B1Cu;
    {
        const bool branch_taken_0x2c2b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B1Cu;
        // 0x2c2b20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b1c) {
            ctx->pc = 0x2C2BB0u;
            goto label_2c2bb0;
        }
    }
    ctx->pc = 0x2C2B24u;
    // 0x2c2b24: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2B24u;
    {
        const bool branch_taken_0x2c2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b24) {
            ctx->pc = 0x2C2B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B24u;
            // 0x2c2b28: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B88u;
            goto label_2c2b88;
        }
    }
    ctx->pc = 0x2C2B2Cu;
    // 0x2c2b2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c2b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c2b30: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2B30u;
    {
        const bool branch_taken_0x2c2b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b30) {
            ctx->pc = 0x2C2B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B30u;
            // 0x2c2b34: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B60u;
            goto label_2c2b60;
        }
    }
    ctx->pc = 0x2C2B38u;
    // 0x2c2b38: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2c2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2b3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2b40: 0x0  nop
    ctx->pc = 0x2c2b40u;
    // NOP
    // 0x2c2b44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2B44u;
    {
        const bool branch_taken_0x2c2b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B44u;
        // 0x2c2b48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b44) {
            ctx->pc = 0x2C2B54u;
            goto label_2c2b54;
        }
    }
    ctx->pc = 0x2C2B4Cu;
    // 0x2c2b4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2b4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2b50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2b54:
    // 0x2c2b54: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x2c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x2c2b58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2b5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2b60:
    // 0x2c2b60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2b64: 0x0  nop
    ctx->pc = 0x2c2b64u;
    // NOP
    // 0x2c2b68: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B68u;
    {
        const bool branch_taken_0x2c2b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2b68) {
            ctx->pc = 0x2C2B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B68u;
            // 0x2c2b6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B7Cu;
            goto label_2c2b7c;
        }
    }
    ctx->pc = 0x2C2B70u;
    // 0x2c2b70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2b70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2b74: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c2b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c2b7c:
    // 0x2c2b7c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2c2b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c2b80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c2b84:
    // 0x2c2b84: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2b88:
    // 0x2c2b88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2b8c: 0x0  nop
    ctx->pc = 0x2c2b8cu;
    // NOP
    // 0x2c2b90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2B90u;
    {
        const bool branch_taken_0x2c2b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B90u;
        // 0x2c2b94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b90) {
            ctx->pc = 0x2C2BA0u;
            goto label_2c2ba0;
        }
    }
    ctx->pc = 0x2C2B98u;
    // 0x2c2b98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2b98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2b9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c2b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ba0:
    // 0x2c2ba0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c2ba4: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2c2ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c2ba8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C2BA8u;
    {
        const bool branch_taken_0x2c2ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BA8u;
        // 0x2c2bac: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ba8) {
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C2BB0u;
label_2c2bb0:
    // 0x2c2bb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c2bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bb4: 0x0  nop
    ctx->pc = 0x2c2bb4u;
    // NOP
label_2c2bb8:
    // 0x2c2bb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2bbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2bc0: 0x0  nop
    ctx->pc = 0x2c2bc0u;
    // NOP
    // 0x2c2bc4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2BC4u;
    {
        const bool branch_taken_0x2c2bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2bc4) {
            ctx->pc = 0x2C2BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2BC4u;
            // 0x2c2bc8: 0xc4600028  lwc1        $f0, 0x28($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2BD8u;
            goto label_2c2bd8;
        }
    }
    ctx->pc = 0x2C2BCCu;
    // 0x2c2bcc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2bccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c2bd0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c2bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bd4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2c2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2bd8:
    // 0x2c2bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2bdc: 0x0  nop
    ctx->pc = 0x2c2bdcu;
    // NOP
    // 0x2c2be0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2BE0u;
    {
        const bool branch_taken_0x2c2be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BE0u;
        // 0x2c2be4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2be0) {
            ctx->pc = 0x2C2BF0u;
            goto label_2c2bf0;
        }
    }
    ctx->pc = 0x2C2BE8u;
    // 0x2c2be8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c2be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2becu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c2bf0:
    // 0x2c2bf0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2c2bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2bf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2bf8: 0x0  nop
    ctx->pc = 0x2c2bf8u;
    // NOP
    // 0x2c2bfc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2BFCu;
    {
        const bool branch_taken_0x2c2bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BFCu;
        // 0x2c2c00: 0x24a20002  addiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bfc) {
            ctx->pc = 0x2C2C0Cu;
            goto label_2c2c0c;
        }
    }
    ctx->pc = 0x2C2C04u;
    // 0x2c2c04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c2c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c08: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2c08u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c2c0c:
    // 0x2c2c0c: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x2c2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2c14: 0x0  nop
    ctx->pc = 0x2c2c14u;
    // NOP
    // 0x2c2c18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2C18u;
    {
        const bool branch_taken_0x2c2c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C18u;
        // 0x2c2c1c: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c18) {
            ctx->pc = 0x2C2C28u;
            goto label_2c2c28;
        }
    }
    ctx->pc = 0x2C2C20u;
    // 0x2c2c20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c2c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c24: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c2c24u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c2c28:
    // 0x2c2c28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c2c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c2c2c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c2c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c2c30: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2c2c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c2c34: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2C2C34u;
    {
        const bool branch_taken_0x2c2c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C34u;
        // 0x2c2c38: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c34) {
            ctx->pc = 0x2C2BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2bb8;
        }
    }
    ctx->pc = 0x2C2C3Cu;
label_2c2c3c:
    // 0x2c2c3c: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C2C3Cu;
    {
        const bool branch_taken_0x2c2c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C3Cu;
        // 0x2c2c40: 0xf01018  mult        $v0, $a3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c3c) {
            ctx->pc = 0x2C2C9Cu;
            goto label_2c2c9c;
        }
    }
    ctx->pc = 0x2C2C44u;
    // 0x2c2c44: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2c2c48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c2c4c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2c2c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c2c50: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2c2c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c2c54: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2c2c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c2c58: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2c2c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c2c5c: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x2c2c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c2c60: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x2c2c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c2c64: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x2c2c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c2c68: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x2c2c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c2c6c: 0xb2430013  sdl         $v1, 0x13($s2)
    ctx->pc = 0x2c2c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c70: 0xb643000c  sdr         $v1, 0xC($s2)
    ctx->pc = 0x2c2c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c74: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x2c2c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c78: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x2c2c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c7c: 0xb2450023  sdl         $a1, 0x23($s2)
    ctx->pc = 0x2c2c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c80: 0xb645001c  sdr         $a1, 0x1C($s2)
    ctx->pc = 0x2c2c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c84: 0xb246002b  sdl         $a2, 0x2B($s2)
    ctx->pc = 0x2c2c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c88: 0xb6460024  sdr         $a2, 0x24($s2)
    ctx->pc = 0x2c2c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c8c: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x2c2c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c2c90: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x2c2c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c2c94: 0xb2430033  sdl         $v1, 0x33($s2)
    ctx->pc = 0x2c2c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2c98: 0xb643002c  sdr         $v1, 0x2C($s2)
    ctx->pc = 0x2c2c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c2c9c:
    // 0x2c2c9c: 0xae4e00ac  sw          $t6, 0xAC($s2)
    ctx->pc = 0x2c2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 14));
label_2c2ca0:
    // 0x2c2ca0: 0x8e4500ac  lw          $a1, 0xAC($s2)
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c2ca4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2c2ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ca8: 0x95230028  lhu         $v1, 0x28($t1)
    ctx->pc = 0x2c2ca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2c2cac: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c2cb0: 0x9524002a  lhu         $a0, 0x2A($t1)
    ctx->pc = 0x2c2cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
    // 0x2c2cb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c2cb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c2cbc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c2cc0: 0xa5230028  sh          $v1, 0x28($t1)
    ctx->pc = 0x2c2cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2cc4: 0x4c4024  and         $t0, $v0, $t4
    ctx->pc = 0x2c2cc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2c2cc8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c2ccc: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2CCCu;
    {
        const bool branch_taken_0x2c2ccc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CCCu;
        // 0x2c2cd0: 0xa524002a  sh          $a0, 0x2A($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 42), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ccc) {
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2CD4u;
    // 0x2c2cd4: 0x95430028  lhu         $v1, 0x28($t2)
    ctx->pc = 0x2c2cd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x2c2cd8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c2cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c2cdc: 0x9542002a  lhu         $v0, 0x2A($t2)
    ctx->pc = 0x2c2cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2c2ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c2ce4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c2ce8: 0xa5430028  sh          $v1, 0x28($t2)
    ctx->pc = 0x2c2ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2cec: 0xa542002a  sh          $v0, 0x2A($t2)
    ctx->pc = 0x2c2cecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 42), (uint16_t)GPR_U32(ctx, 2));
label_2c2cf0:
    // 0x2c2cf0: 0x8e5200dc  lw          $s2, 0xDC($s2)
    ctx->pc = 0x2c2cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2c2cf4:
    // 0x2c2cf4: 0x5640fea8  bnel        $s2, $zero, . + 4 + (-0x158 << 2)
    ctx->pc = 0x2C2CF4u;
    {
        const bool branch_taken_0x2c2cf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cf4) {
            ctx->pc = 0x2C2CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2CF4u;
            // 0x2c2cf8: 0x8e4500ac  lw          $a1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2798;
        }
    }
    ctx->pc = 0x2C2CFCu;
label_2c2cfc:
    // 0x2c2cfc: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_2c2d00:
    // 0x2c2d00: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x2c2d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d04: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c2d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2d08: 0x1440fe8f  bnez        $v0, . + 4 + (-0x171 << 2)
    ctx->pc = 0x2C2D08u;
    {
        const bool branch_taken_0x2c2d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D08u;
        // 0x2c2d0c: 0x2131018  mult        $v0, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d08) {
            ctx->pc = 0x2C2748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2748;
        }
    }
    ctx->pc = 0x2C2D10u;
label_2c2d10:
    // 0x2c2d10: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2d14: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c2d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d18: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c2d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2d1c: 0x5440fe80  bnel        $v0, $zero, . + 4 + (-0x180 << 2)
    ctx->pc = 0x2C2D1Cu;
    {
        const bool branch_taken_0x2c2d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d1c) {
            ctx->pc = 0x2C2D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2D1Cu;
            // 0x2c2d20: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2720;
        }
    }
    ctx->pc = 0x2C2D24u;
    // 0x2c2d24: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2c2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c2d28:
    // 0x2c2d28: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2c2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c2d2c: 0x55482b  sltu        $t1, $v0, $s5
    ctx->pc = 0x2c2d2cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c2d30: 0x1520003a  bnez        $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C2D30u;
    {
        const bool branch_taken_0x2c2d30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D30u;
        // 0x2c2d34: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d30) {
            ctx->pc = 0x2C2E1Cu;
            goto label_2c2e1c;
        }
    }
    ctx->pc = 0x2C2D38u;
    // 0x2c2d38: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2d3c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2c2d3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c2d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d44: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C2D44u;
    {
        const bool branch_taken_0x2c2d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D44u;
        // 0x2c2d48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d44) {
            ctx->pc = 0x2C2E14u;
            goto label_2c2e14;
        }
    }
    ctx->pc = 0x2C2D4Cu;
    // 0x2c2d4c: 0x8fcb0000  lw          $t3, 0x0($fp)
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c2d50: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2d54: 0x978a8fb8  lhu         $t2, -0x7048($gp)
    ctx->pc = 0x2c2d54u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x2c2d58: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2d5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c2d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d60: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c2d64: 0x0  nop
    ctx->pc = 0x2c2d64u;
    // NOP
label_2c2d68:
    // 0x2c2d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d6c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c2d70: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c2d70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2D74u;
    {
        const bool branch_taken_0x2c2d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D74u;
        // 0x2c2d78: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d74) {
            ctx->pc = 0x2C2D98u;
            goto label_2c2d98;
        }
    }
    ctx->pc = 0x2C2D7Cu;
    // 0x2c2d7c: 0x0  nop
    ctx->pc = 0x2c2d7cu;
    // NOP
label_2c2d80:
    // 0x2c2d80: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2c2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2c2d84:
    // 0x2c2d84: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c2d88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c2d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2d8c: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x2c2d8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c2d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2d94: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2c2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2c2d98:
    // 0x2c2d98: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c2d9c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c2d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2da0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2DA0u;
    {
        const bool branch_taken_0x2c2da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2da0) {
            ctx->pc = 0x2C2DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2DA0u;
            // 0x2c2da4: 0x8fc2000c  lw          $v0, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2DFCu;
            goto label_2c2dfc;
        }
    }
    ctx->pc = 0x2C2DA8u;
    // 0x2c2da8: 0x15200013  bnez        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2DA8u;
    {
        const bool branch_taken_0x2c2da8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DA8u;
        // 0x2c2dac: 0x20d1018  mult        $v0, $s0, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2da8) {
            ctx->pc = 0x2C2DF8u;
            goto label_2c2df8;
        }
    }
    ctx->pc = 0x2C2DB0u;
    // 0x2c2db0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2c2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2db4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c2db8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c2db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2dc0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c2dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2dc4: 0x94c3002a  lhu         $v1, 0x2A($a2)
    ctx->pc = 0x2c2dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x2c2dc8: 0x94c40028  lhu         $a0, 0x28($a2)
    ctx->pc = 0x2c2dc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c2dcc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c2dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c2dd0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2c2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c2dd4: 0x2d020155  sltiu       $v0, $t0, 0x155
    ctx->pc = 0x2c2dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x2c2dd8: 0x145282b  sltu        $a1, $t2, $a1
    ctx->pc = 0x2c2dd8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c2ddc: 0x10a0ffe9  beqz        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C2DDCu;
    {
        const bool branch_taken_0x2c2ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DDCu;
        // 0x2c2de0: 0x2480b  movn        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ddc) {
            ctx->pc = 0x2C2D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2d84;
        }
    }
    ctx->pc = 0x2C2DE4u;
    // 0x2c2de4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2c2de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2c2de8: 0x2dc20004  sltiu       $v0, $t6, 0x4
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c2dec: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2C2DECu;
    {
        const bool branch_taken_0x2c2dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DECu;
        // 0x2c2df0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dec) {
            ctx->pc = 0x2C2D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2d80;
        }
    }
    ctx->pc = 0x2C2DF4u;
    // 0x2c2df4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c2df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2df8:
    // 0x2c2df8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2c2dfc:
    // 0x2c2dfc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c2dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e00: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c2e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2E04u;
    {
        const bool branch_taken_0x2c2e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e04) {
            ctx->pc = 0x2C2E14u;
            goto label_2c2e14;
        }
    }
    ctx->pc = 0x2C2E0Cu;
    // 0x2c2e0c: 0x1120ffd6  beqz        $t1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2C2E0Cu;
    {
        const bool branch_taken_0x2c2e0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E0Cu;
        // 0x2c2e10: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e0c) {
            ctx->pc = 0x2C2D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2E14u;
label_2c2e14:
    // 0x2c2e14: 0x11200636  beqz        $t1, . + 4 + (0x636 << 2)
    ctx->pc = 0x2C2E14u;
    {
        const bool branch_taken_0x2c2e14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E14u;
        // 0x2c2e18: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e14) {
            ctx->pc = 0x2C46F0u;
            goto label_2c46f0;
        }
    }
    ctx->pc = 0x2C2E1Cu;
label_2c2e1c:
    // 0x2c2e1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c2e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e20: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2e24: 0x8c8600ec  lw          $a2, 0xEC($a0)
    ctx->pc = 0x2c2e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2c2e28: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2c2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2c2e2c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2c2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2c2e30: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2C2E30u;
    {
        const bool branch_taken_0x2c2e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E30u;
        // 0x2c2e34: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e30) {
            ctx->pc = 0x2C2F54u;
            goto label_2c2f54;
        }
    }
    ctx->pc = 0x2C2E38u;
    // 0x2c2e38: 0x8fce0000  lw          $t6, 0x0($fp)
    ctx->pc = 0x2c2e38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c2e3c: 0x240d004c  addiu       $t5, $zero, 0x4C
    ctx->pc = 0x2c2e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c2e40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c2e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2e44: 0x240f004c  addiu       $t7, $zero, 0x4C
    ctx->pc = 0x2c2e44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c2e48: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2c2e48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e4c: 0x0  nop
    ctx->pc = 0x2c2e4cu;
    // NOP
label_2c2e50:
    // 0x2c2e50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2c2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c2e54: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2c2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c2e58: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2c2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2c2e5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c2e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e60: 0x800013  mtlo        $a0
    ctx->pc = 0x2c2e60u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2c2e64: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c2e64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2e68: 0x726d1800  madd        $v1, $s3, $t5
    ctx->pc = 0x2c2e68u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c2e6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e70: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c2e74: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c2e74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c2e78: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x2c2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x2c2e7c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x2c2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x2c2e80: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x2c2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x2c2e84: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x2c2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x2c2e88: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2c2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2c2e8c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C2E8Cu;
    {
        const bool branch_taken_0x2c2e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E8Cu;
        // 0x2c2e90: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e8c) {
            ctx->pc = 0x2C2F28u;
            goto label_2c2f28;
        }
    }
    ctx->pc = 0x2C2E94u;
    // 0x2c2e94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2c2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c2e98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c2e98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e9c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2c2e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ea0: 0x400013  mtlo        $v0
    ctx->pc = 0x2c2ea0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c2ea4: 0x726f4800  madd        $t1, $s3, $t7
    ctx->pc = 0x2c2ea4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2c2ea8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2eac: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2c2eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2c2eb0:
    // 0x2c2eb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c2eb4: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x2c2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x2c2eb8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2c2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2c2ebc: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x2c2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x2c2ec0: 0xacd4000c  sw          $s4, 0xC($a2)
    ctx->pc = 0x2c2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 20));
    // 0x2c2ec4: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2EC4u;
    {
        const bool branch_taken_0x2c2ec4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC4u;
        // 0x2c2ec8: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec4) {
            ctx->pc = 0x2C2ED0u;
            goto label_2c2ed0;
        }
    }
    ctx->pc = 0x2C2ECCu;
    // 0x2c2ecc: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x2c2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_2c2ed0:
    // 0x2c2ed0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2ed4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c2ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ed8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c2edc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2c2edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2c2ee0: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x2c2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2c2ee4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c2ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2ee8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c2eec: 0x8d250044  lw          $a1, 0x44($t1)
    ctx->pc = 0x2c2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x2c2ef0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2ef4: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x2c2ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2c2ef8: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2c2efc: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2c2efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2c2f00: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x2c2f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2c2f04: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x2c2f04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x2c2f08: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x2c2f08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c2f0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c2f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2f14: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c2f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c2f18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2c2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c2f1c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c2f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2f20: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C2F20u;
    {
        const bool branch_taken_0x2c2f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F20u;
        // 0x2c2f24: 0xad250044  sw          $a1, 0x44($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f20) {
            ctx->pc = 0x2C2EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2eb0;
        }
    }
    ctx->pc = 0x2C2F28u;
label_2c2f28:
    // 0x2c2f28: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2c2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c2f2c: 0x400013  mtlo        $v0
    ctx->pc = 0x2c2f2cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c2f30: 0x726d1800  madd        $v1, $s3, $t5
    ctx->pc = 0x2c2f30u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c2f34: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c2f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f38: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x2c2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x2c2f3c: 0xac710040  sw          $s1, 0x40($v1)
    ctx->pc = 0x2c2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 17));
    // 0x2c2f40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c2f44: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2f48: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c2f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2f4c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2C2F4Cu;
    {
        const bool branch_taken_0x2c2f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F4Cu;
        // 0x2c2f50: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f4c) {
            ctx->pc = 0x2C2E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2e50;
        }
    }
    ctx->pc = 0x2C2F54u;
label_2c2f54:
    // 0x2c2f54: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x2c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c2f58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c2f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f5c: 0x8fd40010  lw          $s4, 0x10($fp)
    ctx->pc = 0x2c2f5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2c2f60: 0x128000bf  beqz        $s4, . + 4 + (0xBF << 2)
    ctx->pc = 0x2C2F60u;
    {
        const bool branch_taken_0x2c2f60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F60u;
        // 0x2c2f64: 0xafa300b4  sw          $v1, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f60) {
            ctx->pc = 0x2C3260u;
            goto label_2c3260;
        }
    }
    ctx->pc = 0x2C2F68u;
    // 0x2c2f68: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x2c2f68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2f6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c2f6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2f70: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2c2f74: 0x0  nop
    ctx->pc = 0x2c2f74u;
    // NOP
label_2c2f78:
    // 0x2c2f78: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2c2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c2f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2f80: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2c2f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2f84: 0x96220054  lhu         $v0, 0x54($s1)
    ctx->pc = 0x2c2f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c2f88: 0x50520091  beql        $v0, $s2, . + 4 + (0x91 << 2)
    ctx->pc = 0x2C2F88u;
    {
        const bool branch_taken_0x2c2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c2f88) {
            ctx->pc = 0x2C2F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2F88u;
            // 0x2c2f8c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C31D0u;
            goto label_2c31d0;
        }
    }
    ctx->pc = 0x2C2F90u;
    // 0x2c2f90: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2c2f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f98: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c2f9c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C2F9Cu;
    {
        const bool branch_taken_0x2c2f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F9Cu;
        // 0x2c2fa0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f9c) {
            ctx->pc = 0x2C3118u;
            goto label_2c3118;
        }
    }
    ctx->pc = 0x2C2FA4u;
    // 0x2c2fa4: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c2fa4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c2fa8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2fac: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2facu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2fb4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c2fb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c2fbc: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x2c2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c2fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2fc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c2fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2fc8: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C2FC8u;
    {
        const bool branch_taken_0x2c2fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fc8) {
            ctx->pc = 0x2C2FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FC8u;
            // 0x2c2fcc: 0x96220054  lhu         $v0, 0x54($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C311Cu;
            goto label_2c311c;
        }
    }
    ctx->pc = 0x2C2FD0u;
    // 0x2c2fd0: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x2c2fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2c2fd4: 0x50520051  beql        $v0, $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x2C2FD4u;
    {
        const bool branch_taken_0x2c2fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c2fd4) {
            ctx->pc = 0x2C2FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FD4u;
            // 0x2c2fd8: 0x96220054  lhu         $v0, 0x54($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C311Cu;
            goto label_2c311c;
        }
    }
    ctx->pc = 0x2C2FDCu;
    // 0x2c2fdc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2c2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2c2fe0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c2fe4: 0x5060004d  beql        $v1, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C2FE4u;
    {
        const bool branch_taken_0x2c2fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fe4) {
            ctx->pc = 0x2C2FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FE4u;
            // 0x2c2fe8: 0x96220054  lhu         $v0, 0x54($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C311Cu;
            goto label_2c311c;
        }
    }
    ctx->pc = 0x2C2FECu;
    // 0x2c2fec: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2c2fecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c2ff0: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2c2ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c2ff4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c2ff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2ffc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c2ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c3000: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3004: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x2c3004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c3008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c300c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c3010: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C3010u;
    {
        const bool branch_taken_0x2c3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3010u;
        // 0x2c3014: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3010) {
            ctx->pc = 0x2C3118u;
            goto label_2c3118;
        }
    }
    ctx->pc = 0x2C3018u;
    // 0x2c3018: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c3018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c301c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c301cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c3020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3028: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2c3028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c302c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2c302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c3030: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C305Cu;
            goto label_2c305c;
        }
    }
    ctx->pc = 0x2C3038u;
    // 0x2c3038: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2c3038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c303c: 0x0  nop
    ctx->pc = 0x2c303cu;
    // NOP
label_2c3040:
    // 0x2c3040: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c3040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c3044: 0x0  nop
    ctx->pc = 0x2c3044u;
    // NOP
    // 0x2c3048: 0x0  nop
    ctx->pc = 0x2c3048u;
    // NOP
    // 0x2c304c: 0x0  nop
    ctx->pc = 0x2c304cu;
    // NOP
    // 0x2c3050: 0x0  nop
    ctx->pc = 0x2c3050u;
    // NOP
    // 0x2c3054: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3054u;
    {
        const bool branch_taken_0x2c3054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3054) {
            ctx->pc = 0x2C3058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3054u;
            // 0x2c3058: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3040;
        }
    }
    ctx->pc = 0x2C305Cu;
label_2c305c:
    // 0x2c305c: 0x50e5000a  beql        $a3, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C305Cu;
    {
        const bool branch_taken_0x2c305c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c305c) {
            ctx->pc = 0x2C3060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C305Cu;
            // 0x2c3060: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3088u;
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C3064u;
    // 0x2c3064: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2c3064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2c3068:
    // 0x2c3068: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x2c3068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x2c306c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c306cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3070: 0x0  nop
    ctx->pc = 0x2c3070u;
    // NOP
    // 0x2c3074: 0x0  nop
    ctx->pc = 0x2c3074u;
    // NOP
    // 0x2c3078: 0x0  nop
    ctx->pc = 0x2c3078u;
    // NOP
    // 0x2c307c: 0x54e5fffa  bnel        $a3, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C307Cu;
    {
        const bool branch_taken_0x2c307c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c307c) {
            ctx->pc = 0x2C3080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C307Cu;
            // 0x2c3080: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3068;
        }
    }
    ctx->pc = 0x2C3084u;
    // 0x2c3084: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2c3084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2c3088:
    // 0x2c3088: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2c3088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c308c: 0x94430020  lhu         $v1, 0x20($v0)
    ctx->pc = 0x2c308cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c3090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3098: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c3098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c309c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c30a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C30A0u;
    {
        const bool branch_taken_0x2c30a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30A0u;
        // 0x2c30a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30a0) {
            ctx->pc = 0x2C30CCu;
            goto label_2c30cc;
        }
    }
    ctx->pc = 0x2C30A8u;
    // 0x2c30a8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c30ac: 0x0  nop
    ctx->pc = 0x2c30acu;
    // NOP
label_2c30b0:
    // 0x2c30b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c30b4: 0x0  nop
    ctx->pc = 0x2c30b4u;
    // NOP
    // 0x2c30b8: 0x0  nop
    ctx->pc = 0x2c30b8u;
    // NOP
    // 0x2c30bc: 0x0  nop
    ctx->pc = 0x2c30bcu;
    // NOP
    // 0x2c30c0: 0x0  nop
    ctx->pc = 0x2c30c0u;
    // NOP
    // 0x2c30c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C30C4u;
    {
        const bool branch_taken_0x2c30c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c30c4) {
            ctx->pc = 0x2C30C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30C4u;
            // 0x2c30c8: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c30b0;
        }
    }
    ctx->pc = 0x2C30CCu;
label_2c30cc:
    // 0x2c30cc: 0x5086000a  beql        $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C30CCu;
    {
        const bool branch_taken_0x2c30cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2c30cc) {
            ctx->pc = 0x2C30D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30CCu;
            // 0x2c30d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30F8u;
            goto label_2c30f8;
        }
    }
    ctx->pc = 0x2C30D4u;
    // 0x2c30d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c30d8:
    // 0x2c30d8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c30dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30e0: 0x0  nop
    ctx->pc = 0x2c30e0u;
    // NOP
    // 0x2c30e4: 0x0  nop
    ctx->pc = 0x2c30e4u;
    // NOP
    // 0x2c30e8: 0x0  nop
    ctx->pc = 0x2c30e8u;
    // NOP
    // 0x2c30ec: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C30ECu;
    {
        const bool branch_taken_0x2c30ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c30ec) {
            ctx->pc = 0x2C30F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30ECu;
            // 0x2c30f0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c30d8;
        }
    }
    ctx->pc = 0x2C30F4u;
    // 0x2c30f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c30f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c30f8:
    // 0x2c30f8: 0x10f30005  beq         $a3, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C30F8u;
    {
        const bool branch_taken_0x2c30f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30F8u;
        // 0x2c30fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30f8) {
            ctx->pc = 0x2C3110u;
            goto label_2c3110;
        }
    }
    ctx->pc = 0x2C3100u;
    // 0x2c3100: 0xc0b072e  jal         func_2C1CB8
    ctx->pc = 0x2C3100u;
    SET_GPR_U32(ctx, 31, 0x2C3108u);
    ctx->pc = 0x2C3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3100u;
    // 0x2c3104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1CB8u, 0x2C3100u, 0x2C3108u)) {
        return;
    }
    ctx->pc = 0x2C3108u;
label_2c3108:
    // 0x2c3108: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2C3108u;
    {
        const bool branch_taken_0x2c3108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3108u;
        // 0x2c310c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3108) {
            ctx->pc = 0x2C3240u;
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C3110u;
label_2c3110:
    // 0x2c3110: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C3110u;
    {
        const bool branch_taken_0x2c3110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3110u;
        // 0x2c3114: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3110) {
            ctx->pc = 0x2C3240u;
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C3118u;
label_2c3118:
    // 0x2c3118: 0x96220054  lhu         $v0, 0x54($s1)
    ctx->pc = 0x2c3118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2c311c:
    // 0x2c311c: 0x5052002c  beql        $v0, $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C311Cu;
    {
        const bool branch_taken_0x2c311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c311c) {
            ctx->pc = 0x2C3120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C311Cu;
            // 0x2c3120: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C31D0u;
            goto label_2c31d0;
        }
    }
    ctx->pc = 0x2C3124u;
    // 0x2c3124: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c3128: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C3128u;
    {
        const bool branch_taken_0x2c3128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3128) {
            ctx->pc = 0x2C312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3128u;
            // 0x2c312c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C31D0u;
            goto label_2c31d0;
        }
    }
    ctx->pc = 0x2C3130u;
    // 0x2c3130: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c3130u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3134: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c3134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3138: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c3138u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c313c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c313cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3140: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c3140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c3144: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3148: 0x952004  sllv        $a0, $s5, $a0
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c314c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3150: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c3154: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C3154u;
    {
        const bool branch_taken_0x2c3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3154u;
        // 0x2c3158: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3154) {
            ctx->pc = 0x2C31CCu;
            goto label_2c31cc;
        }
    }
    ctx->pc = 0x2C315Cu;
    // 0x2c315c: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c315cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3160: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2c3160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c3164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3168: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c316c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3170: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c3174: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3174u;
    {
        const bool branch_taken_0x2c3174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3174u;
        // 0x2c3178: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3174) {
            ctx->pc = 0x2C319Cu;
            goto label_2c319c;
        }
    }
    ctx->pc = 0x2C317Cu;
    // 0x2c317c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c317cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c3180:
    // 0x2c3180: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c3180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c3184: 0x0  nop
    ctx->pc = 0x2c3184u;
    // NOP
    // 0x2c3188: 0x0  nop
    ctx->pc = 0x2c3188u;
    // NOP
    // 0x2c318c: 0x0  nop
    ctx->pc = 0x2c318cu;
    // NOP
    // 0x2c3190: 0x0  nop
    ctx->pc = 0x2c3190u;
    // NOP
    // 0x2c3194: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3194u;
    {
        const bool branch_taken_0x2c3194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3194) {
            ctx->pc = 0x2C3198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3194u;
            // 0x2c3198: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3180;
        }
    }
    ctx->pc = 0x2C319Cu;
label_2c319c:
    // 0x2c319c: 0x10860028  beq         $a0, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C319Cu;
    {
        const bool branch_taken_0x2c319c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C319Cu;
        // 0x2c31a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c319c) {
            ctx->pc = 0x2C3240u;
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C31A4u;
    // 0x2c31a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c31a8:
    // 0x2c31a8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c31ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c31acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31b0: 0x0  nop
    ctx->pc = 0x2c31b0u;
    // NOP
    // 0x2c31b4: 0x0  nop
    ctx->pc = 0x2c31b4u;
    // NOP
    // 0x2c31b8: 0x0  nop
    ctx->pc = 0x2c31b8u;
    // NOP
    // 0x2c31bc: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C31BCu;
    {
        const bool branch_taken_0x2c31bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c31bc) {
            ctx->pc = 0x2C31C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C31BCu;
            // 0x2c31c0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C31A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c31a8;
        }
    }
    ctx->pc = 0x2C31C4u;
    // 0x2c31c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C31C4u;
    {
        const bool branch_taken_0x2c31c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31C4u;
        // 0x2c31c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31c4) {
            ctx->pc = 0x2C3240u;
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C31CCu;
label_2c31cc:
    // 0x2c31cc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2c31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2c31d0:
    // 0x2c31d0: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c31d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c31d4: 0x94430020  lhu         $v1, 0x20($v0)
    ctx->pc = 0x2c31d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c31d8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2c31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c31dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c31e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c31e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c31e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c31ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C31ECu;
    {
        const bool branch_taken_0x2c31ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31ECu;
        // 0x2c31f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31ec) {
            ctx->pc = 0x2C3214u;
            goto label_2c3214;
        }
    }
    ctx->pc = 0x2C31F4u;
    // 0x2c31f4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c31f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c31f8:
    // 0x2c31f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c31fc: 0x0  nop
    ctx->pc = 0x2c31fcu;
    // NOP
    // 0x2c3200: 0x0  nop
    ctx->pc = 0x2c3200u;
    // NOP
    // 0x2c3204: 0x0  nop
    ctx->pc = 0x2c3204u;
    // NOP
    // 0x2c3208: 0x0  nop
    ctx->pc = 0x2c3208u;
    // NOP
    // 0x2c320c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C320Cu;
    {
        const bool branch_taken_0x2c320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c320c) {
            ctx->pc = 0x2C3210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C320Cu;
            // 0x2c3210: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C31F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c31f8;
        }
    }
    ctx->pc = 0x2C3214u;
label_2c3214:
    // 0x2c3214: 0x1086000a  beq         $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3214u;
    {
        const bool branch_taken_0x2c3214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3214u;
        // 0x2c3218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3214) {
            ctx->pc = 0x2C3240u;
            goto label_2c3240;
        }
    }
    ctx->pc = 0x2C321Cu;
    // 0x2c321c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c3220:
    // 0x2c3220: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c3220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c3224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3228: 0x0  nop
    ctx->pc = 0x2c3228u;
    // NOP
    // 0x2c322c: 0x0  nop
    ctx->pc = 0x2c322cu;
    // NOP
    // 0x2c3230: 0x0  nop
    ctx->pc = 0x2c3230u;
    // NOP
    // 0x2c3234: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3234u;
    {
        const bool branch_taken_0x2c3234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c3234) {
            ctx->pc = 0x2C3238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3234u;
            // 0x2c3238: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3220;
        }
    }
    ctx->pc = 0x2C323Cu;
    // 0x2c323c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c323cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3240:
    // 0x2c3240: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2c3244: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2c3244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2c3248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c324c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2c324cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2c3250: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c3250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3254: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x2c3254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c3258: 0x5440ff47  bnel        $v0, $zero, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2C3258u;
    {
        const bool branch_taken_0x2c3258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3258) {
            ctx->pc = 0x2C325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3258u;
            // 0x2c325c: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2f78;
        }
    }
    ctx->pc = 0x2C3260u;
label_2c3260:
    // 0x2c3260: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c3264: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c3264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3268: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C3268u;
    {
        const bool branch_taken_0x2c3268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3268u;
        // 0x2c326c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3268) {
            ctx->pc = 0x2C3388u;
            goto label_2c3388;
        }
    }
    ctx->pc = 0x2C3270u;
    // 0x2c3270: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2c3270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3274: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c3274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3278: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c3278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c327c: 0x0  nop
    ctx->pc = 0x2c327cu;
    // NOP
label_2c3280:
    // 0x2c3280: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c3284: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c3284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c3288: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c328c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c328cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3290: 0x96830020  lhu         $v1, 0x20($s4)
    ctx->pc = 0x2c3290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2c3294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c329c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c32a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c32a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C32A4u;
    {
        const bool branch_taken_0x2c32a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32A4u;
        // 0x2c32a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32a4) {
            ctx->pc = 0x2C32CCu;
            goto label_2c32cc;
        }
    }
    ctx->pc = 0x2C32ACu;
    // 0x2c32ac: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c32acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c32b0:
    // 0x2c32b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c32b4: 0x0  nop
    ctx->pc = 0x2c32b4u;
    // NOP
    // 0x2c32b8: 0x0  nop
    ctx->pc = 0x2c32b8u;
    // NOP
    // 0x2c32bc: 0x0  nop
    ctx->pc = 0x2c32bcu;
    // NOP
    // 0x2c32c0: 0x0  nop
    ctx->pc = 0x2c32c0u;
    // NOP
    // 0x2c32c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C32C4u;
    {
        const bool branch_taken_0x2c32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c32c4) {
            ctx->pc = 0x2C32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C32C4u;
            // 0x2c32c8: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c32b0;
        }
    }
    ctx->pc = 0x2C32CCu;
label_2c32cc:
    // 0x2c32cc: 0x1086000a  beq         $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C32CCu;
    {
        const bool branch_taken_0x2c32cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32CCu;
        // 0x2c32d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32cc) {
            ctx->pc = 0x2C32F8u;
            goto label_2c32f8;
        }
    }
    ctx->pc = 0x2C32D4u;
    // 0x2c32d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c32d8:
    // 0x2c32d8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c32dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32e0: 0x0  nop
    ctx->pc = 0x2c32e0u;
    // NOP
    // 0x2c32e4: 0x0  nop
    ctx->pc = 0x2c32e4u;
    // NOP
    // 0x2c32e8: 0x0  nop
    ctx->pc = 0x2c32e8u;
    // NOP
    // 0x2c32ec: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C32ECu;
    {
        const bool branch_taken_0x2c32ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c32ec) {
            ctx->pc = 0x2C32F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C32ECu;
            // 0x2c32f0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c32d8;
        }
    }
    ctx->pc = 0x2C32F4u;
    // 0x2c32f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c32f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c32f8:
    // 0x2c32f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c32fc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C32FCu;
    {
        const bool branch_taken_0x2c32fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c32fc) {
            ctx->pc = 0x2C3300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C32FCu;
            // 0x2c3300: 0x8fc2000c  lw          $v0, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C3304u;
    // 0x2c3304: 0x52b0001c  beql        $s5, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C3304u;
    {
        const bool branch_taken_0x2c3304 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c3304) {
            ctx->pc = 0x2C3308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3304u;
            // 0x2c3308: 0x8fc2000c  lw          $v0, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C330Cu;
    // 0x2c330c: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C330Cu;
    SET_GPR_U32(ctx, 31, 0x2C3314u);
    ctx->pc = 0x2C3310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C330Cu;
    // 0x2c3310: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C330Cu, 0x2C3314u)) {
        return;
    }
    ctx->pc = 0x2C3314u;
label_2c3314:
    // 0x2c3314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3314u;
    {
        const bool branch_taken_0x2c3314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3314u;
        // 0x2c3318: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3314) {
            ctx->pc = 0x2C3324u;
            goto label_2c3324;
        }
    }
    ctx->pc = 0x2C331Cu;
    // 0x2c331c: 0x10000558  b           . + 4 + (0x558 << 2)
    ctx->pc = 0x2C331Cu;
    {
        const bool branch_taken_0x2c331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C331Cu;
        // 0x2c3320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c331c) {
            ctx->pc = 0x2C4880u;
            goto label_2c4880;
        }
    }
    ctx->pc = 0x2C3324u;
label_2c3324:
    // 0x2c3324: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c3328: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x2c3328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2c332c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c3330: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2c3330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c3334: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c3334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3338: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3338u;
    {
        const bool branch_taken_0x2c3338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3338) {
            ctx->pc = 0x2C333Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3338u;
            // 0x2c333c: 0xae120034  sw          $s2, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3374u;
            goto label_2c3374;
        }
    }
    ctx->pc = 0x2C3340u;
    // 0x2c3340: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2c3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c3344: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c3344u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c3348: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3348u;
    {
        const bool branch_taken_0x2c3348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3348) {
            ctx->pc = 0x2C334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3348u;
            // 0x2c334c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3350u;
            goto label_2c3350;
        }
    }
    ctx->pc = 0x2C3350u;
label_2c3350:
    // 0x2c3350: 0x1812  mflo        $v1
    ctx->pc = 0x2c3350u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2c3354: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3354u;
    {
        const bool branch_taken_0x2c3354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3354u;
        // 0x2c3358: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3354) {
            ctx->pc = 0x2C3360u;
            goto label_2c3360;
        }
    }
    ctx->pc = 0x2C335Cu;
    // 0x2c335c: 0xae160034  sw          $s6, 0x34($s0)
    ctx->pc = 0x2c335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 22));
label_2c3360:
    // 0x2c3360: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2c3360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c3364: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2c3364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c3368: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3368u;
    {
        const bool branch_taken_0x2c3368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3368) {
            ctx->pc = 0x2C336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3368u;
            // 0x2c336c: 0x8fc2000c  lw          $v0, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C3370u;
    // 0x2c3370: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x2c3370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
label_2c3374:
    // 0x2c3374: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2c3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2c3378:
    // 0x2c3378: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c3378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c337c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c337cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c3380: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2C3380u;
    {
        const bool branch_taken_0x2c3380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3380u;
        // 0x2c3384: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3380) {
            ctx->pc = 0x2C3280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3280;
        }
    }
    ctx->pc = 0x2C3388u;
label_2c3388:
    // 0x2c3388: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x2c3388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c338c: 0x124003dd  beqz        $s2, . + 4 + (0x3DD << 2)
    ctx->pc = 0x2C338Cu;
    {
        const bool branch_taken_0x2c338c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C338Cu;
        // 0x2c3390: 0x27b4005c  addiu       $s4, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c338c) {
            ctx->pc = 0x2C4304u;
            goto label_2c4304;
        }
    }
    ctx->pc = 0x2C3394u;
    // 0x2c3394: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3398: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c3398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c339c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2c339cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2c33a0: 0x964200b8  lhu         $v0, 0xB8($s2)
    ctx->pc = 0x2c33a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c33a4: 0x0  nop
    ctx->pc = 0x2c33a4u;
    // NOP
label_2c33a8:
    // 0x2c33a8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c33a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c33ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c33acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c33b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c33b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c33b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c33b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c33bc: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C33BCu;
    {
        const bool branch_taken_0x2c33bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33BCu;
        // 0x2c33c0: 0x27ae0010  addiu       $t6, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33bc) {
            ctx->pc = 0x2C3474u;
            goto label_2c3474;
        }
    }
    ctx->pc = 0x2C33C4u;
    // 0x2c33c4: 0x8e4600b4  lw          $a2, 0xB4($s2)
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c33c8: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c33cc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C33CCu;
    {
        const bool branch_taken_0x2c33cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c33cc) {
            ctx->pc = 0x2C33D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C33CCu;
            // 0x2c33d0: 0x964200c0  lhu         $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3478u;
            goto label_2c3478;
        }
    }
    ctx->pc = 0x2C33D4u;
    // 0x2c33d4: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c33d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c33d8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c33dc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c33e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c33e4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c33e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c33e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c33ec: 0x822004  sllv        $a0, $v0, $a0
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c33f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c33f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c33f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c33f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c33fc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C33FCu;
    {
        const bool branch_taken_0x2c33fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33FCu;
        // 0x2c3400: 0x8fa300ac  lw          $v1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33fc) {
            ctx->pc = 0x2C3474u;
            goto label_2c3474;
        }
    }
    ctx->pc = 0x2C3404u;
    // 0x2c3404: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c3404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c340c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3410: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3414: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c3414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c3418: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3418u;
    {
        const bool branch_taken_0x2c3418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3418u;
        // 0x2c341c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3418) {
            ctx->pc = 0x2C3444u;
            goto label_2c3444;
        }
    }
    ctx->pc = 0x2C3420u;
    // 0x2c3420: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c3420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c3424: 0x0  nop
    ctx->pc = 0x2c3424u;
    // NOP
label_2c3428:
    // 0x2c3428: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c3428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c342c: 0x0  nop
    ctx->pc = 0x2c342cu;
    // NOP
    // 0x2c3430: 0x0  nop
    ctx->pc = 0x2c3430u;
    // NOP
    // 0x2c3434: 0x0  nop
    ctx->pc = 0x2c3434u;
    // NOP
    // 0x2c3438: 0x0  nop
    ctx->pc = 0x2c3438u;
    // NOP
    // 0x2c343c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C343Cu;
    {
        const bool branch_taken_0x2c343c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c343c) {
            ctx->pc = 0x2C3440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C343Cu;
            // 0x2c3440: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3428;
        }
    }
    ctx->pc = 0x2C3444u;
label_2c3444:
    // 0x2c3444: 0x5086000a  beql        $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3444u;
    {
        const bool branch_taken_0x2c3444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2c3444) {
            ctx->pc = 0x2C3448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3444u;
            // 0x2c3448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3470u;
            goto label_2c3470;
        }
    }
    ctx->pc = 0x2C344Cu;
    // 0x2c344c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c3450:
    // 0x2c3450: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c3450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c3454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3458: 0x0  nop
    ctx->pc = 0x2c3458u;
    // NOP
    // 0x2c345c: 0x0  nop
    ctx->pc = 0x2c345cu;
    // NOP
    // 0x2c3460: 0x0  nop
    ctx->pc = 0x2c3460u;
    // NOP
    // 0x2c3464: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3464u;
    {
        const bool branch_taken_0x2c3464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c3464) {
            ctx->pc = 0x2C3468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3464u;
            // 0x2c3468: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3450;
        }
    }
    ctx->pc = 0x2C346Cu;
    // 0x2c346c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3470:
    // 0x2c3470: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2c3470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c3474:
    // 0x2c3474: 0x964200c0  lhu         $v0, 0xC0($s2)
    ctx->pc = 0x2c3474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
label_2c3478:
    // 0x2c3478: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c3478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c347c: 0x1044002e  beq         $v0, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C347Cu;
    {
        const bool branch_taken_0x2c347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C347Cu;
        // 0x2c3480: 0x107182b  sltu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c347c) {
            ctx->pc = 0x2C3538u;
            goto label_2c3538;
        }
    }
    ctx->pc = 0x2C3484u;
    // 0x2c3484: 0x8e4600bc  lw          $a2, 0xBC($s2)
    ctx->pc = 0x2c3484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2c3488: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c348c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C348Cu;
    {
        const bool branch_taken_0x2c348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c348c) {
            ctx->pc = 0x2C3490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C348Cu;
            // 0x2c3490: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C353Cu;
            goto label_2c353c;
        }
    }
    ctx->pc = 0x2C3494u;
    // 0x2c3494: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c3494u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3498: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c3498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c349c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c349cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c34a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c34a4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c34a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c34a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c34ac: 0x822004  sllv        $a0, $v0, $a0
    ctx->pc = 0x2c34acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c34b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c34b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c34b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c34bc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C34BCu;
    {
        const bool branch_taken_0x2c34bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34BCu;
        // 0x2c34c0: 0x8fa300ac  lw          $v1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34bc) {
            ctx->pc = 0x2C3534u;
            goto label_2c3534;
        }
    }
    ctx->pc = 0x2C34C4u;
    // 0x2c34c4: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c34c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c34c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c34cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c34d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c34d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c34d8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C34D8u;
    {
        const bool branch_taken_0x2c34d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34D8u;
        // 0x2c34dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34d8) {
            ctx->pc = 0x2C3504u;
            goto label_2c3504;
        }
    }
    ctx->pc = 0x2C34E0u;
    // 0x2c34e0: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2c34e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c34e4: 0x0  nop
    ctx->pc = 0x2c34e4u;
    // NOP
label_2c34e8:
    // 0x2c34e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c34ec: 0x0  nop
    ctx->pc = 0x2c34ecu;
    // NOP
    // 0x2c34f0: 0x0  nop
    ctx->pc = 0x2c34f0u;
    // NOP
    // 0x2c34f4: 0x0  nop
    ctx->pc = 0x2c34f4u;
    // NOP
    // 0x2c34f8: 0x0  nop
    ctx->pc = 0x2c34f8u;
    // NOP
    // 0x2c34fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C34FCu;
    {
        const bool branch_taken_0x2c34fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c34fc) {
            ctx->pc = 0x2C3500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C34FCu;
            // 0x2c3500: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C34E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c34e8;
        }
    }
    ctx->pc = 0x2C3504u;
label_2c3504:
    // 0x2c3504: 0x5086000a  beql        $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3504u;
    {
        const bool branch_taken_0x2c3504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2c3504) {
            ctx->pc = 0x2C3508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3504u;
            // 0x2c3508: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3530u;
            goto label_2c3530;
        }
    }
    ctx->pc = 0x2C350Cu;
    // 0x2c350c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c3510:
    // 0x2c3510: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c3510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c3514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3518: 0x0  nop
    ctx->pc = 0x2c3518u;
    // NOP
    // 0x2c351c: 0x0  nop
    ctx->pc = 0x2c351cu;
    // NOP
    // 0x2c3520: 0x0  nop
    ctx->pc = 0x2c3520u;
    // NOP
    // 0x2c3524: 0x5486fffa  bnel        $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3524u;
    {
        const bool branch_taken_0x2c3524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c3524) {
            ctx->pc = 0x2C3528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3524u;
            // 0x2c3528: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3510;
        }
    }
    ctx->pc = 0x2C352Cu;
    // 0x2c352c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c352cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3530:
    // 0x2c3530: 0x8e680034  lw          $t0, 0x34($s3)
    ctx->pc = 0x2c3530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2c3534:
    // 0x2c3534: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x2c3534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2c3538:
    // 0x2c3538: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c3538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2c353c:
    // 0x2c353c: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x2c353cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    // 0x2c3540: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c3540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c3544: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3544u;
    {
        const bool branch_taken_0x2c3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3544) {
            ctx->pc = 0x2C3548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3544u;
            // 0x2c3548: 0xae4700ac  sw          $a3, 0xAC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C354Cu;
            goto label_2c354c;
        }
    }
    ctx->pc = 0x2C354Cu;
label_2c354c:
    // 0x2c354c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3550: 0x2668000c  addiu       $t0, $s3, 0xC
    ctx->pc = 0x2c3550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2c3554: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c3558: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2c3558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c355c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3560: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2c3560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3564: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c3564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3568: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3568u;
    {
        const bool branch_taken_0x2c3568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3568u;
        // 0x2c356c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3568) {
            ctx->pc = 0x2C3580u;
            goto label_2c3580;
        }
    }
    ctx->pc = 0x2C3570u;
    // 0x2c3570: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2c3570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2c3574: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c3574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c3578: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x2c3578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2c357c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x2c357cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
label_2c3580:
    // 0x2c3580: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3580u;
    {
        const bool branch_taken_0x2c3580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3580) {
            ctx->pc = 0x2C3598u;
            goto label_2c3598;
        }
    }
    ctx->pc = 0x2C3588u;
    // 0x2c3588: 0x8d02fffc  lw          $v0, -0x4($t0)
    ctx->pc = 0x2c3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x2c358c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2c358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c3590: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x2c3590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x2c3594: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2c3594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2c3598:
    // 0x2c3598: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3598u;
    {
        const bool branch_taken_0x2c3598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3598) {
            ctx->pc = 0x2C35B0u;
            goto label_2c35b0;
        }
    }
    ctx->pc = 0x2C35A0u;
    // 0x2c35a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c35a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c35a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2c35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x2c35ac: 0xadc30004  sw          $v1, 0x4($t6)
    ctx->pc = 0x2c35acu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 3));
label_2c35b0:
    // 0x2c35b0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C35B0u;
    {
        const bool branch_taken_0x2c35b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35b0) {
            ctx->pc = 0x2C35C8u;
            goto label_2c35c8;
        }
    }
    ctx->pc = 0x2C35B8u;
    // 0x2c35b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c35bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c35c0: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x2c35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
    // 0x2c35c4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2c35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_2c35c8:
    // 0x2c35c8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C35C8u;
    {
        const bool branch_taken_0x2c35c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35c8) {
            ctx->pc = 0x2C35E0u;
            goto label_2c35e0;
        }
    }
    ctx->pc = 0x2C35D0u;
    // 0x2c35d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c35d4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c35d8: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x2c35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x2c35dc: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x2c35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
label_2c35e0:
    // 0x2c35e0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C35E0u;
    {
        const bool branch_taken_0x2c35e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35e0) {
            ctx->pc = 0x2C35F8u;
            goto label_2c35f8;
        }
    }
    ctx->pc = 0x2C35E8u;
    // 0x2c35e8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2c35ec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2c35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c35f0: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x2c35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x2c35f4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2c35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_2c35f8:
    // 0x2c35f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C35F8u;
    {
        const bool branch_taken_0x2c35f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35f8) {
            ctx->pc = 0x2C3610u;
            goto label_2c3610;
        }
    }
    ctx->pc = 0x2C3600u;
    // 0x2c3600: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c3604: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2c3604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c3608: 0xadc2000c  sw          $v0, 0xC($t6)
    ctx->pc = 0x2c3608u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 2));
    // 0x2c360c: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x2c360cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
label_2c3610:
    // 0x2c3610: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3610u;
    {
        const bool branch_taken_0x2c3610 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3610) {
            ctx->pc = 0x2C3614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3610u;
            // 0x2c3614: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C362Cu;
            goto label_2c362c;
        }
    }
    ctx->pc = 0x2C3618u;
    // 0x2c3618: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c361c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2c361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2c3620: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2c3620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x2c3624: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x2c3624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x2c3628: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x2c3628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2c362c:
    // 0x2c362c: 0x2132026  xor         $a0, $s0, $s3
    ctx->pc = 0x2c362cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 19));
    // 0x2c3630: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2c3630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2c3634: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c3634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c3638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c363c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c3640: 0x458824  and         $s1, $v0, $a1
    ctx->pc = 0x2c3640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2c3644: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2c3644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c3648: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C3648u;
    {
        const bool branch_taken_0x2c3648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3648u;
        // 0x2c364c: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3648) {
            ctx->pc = 0x2C36D4u;
            goto label_2c36d4;
        }
    }
    ctx->pc = 0x2C3650u;
    // 0x2c3650: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2c3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c3654: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3654u;
    {
        const bool branch_taken_0x2c3654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3654u;
        // 0x2c3658: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3654) {
            ctx->pc = 0x2C3670u;
            goto label_2c3670;
        }
    }
    ctx->pc = 0x2C365Cu;
    // 0x2c365c: 0x964200b8  lhu         $v0, 0xB8($s2)
    ctx->pc = 0x2c365cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2c3660: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2c3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c3664: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2c3664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c3668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c366c: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x2c366cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c3670:
    // 0x2c3670: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c3674: 0x24030154  addiu       $v1, $zero, 0x154
    ctx->pc = 0x2c3674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2c3678: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c3678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c367c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2c367cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c3680: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3680u;
    {
        const bool branch_taken_0x2c3680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3680) {
            ctx->pc = 0x2C36D4u;
            goto label_2c36d4;
        }
    }
    ctx->pc = 0x2C3688u;
    // 0x2c3688: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c3688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c368c: 0x24070154  addiu       $a3, $zero, 0x154
    ctx->pc = 0x2c368cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2c3690: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2c3690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2c3694: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c3694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c3698: 0x2132826  xor         $a1, $s0, $s3
    ctx->pc = 0x2c3698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 19));
    // 0x2c369c: 0x0  nop
    ctx->pc = 0x2c369cu;
    // NOP
label_2c36a0:
    // 0x2c36a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c36a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2c36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c36a8: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x2c36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    // 0x2c36ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c36acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c36b0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2c36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2c36b4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c36b8: 0x668824  and         $s1, $v1, $a2
    ctx->pc = 0x2c36b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c36bc: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2c36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c36c0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2c36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c36c4: 0x85880a  movz        $s1, $a0, $a1
    ctx->pc = 0x2c36c4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
    // 0x2c36c8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2c36c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c36cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C36CCu;
    {
        const bool branch_taken_0x2c36cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c36cc) {
            ctx->pc = 0x2C36D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36CCu;
            // 0x2c36d0: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c36a0;
        }
    }
    ctx->pc = 0x2C36D4u;
label_2c36d4:
    // 0x2c36d4: 0x52600022  beql        $s3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C36D4u;
    {
        const bool branch_taken_0x2c36d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36d4) {
            ctx->pc = 0x2C36D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36D4u;
            // 0x2c36d8: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3760u;
            goto label_2c3760;
        }
    }
    ctx->pc = 0x2C36DCu;
    // 0x2c36dc: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2c36e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C36E0u;
    {
        const bool branch_taken_0x2c36e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E0u;
        // 0x2c36e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36e0) {
            ctx->pc = 0x2C36FCu;
            goto label_2c36fc;
        }
    }
    ctx->pc = 0x2C36E8u;
    // 0x2c36e8: 0x964200c0  lhu         $v0, 0xC0($s2)
    ctx->pc = 0x2c36e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2c36ec: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2c36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c36f0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c36f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c36f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c36f8: 0x8c4f0004  lw          $t7, 0x4($v0)
    ctx->pc = 0x2c36f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c36fc:
    // 0x2c36fc: 0x52700018  beql        $s3, $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C36FCu;
    {
        const bool branch_taken_0x2c36fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c36fc) {
            ctx->pc = 0x2C3700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36FCu;
            // 0x2c3700: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3760u;
            goto label_2c3760;
        }
    }
    ctx->pc = 0x2C3704u;
    // 0x2c3704: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2c3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2c3708: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x2c3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2c370c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2c370cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3710: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2c3710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c3714: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3714u;
    {
        const bool branch_taken_0x2c3714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3714) {
            ctx->pc = 0x2C3718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3714u;
            // 0x2c3718: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3760u;
            goto label_2c3760;
        }
    }
    ctx->pc = 0x2C371Cu;
    // 0x2c371c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3720: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x2c3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2c3724: 0x34a5fffc  ori         $a1, $a1, 0xFFFC
    ctx->pc = 0x2c3724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65532);
    // 0x2c3728: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x2c372c: 0x0  nop
    ctx->pc = 0x2c372cu;
    // NOP
label_2c3730:
    // 0x2c3730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c3734: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x2c3734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    // 0x2c3738: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c373c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3740: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2c3744: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2c3744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2c3748: 0x658824  and         $s1, $v1, $a1
    ctx->pc = 0x2c3748u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2c374c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2c374cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c3750: 0x91202b  sltu        $a0, $a0, $s1
    ctx->pc = 0x2c3750u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c3754: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C3754u;
    {
        const bool branch_taken_0x2c3754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3754) {
            ctx->pc = 0x2C3758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3754u;
            // 0x2c3758: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3730;
        }
    }
    ctx->pc = 0x2C375Cu;
    // 0x2c375c: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x2c375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2c3760:
    // 0x2c3760: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c3760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c3764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3768: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c3768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c376c: 0x161300aa  bne         $s0, $s3, . + 4 + (0xAA << 2)
    ctx->pc = 0x2C376Cu;
    {
        const bool branch_taken_0x2c376c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C376Cu;
        // 0x2c3770: 0x2a082  srl         $s4, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c376c) {
            ctx->pc = 0x2C3A18u;
            goto label_2c3a18;
        }
    }
    ctx->pc = 0x2C3774u;
    // 0x2c3774: 0x96a30024  lhu         $v1, 0x24($s5)
    ctx->pc = 0x2c3774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2c3778: 0x95e20024  lhu         $v0, 0x24($t7)
    ctx->pc = 0x2c3778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x2c377c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c377cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3780u;
    {
        const bool branch_taken_0x2c3780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3780u;
        // 0x2c3784: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3780) {
            ctx->pc = 0x2C3790u;
            goto label_2c3790;
        }
    }
    ctx->pc = 0x2C3788u;
    // 0x2c3788: 0x1e0a82d  daddu       $s5, $t7, $zero
    ctx->pc = 0x2c3788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c378c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x2c378cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3790:
    // 0x2c3790: 0x95e70022  lhu         $a3, 0x22($t7)
    ctx->pc = 0x2c3790u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 34)));
    // 0x2c3794: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c3794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3798: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c3798u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c379c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c379cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c37a0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C37A0u;
    {
        const bool branch_taken_0x2c37a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A0u;
        // 0x2c37a4: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37a0) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C37A8u;
    // 0x2c37a8: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2c37a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c37ac: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x2c37acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c37b0: 0x1565821  addu        $t3, $t2, $s6
    ctx->pc = 0x2c37b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
    // 0x2c37b4: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x2c37b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2c37b8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c37b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37bc: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c37bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c37c4: 0x0  nop
    ctx->pc = 0x2c37c4u;
    // NOP
label_2c37c8:
    // 0x2c37c8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c37c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37cc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2c37ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c37d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c37d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37d4: 0x2e3180a  movz        $v1, $s7, $v1
    ctx->pc = 0x2c37d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23));
    // 0x2c37d8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C37D8u;
    {
        const bool branch_taken_0x2c37d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D8u;
        // 0x2c37dc: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37d8) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C37E0u;
    // 0x2c37e0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c37e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c37e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C37E4u;
    {
        const bool branch_taken_0x2c37e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37E4u;
        // 0x2c37e8: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37e4) {
            ctx->pc = 0x2C3838u;
            goto label_2c3838;
        }
    }
    ctx->pc = 0x2C37ECu;
    // 0x2c37ec: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2c37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c37f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C37F0u;
    {
        const bool branch_taken_0x2c37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F0u;
        // 0x2c37f4: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37f0) {
            ctx->pc = 0x2C3830u;
            goto label_2c3830;
        }
    }
    ctx->pc = 0x2C37F8u;
label_2c37f8:
    // 0x2c37f8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c37f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c37fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3800: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3804: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3808: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3808u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c380c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3810: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2c3810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2c3814: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2c3814u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2c3818: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c3818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c381c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2c381cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2c3820: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3824: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3824u;
    {
        const bool branch_taken_0x2c3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3824u;
        // 0x2c3828: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3824) {
            ctx->pc = 0x2C38A0u;
            goto label_2c38a0;
        }
    }
    ctx->pc = 0x2C382Cu;
    // 0x2c382c: 0x0  nop
    ctx->pc = 0x2c382cu;
    // NOP
label_2c3830:
    // 0x2c3830: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3830u;
    {
        const bool branch_taken_0x2c3830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3830u;
        // 0x2c3834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3830) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3838u;
label_2c3838:
    // 0x2c3838: 0x10f8001e  beq         $a3, $t8, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3838u;
    {
        const bool branch_taken_0x2c3838 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 24));
        ctx->pc = 0x2C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3838u;
        // 0x2c383c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3838) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3840u;
    // 0x2c3840: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c3844: 0x51e2ffec  beql        $t7, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3844u;
    {
        const bool branch_taken_0x2c3844 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3844) {
            ctx->pc = 0x2C3848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3844u;
            // 0x2c3848: 0x95e20028  lhu         $v0, 0x28($t7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C37F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c37f8;
        }
    }
    ctx->pc = 0x2C384Cu;
    // 0x2c384c: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x2c384cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3850: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3854: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x2c3854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2c3858: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3858u;
    {
        const bool branch_taken_0x2c3858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3858u;
        // 0x2c385c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3858) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3860u;
    // 0x2c3860: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3864: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3864u;
    {
        const bool branch_taken_0x2c3864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3864u;
        // 0x2c3868: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3864) {
            ctx->pc = 0x2C3838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3838;
        }
    }
    ctx->pc = 0x2C386Cu;
    // 0x2c386c: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x2c386cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3870: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x2c3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c3874: 0x11a0ffee  beqz        $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C3874u;
    {
        const bool branch_taken_0x2c3874 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3874u;
        // 0x2c3878: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3874) {
            ctx->pc = 0x2C3830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3830;
        }
    }
    ctx->pc = 0x2C387Cu;
    // 0x2c387c: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x2c387cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c3880: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3880u;
    {
        const bool branch_taken_0x2c3880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3880) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3888u;
    // 0x2c3888: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2c3888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c388c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c388cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3890: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c3894: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3898: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c389c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c389cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2c38a0:
    // 0x2c38a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c38a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c38a4:
    // 0x2c38a4: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c38a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c38a8: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2C38A8u;
    {
        const bool branch_taken_0x2c38a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c38a8) {
            ctx->pc = 0x2C38ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38A8u;
            // 0x2c38ac: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C37C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c37c8;
        }
    }
    ctx->pc = 0x2C38B0u;
label_2c38b0:
    // 0x2c38b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c38b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c38b4:
    // 0x2c38b4: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x2C38B4u;
    {
        const bool branch_taken_0x2c38b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38B4u;
        // 0x2c38b8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38b4) {
            ctx->pc = 0x2C3E0Cu;
            goto label_2c3e0c;
        }
    }
    ctx->pc = 0x2C38BCu;
    // 0x2c38bc: 0x95e20028  lhu         $v0, 0x28($t7)
    ctx->pc = 0x2c38bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x2c38c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c38c4: 0xa5e20028  sh          $v0, 0x28($t7)
    ctx->pc = 0x2c38c4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c38c8: 0x96a60022  lhu         $a2, 0x22($s5)
    ctx->pc = 0x2c38c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x2c38cc: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x2c38ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c38d0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C38D0u;
    {
        const bool branch_taken_0x2c38d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38D0u;
        // 0x2c38d4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38d0) {
            ctx->pc = 0x2C39E0u;
            goto label_2c39e0;
        }
    }
    ctx->pc = 0x2C38D8u;
    // 0x2c38d8: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c38dc: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x2c38dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c38e0: 0x1565821  addu        $t3, $t2, $s6
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
    // 0x2c38e4: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x2c38e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2c38e8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c38e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38ec: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2c38ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c38f4: 0x0  nop
    ctx->pc = 0x2c38f4u;
    // NOP
label_2c38f8:
    // 0x2c38f8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c38f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38fc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2c38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c3900: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c3900u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3904: 0x2e3180a  movz        $v1, $s7, $v1
    ctx->pc = 0x2c3904u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23));
    // 0x2c3908: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3908u;
    {
        const bool branch_taken_0x2c3908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3908u;
        // 0x2c390c: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3908) {
            ctx->pc = 0x2C39D4u;
            goto label_2c39d4;
        }
    }
    ctx->pc = 0x2C3910u;
    // 0x2c3910: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3914: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3914u;
    {
        const bool branch_taken_0x2c3914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3914u;
        // 0x2c3918: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3914) {
            ctx->pc = 0x2C3968u;
            goto label_2c3968;
        }
    }
    ctx->pc = 0x2C391Cu;
    // 0x2c391c: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3920: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3920u;
    {
        const bool branch_taken_0x2c3920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3920u;
        // 0x2c3924: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3920) {
            ctx->pc = 0x2C3960u;
            goto label_2c3960;
        }
    }
    ctx->pc = 0x2C3928u;
label_2c3928:
    // 0x2c3928: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c392c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3930: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3934: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3938: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3938u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c393c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3940: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2c3940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2c3944: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2c3944u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2c3948: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c394c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2c394cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2c3950: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3954: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3954u;
    {
        const bool branch_taken_0x2c3954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3954u;
        // 0x2c3958: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3954) {
            ctx->pc = 0x2C39D0u;
            goto label_2c39d0;
        }
    }
    ctx->pc = 0x2C395Cu;
    // 0x2c395c: 0x0  nop
    ctx->pc = 0x2c395cu;
    // NOP
label_2c3960:
    // 0x2c3960: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3960u;
    {
        const bool branch_taken_0x2c3960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3960u;
        // 0x2c3964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3960) {
            ctx->pc = 0x2C39E4u;
            goto label_2c39e4;
        }
    }
    ctx->pc = 0x2C3968u;
label_2c3968:
    // 0x2c3968: 0x10d8001e  beq         $a2, $t8, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3968u;
    {
        const bool branch_taken_0x2c3968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 24));
        ctx->pc = 0x2C396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3968u;
        // 0x2c396c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3968) {
            ctx->pc = 0x2C39E4u;
            goto label_2c39e4;
        }
    }
    ctx->pc = 0x2C3970u;
    // 0x2c3970: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c3974: 0x52a2ffec  beql        $s5, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3974u;
    {
        const bool branch_taken_0x2c3974 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3974) {
            ctx->pc = 0x2C3978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3974u;
            // 0x2c3978: 0x96a20028  lhu         $v0, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3928;
        }
    }
    ctx->pc = 0x2C397Cu;
    // 0x2c397c: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x2c397cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3980: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3984: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x2c3984u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2c3988: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3988u;
    {
        const bool branch_taken_0x2c3988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3988u;
        // 0x2c398c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3988) {
            ctx->pc = 0x2C39D4u;
            goto label_2c39d4;
        }
    }
    ctx->pc = 0x2C3990u;
    // 0x2c3990: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3994: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3994u;
    {
        const bool branch_taken_0x2c3994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3994u;
        // 0x2c3998: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3994) {
            ctx->pc = 0x2C3968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3968;
        }
    }
    ctx->pc = 0x2C399Cu;
    // 0x2c399c: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x2c399cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c39a0: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x2c39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c39a4: 0x11a0ffee  beqz        $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C39A4u;
    {
        const bool branch_taken_0x2c39a4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39A4u;
        // 0x2c39a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39a4) {
            ctx->pc = 0x2C3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3960;
        }
    }
    ctx->pc = 0x2C39ACu;
    // 0x2c39ac: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x2c39acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c39b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C39B0u;
    {
        const bool branch_taken_0x2c39b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B0u;
        // 0x2c39b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39b0) {
            ctx->pc = 0x2C39E4u;
            goto label_2c39e4;
        }
    }
    ctx->pc = 0x2C39B8u;
    // 0x2c39b8: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2c39b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39bc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c39bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c39c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c39c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c39c4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c39c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c39c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c39c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c39cc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c39ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2c39d0:
    // 0x2c39d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c39d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c39d4:
    // 0x2c39d4: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x2c39d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c39d8: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2C39D8u;
    {
        const bool branch_taken_0x2c39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c39d8) {
            ctx->pc = 0x2C39DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C39D8u;
            // 0x2c39dc: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c38f8;
        }
    }
    ctx->pc = 0x2C39E0u;
label_2c39e0:
    // 0x2c39e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c39e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c39e4:
    // 0x2c39e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C39E4u;
    {
        const bool branch_taken_0x2c39e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39E4u;
        // 0x2c39e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39e4) {
            ctx->pc = 0x2C3A04u;
            goto label_2c3a04;
        }
    }
    ctx->pc = 0x2C39ECu;
    // 0x2c39ec: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x2c39ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2c39f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c39f4: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C39F4u;
    SET_GPR_U32(ctx, 31, 0x2C39FCu);
    ctx->pc = 0x2C39F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39F4u;
    // 0x2c39f8: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C39F4u, 0x2C39FCu)) {
        return;
    }
    ctx->pc = 0x2C39FCu;
label_2c39fc:
    // 0x2c39fc: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2C39FCu;
    {
        const bool branch_taken_0x2c39fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39FCu;
        // 0x2c3a00: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39fc) {
            ctx->pc = 0x2C3E14u;
            goto label_2c3e14;
        }
    }
    ctx->pc = 0x2C3A04u;
label_2c3a04:
    // 0x2c3a04: 0x95e20028  lhu         $v0, 0x28($t7)
    ctx->pc = 0x2c3a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x2c3a08: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2c3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x2c3a0c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2c3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c3a10: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2C3A10u;
    {
        const bool branch_taken_0x2c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A10u;
        // 0x2c3a14: 0xa5e20028  sh          $v0, 0x28($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a10) {
            ctx->pc = 0x2C3E10u;
            goto label_2c3e10;
        }
    }
    ctx->pc = 0x2C3A18u;
label_2c3a18:
    // 0x2c3a18: 0x120000ab  beqz        $s0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2C3A18u;
    {
        const bool branch_taken_0x2c3a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A18u;
        // 0x2c3a1c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a18) {
            ctx->pc = 0x2C3CC8u;
            goto label_2c3cc8;
        }
    }
    ctx->pc = 0x2C3A20u;
    // 0x2c3a20: 0x96a70022  lhu         $a3, 0x22($s5)
    ctx->pc = 0x2c3a20u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x2c3a24: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c3a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a28: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3a2c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C3A2Cu;
    {
        const bool branch_taken_0x2c3a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A2Cu;
        // 0x2c3a30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a2c) {
            ctx->pc = 0x2C3B38u;
            goto label_2c3b38;
        }
    }
    ctx->pc = 0x2C3A34u;
    // 0x2c3a34: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c3a38: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2c3a38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3a3c: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x2c3a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2c3a40: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2c3a44: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c3a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a48: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c3a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c3a50:
    // 0x2c3a50: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a54: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2c3a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c3a58: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c3a58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a5c: 0x2c3180a  movz        $v1, $s6, $v1
    ctx->pc = 0x2c3a5cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22));
    // 0x2c3a60: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3A60u;
    {
        const bool branch_taken_0x2c3a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A60u;
        // 0x2c3a64: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a60) {
            ctx->pc = 0x2C3B2Cu;
            goto label_2c3b2c;
        }
    }
    ctx->pc = 0x2C3A68u;
    // 0x2c3a68: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3a6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3A6Cu;
    {
        const bool branch_taken_0x2c3a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A6Cu;
        // 0x2c3a70: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a6c) {
            ctx->pc = 0x2C3AC0u;
            goto label_2c3ac0;
        }
    }
    ctx->pc = 0x2C3A74u;
    // 0x2c3a74: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2c3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3a78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3A78u;
    {
        const bool branch_taken_0x2c3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A78u;
        // 0x2c3a7c: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a78) {
            ctx->pc = 0x2C3AB8u;
            goto label_2c3ab8;
        }
    }
    ctx->pc = 0x2C3A80u;
label_2c3a80:
    // 0x2c3a80: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3a84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3a88: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3a88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3a8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a90: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c3a94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3a98: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2c3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2c3a9c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2c3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2c3aa0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c3aa4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2c3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2c3aa8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3aac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3AACu;
    {
        const bool branch_taken_0x2c3aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AACu;
        // 0x2c3ab0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3aac) {
            ctx->pc = 0x2C3B28u;
            goto label_2c3b28;
        }
    }
    ctx->pc = 0x2C3AB4u;
    // 0x2c3ab4: 0x0  nop
    ctx->pc = 0x2c3ab4u;
    // NOP
label_2c3ab8:
    // 0x2c3ab8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3AB8u;
    {
        const bool branch_taken_0x2c3ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AB8u;
        // 0x2c3abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ab8) {
            ctx->pc = 0x2C3B3Cu;
            goto label_2c3b3c;
        }
    }
    ctx->pc = 0x2C3AC0u;
label_2c3ac0:
    // 0x2c3ac0: 0x10f7001e  beq         $a3, $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3AC0u;
    {
        const bool branch_taken_0x2c3ac0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        ctx->pc = 0x2C3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AC0u;
        // 0x2c3ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ac0) {
            ctx->pc = 0x2C3B3Cu;
            goto label_2c3b3c;
        }
    }
    ctx->pc = 0x2C3AC8u;
    // 0x2c3ac8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c3acc: 0x52a2ffec  beql        $s5, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3ACCu;
    {
        const bool branch_taken_0x2c3acc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3acc) {
            ctx->pc = 0x2C3AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3ACCu;
            // 0x2c3ad0: 0x96a20028  lhu         $v0, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3a80;
        }
    }
    ctx->pc = 0x2C3AD4u;
    // 0x2c3ad4: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x2c3ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3ad8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3adc: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x2c3adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2c3ae0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3AE0u;
    {
        const bool branch_taken_0x2c3ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AE0u;
        // 0x2c3ae4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ae0) {
            ctx->pc = 0x2C3B2Cu;
            goto label_2c3b2c;
        }
    }
    ctx->pc = 0x2C3AE8u;
    // 0x2c3ae8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3aec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3AECu;
    {
        const bool branch_taken_0x2c3aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AECu;
        // 0x2c3af0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3aec) {
            ctx->pc = 0x2C3AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3ac0;
        }
    }
    ctx->pc = 0x2C3AF4u;
    // 0x2c3af4: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x2c3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3af8: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x2c3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c3afc: 0x11a0ffee  beqz        $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C3AFCu;
    {
        const bool branch_taken_0x2c3afc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AFCu;
        // 0x2c3b00: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3afc) {
            ctx->pc = 0x2C3AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3ab8;
        }
    }
    ctx->pc = 0x2C3B04u;
    // 0x2c3b04: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x2c3b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c3b08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3B08u;
    {
        const bool branch_taken_0x2c3b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B08u;
        // 0x2c3b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b08) {
            ctx->pc = 0x2C3B3Cu;
            goto label_2c3b3c;
        }
    }
    ctx->pc = 0x2C3B10u;
    // 0x2c3b10: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2c3b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b14: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3b14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3b18: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c3b1c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3b20: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3b24: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2c3b28:
    // 0x2c3b28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c3b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c3b2c:
    // 0x2c3b2c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3b30: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2C3B30u;
    {
        const bool branch_taken_0x2c3b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b30) {
            ctx->pc = 0x2C3B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B30u;
            // 0x2c3b34: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3a50;
        }
    }
    ctx->pc = 0x2C3B38u;
label_2c3b38:
    // 0x2c3b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b3c:
    // 0x2c3b3c: 0x504000b4  beql        $v0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2C3B3Cu;
    {
        const bool branch_taken_0x2c3b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b3c) {
            ctx->pc = 0x2C3B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B3Cu;
            // 0x2c3b40: 0xae4000ac  sw          $zero, 0xAC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E10u;
            goto label_2c3e10;
        }
    }
    ctx->pc = 0x2C3B44u;
    // 0x2c3b44: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x2c3b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2c3b48: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c3b4c: 0x1260005a  beqz        $s3, . + 4 + (0x5A << 2)
    ctx->pc = 0x2C3B4Cu;
    {
        const bool branch_taken_0x2c3b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B4Cu;
        // 0x2c3b50: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b4c) {
            ctx->pc = 0x2C3CB8u;
            goto label_2c3cb8;
        }
    }
    ctx->pc = 0x2C3B54u;
    // 0x2c3b54: 0x95e70022  lhu         $a3, 0x22($t7)
    ctx->pc = 0x2c3b54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 34)));
    // 0x2c3b58: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c3b5c: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x2c3b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3b60: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b64: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3b68: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C3B68u;
    {
        const bool branch_taken_0x2c3b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B68u;
        // 0x2c3b6c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b68) {
            ctx->pc = 0x2C3C78u;
            goto label_2c3c78;
        }
    }
    ctx->pc = 0x2C3B70u;
    // 0x2c3b70: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2c3b70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c3b74: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2c3b74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3b78: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x2c3b78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2c3b7c: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x2c3b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2c3b80: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c3b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b84: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c3b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c3b8c: 0x0  nop
    ctx->pc = 0x2c3b8cu;
    // NOP
label_2c3b90:
    // 0x2c3b90: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c3b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b94: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2c3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c3b98: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b9c: 0x2c3180a  movz        $v1, $s6, $v1
    ctx->pc = 0x2c3b9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22));
    // 0x2c3ba0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3BA0u;
    {
        const bool branch_taken_0x2c3ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BA0u;
        // 0x2c3ba4: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ba0) {
            ctx->pc = 0x2C3C6Cu;
            goto label_2c3c6c;
        }
    }
    ctx->pc = 0x2C3BA8u;
    // 0x2c3ba8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3bac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3BACu;
    {
        const bool branch_taken_0x2c3bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BACu;
        // 0x2c3bb0: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bac) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3BB4u;
    // 0x2c3bb4: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2c3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3bb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3BB8u;
    {
        const bool branch_taken_0x2c3bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BB8u;
        // 0x2c3bbc: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bb8) {
            ctx->pc = 0x2C3BF8u;
            goto label_2c3bf8;
        }
    }
    ctx->pc = 0x2C3BC0u;
label_2c3bc0:
    // 0x2c3bc0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3bc4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3bc8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bd0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c3bd4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3bd8: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2c3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2c3bdc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2c3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2c3be0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c3be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c3be4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2c3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2c3be8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3bec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3BECu;
    {
        const bool branch_taken_0x2c3bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BECu;
        // 0x2c3bf0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bec) {
            ctx->pc = 0x2C3C68u;
            goto label_2c3c68;
        }
    }
    ctx->pc = 0x2C3BF4u;
    // 0x2c3bf4: 0x0  nop
    ctx->pc = 0x2c3bf4u;
    // NOP
label_2c3bf8:
    // 0x2c3bf8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3BF8u;
    {
        const bool branch_taken_0x2c3bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF8u;
        // 0x2c3bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bf8) {
            ctx->pc = 0x2C3C7Cu;
            goto label_2c3c7c;
        }
    }
    ctx->pc = 0x2C3C00u;
label_2c3c00:
    // 0x2c3c00: 0x10f7001e  beq         $a3, $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3C00u;
    {
        const bool branch_taken_0x2c3c00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        ctx->pc = 0x2C3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C00u;
        // 0x2c3c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c00) {
            ctx->pc = 0x2C3C7Cu;
            goto label_2c3c7c;
        }
    }
    ctx->pc = 0x2C3C08u;
    // 0x2c3c08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c3c0c: 0x51e2ffec  beql        $t7, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3C0Cu;
    {
        const bool branch_taken_0x2c3c0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3c0c) {
            ctx->pc = 0x2C3C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C0Cu;
            // 0x2c3c10: 0x95e20028  lhu         $v0, 0x28($t7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3bc0;
        }
    }
    ctx->pc = 0x2C3C14u;
    // 0x2c3c14: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x2c3c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3c18: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3c1c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x2c3c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2c3c20: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3C20u;
    {
        const bool branch_taken_0x2c3c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C20u;
        // 0x2c3c24: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c20) {
            ctx->pc = 0x2C3C6Cu;
            goto label_2c3c6c;
        }
    }
    ctx->pc = 0x2C3C28u;
    // 0x2c3c28: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3c2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3C2Cu;
    {
        const bool branch_taken_0x2c3c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C2Cu;
        // 0x2c3c30: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c2c) {
            ctx->pc = 0x2C3C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3C34u;
    // 0x2c3c34: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x2c3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3c38: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x2c3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c3c3c: 0x11a0ffee  beqz        $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C3C3Cu;
    {
        const bool branch_taken_0x2c3c3c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C3Cu;
        // 0x2c3c40: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c3c) {
            ctx->pc = 0x2C3BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3bf8;
        }
    }
    ctx->pc = 0x2C3C44u;
    // 0x2c3c44: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x2c3c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c3c48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3C48u;
    {
        const bool branch_taken_0x2c3c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C48u;
        // 0x2c3c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c48) {
            ctx->pc = 0x2C3C7Cu;
            goto label_2c3c7c;
        }
    }
    ctx->pc = 0x2C3C50u;
    // 0x2c3c50: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2c3c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c54: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3c54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3c58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c3c5c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3c60: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3c64: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3c64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2c3c68:
    // 0x2c3c68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c3c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c3c6c:
    // 0x2c3c6c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3c70: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2C3C70u;
    {
        const bool branch_taken_0x2c3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c70) {
            ctx->pc = 0x2C3C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C70u;
            // 0x2c3c74: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b90;
        }
    }
    ctx->pc = 0x2C3C78u;
label_2c3c78:
    // 0x2c3c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3c7c:
    // 0x2c3c7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3C7Cu;
    {
        const bool branch_taken_0x2c3c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C7Cu;
        // 0x2c3c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c7c) {
            ctx->pc = 0x2C3CA4u;
            goto label_2c3ca4;
        }
    }
    ctx->pc = 0x2C3C84u;
    // 0x2c3c84: 0x95e20028  lhu         $v0, 0x28($t7)
    ctx->pc = 0x2c3c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x2c3c88: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c3c8c: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C3C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C94u);
    ctx->pc = 0x2C3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C8Cu;
    // 0x2c3c90: 0xa5e20028  sh          $v0, 0x28($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C3C8Cu, 0x2C3C94u)) {
        return;
    }
    ctx->pc = 0x2C3C94u;
label_2c3c94:
    // 0x2c3c94: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C3C94u;
    SET_GPR_U32(ctx, 31, 0x2C3C9Cu);
    ctx->pc = 0x2C3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C94u;
    // 0x2c3c98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C3C94u, 0x2C3C9Cu)) {
        return;
    }
    ctx->pc = 0x2C3C9Cu;
label_2c3c9c:
    // 0x2c3c9c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2C3C9Cu;
    {
        const bool branch_taken_0x2c3c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C9Cu;
        // 0x2c3ca0: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c9c) {
            ctx->pc = 0x2C3E14u;
            goto label_2c3e14;
        }
    }
    ctx->pc = 0x2C3CA4u;
label_2c3ca4:
    // 0x2c3ca4: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x2c3ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2c3ca8: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2c3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x2c3cac: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2c3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c3cb0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2C3CB0u;
    {
        const bool branch_taken_0x2c3cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CB0u;
        // 0x2c3cb4: 0xa6a20028  sh          $v0, 0x28($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cb0) {
            ctx->pc = 0x2C3E10u;
            goto label_2c3e10;
        }
    }
    ctx->pc = 0x2C3CB8u;
label_2c3cb8:
    // 0x2c3cb8: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C3CB8u;
    SET_GPR_U32(ctx, 31, 0x2C3CC0u);
    ctx->pc = 0x2C3CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CB8u;
    // 0x2c3cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C3CB8u, 0x2C3CC0u)) {
        return;
    }
    ctx->pc = 0x2C3CC0u;
label_2c3cc0:
    // 0x2c3cc0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2C3CC0u;
    {
        const bool branch_taken_0x2c3cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CC0u;
        // 0x2c3cc4: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cc0) {
            ctx->pc = 0x2C3E14u;
            goto label_2c3e14;
        }
    }
    ctx->pc = 0x2C3CC8u;
label_2c3cc8:
    // 0x2c3cc8: 0x95e70022  lhu         $a3, 0x22($t7)
    ctx->pc = 0x2c3cc8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 34)));
    // 0x2c3ccc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c3cd0: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x2c3cd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3cd4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c3cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cd8: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3cdc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C3CDCu;
    {
        const bool branch_taken_0x2c3cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CDCu;
        // 0x2c3ce0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cdc) {
            ctx->pc = 0x2C3DE8u;
            goto label_2c3de8;
        }
    }
    ctx->pc = 0x2C3CE4u;
    // 0x2c3ce4: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2c3ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c3ce8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2c3ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3cec: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x2c3cecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2c3cf0: 0x14e6021  addu        $t4, $t2, $t6
    ctx->pc = 0x2c3cf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2c3cf4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c3cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cf8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c3cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cfc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c3d00:
    // 0x2c3d00: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2c3d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d04: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2c3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c3d08: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c3d08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d0c: 0x2a3180a  movz        $v1, $s5, $v1
    ctx->pc = 0x2c3d0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21));
    // 0x2c3d10: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3D10u;
    {
        const bool branch_taken_0x2c3d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D10u;
        // 0x2c3d14: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d10) {
            ctx->pc = 0x2C3DDCu;
            goto label_2c3ddc;
        }
    }
    ctx->pc = 0x2C3D18u;
    // 0x2c3d18: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3d1c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3D1Cu;
    {
        const bool branch_taken_0x2c3d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D1Cu;
        // 0x2c3d20: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d1c) {
            ctx->pc = 0x2C3D70u;
            goto label_2c3d70;
        }
    }
    ctx->pc = 0x2C3D24u;
    // 0x2c3d24: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x2c3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3D28u;
    {
        const bool branch_taken_0x2c3d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D28u;
        // 0x2c3d2c: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d28) {
            ctx->pc = 0x2C3D68u;
            goto label_2c3d68;
        }
    }
    ctx->pc = 0x2C3D30u;
label_2c3d30:
    // 0x2c3d30: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3d34: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3d38: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3d3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d40: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c3d44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3d48: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2c3d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2c3d4c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2c3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2c3d50: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c3d54: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2c3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2c3d58: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3d5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3D5Cu;
    {
        const bool branch_taken_0x2c3d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D5Cu;
        // 0x2c3d60: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d5c) {
            ctx->pc = 0x2C3DD8u;
            goto label_2c3dd8;
        }
    }
    ctx->pc = 0x2C3D64u;
    // 0x2c3d64: 0x0  nop
    ctx->pc = 0x2c3d64u;
    // NOP
label_2c3d68:
    // 0x2c3d68: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3D68u;
    {
        const bool branch_taken_0x2c3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D68u;
        // 0x2c3d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d68) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3D70u;
label_2c3d70:
    // 0x2c3d70: 0x10f6001e  beq         $a3, $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3D70u;
    {
        const bool branch_taken_0x2c3d70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        ctx->pc = 0x2C3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D70u;
        // 0x2c3d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d70) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3D78u;
    // 0x2c3d78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c3d7c: 0x51e2ffec  beql        $t7, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3D7Cu;
    {
        const bool branch_taken_0x2c3d7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3d7c) {
            ctx->pc = 0x2C3D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3D7Cu;
            // 0x2c3d80: 0x95e20028  lhu         $v0, 0x28($t7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3d30;
        }
    }
    ctx->pc = 0x2C3D84u;
    // 0x2c3d84: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x2c3d84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3d88: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3d8c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x2c3d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2c3d90: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3D90u;
    {
        const bool branch_taken_0x2c3d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D90u;
        // 0x2c3d94: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d90) {
            ctx->pc = 0x2C3DDCu;
            goto label_2c3ddc;
        }
    }
    ctx->pc = 0x2C3D98u;
    // 0x2c3d98: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2c3d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c3d9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3D9Cu;
    {
        const bool branch_taken_0x2c3d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D9Cu;
        // 0x2c3da0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d9c) {
            ctx->pc = 0x2C3D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3d70;
        }
    }
    ctx->pc = 0x2C3DA4u;
    // 0x2c3da4: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x2c3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c3da8: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x2c3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c3dac: 0x11a0ffee  beqz        $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C3DACu;
    {
        const bool branch_taken_0x2c3dac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DACu;
        // 0x2c3db0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dac) {
            ctx->pc = 0x2C3D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3d68;
        }
    }
    ctx->pc = 0x2C3DB4u;
    // 0x2c3db4: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x2c3db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c3db8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3DB8u;
    {
        const bool branch_taken_0x2c3db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DB8u;
        // 0x2c3dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3db8) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DC0u;
    // 0x2c3dc0: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2c3dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3dc4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2c3dc8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c3dcc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2c3dccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2c3dd0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c3dd4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c3dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2c3dd8:
    // 0x2c3dd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c3dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c3ddc:
    // 0x2c3ddc: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x2c3ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3de0: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2C3DE0u;
    {
        const bool branch_taken_0x2c3de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3de0) {
            ctx->pc = 0x2C3DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3DE0u;
            // 0x2c3de4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3d00;
        }
    }
    ctx->pc = 0x2C3DE8u;
label_2c3de8:
    // 0x2c3de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dec:
    // 0x2c3dec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3DECu;
    {
        const bool branch_taken_0x2c3dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DECu;
        // 0x2c3df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dec) {
            ctx->pc = 0x2C3E0Cu;
            goto label_2c3e0c;
        }
    }
    ctx->pc = 0x2C3DF4u;
    // 0x2c3df4: 0x95e20028  lhu         $v0, 0x28($t7)
    ctx->pc = 0x2c3df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x2c3df8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c3dfc: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C3DFCu;
    SET_GPR_U32(ctx, 31, 0x2C3E04u);
    ctx->pc = 0x2C3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DFCu;
    // 0x2c3e00: 0xa5e20028  sh          $v0, 0x28($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C3DFCu, 0x2C3E04u)) {
        return;
    }
    ctx->pc = 0x2C3E04u;
label_2c3e04:
    // 0x2c3e04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3E04u;
    {
        const bool branch_taken_0x2c3e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E04u;
        // 0x2c3e08: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e04) {
            ctx->pc = 0x2C3E14u;
            goto label_2c3e14;
        }
    }
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2c3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_2c3e10:
    // 0x2c3e10: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2c3e14:
    // 0x2c3e14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3E14u;
    {
        const bool branch_taken_0x2c3e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E14u;
        // 0x2c3e18: 0x8f828aa8  lw          $v0, -0x7558($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e14) {
            ctx->pc = 0x2C3E30u;
            goto label_2c3e30;
        }
    }
    ctx->pc = 0x2C3E1Cu;
    // 0x2c3e1c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C3E1Cu;
    {
        const bool branch_taken_0x2c3e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e1c) {
            ctx->pc = 0x2C3E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E1Cu;
            // 0x2c3e20: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E64u;
            goto label_2c3e64;
        }
    }
    ctx->pc = 0x2C3E24u;
    // 0x2c3e24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C3E28u;
    {
        const bool branch_taken_0x2c3e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E28u;
        // 0x2c3e2c: 0xaf868aa8  sw          $a2, -0x7558($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e28) {
            ctx->pc = 0x2C3E60u;
            goto label_2c3e60;
        }
    }
    ctx->pc = 0x2C3E30u;
label_2c3e30:
    // 0x2c3e30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E30u;
    {
        const bool branch_taken_0x2c3e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e30) {
            ctx->pc = 0x2C3E44u;
            goto label_2c3e44;
        }
    }
    ctx->pc = 0x2C3E38u;
    // 0x2c3e38: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2c3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c3e3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c3e40: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2c3e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2c3e44:
    // 0x2c3e44: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E44u;
    {
        const bool branch_taken_0x2c3e44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e44) {
            ctx->pc = 0x2C3E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E44u;
            // 0x2c3e48: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E64u;
            goto label_2c3e64;
        }
    }
    ctx->pc = 0x2C3E4Cu;
    // 0x2c3e4c: 0x52700005  beql        $s3, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3E4Cu;
    {
        const bool branch_taken_0x2c3e4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c3e4c) {
            ctx->pc = 0x2C3E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E4Cu;
            // 0x2c3e50: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E64u;
            goto label_2c3e64;
        }
    }
    ctx->pc = 0x2C3E54u;
    // 0x2c3e54: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2c3e58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c3e5c: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x2c3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_2c3e60:
    // 0x2c3e60: 0x8e5200dc  lw          $s2, 0xDC($s2)
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2c3e64:
    // 0x2c3e64: 0x5640fd50  bnel        $s2, $zero, . + 4 + (-0x2B0 << 2)
    ctx->pc = 0x2C3E64u;
    {
        const bool branch_taken_0x2c3e64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e64) {
            ctx->pc = 0x2C3E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E64u;
            // 0x2c3e68: 0x964200b8  lhu         $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C33A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c33a8;
        }
    }
    ctx->pc = 0x2C3E6Cu;
    // 0x2c3e6c: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c3e70: 0x12400124  beqz        $s2, . + 4 + (0x124 << 2)
    ctx->pc = 0x2C3E70u;
    {
        const bool branch_taken_0x2c3e70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E70u;
        // 0x2c3e74: 0x27b4005c  addiu       $s4, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e70) {
            ctx->pc = 0x2C4304u;
            goto label_2c4304;
        }
    }
    ctx->pc = 0x2C3E78u;
    // 0x2c3e78: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2c3e78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c3e7c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c3e7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e80: 0x27b50058  addiu       $s5, $sp, 0x58
    ctx->pc = 0x2c3e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c3e84: 0x264700b4  addiu       $a3, $s2, 0xB4
    ctx->pc = 0x2c3e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_2c3e88:
    // 0x2c3e88: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x2c3e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c3e8c: 0x105100fd  beq         $v0, $s1, . + 4 + (0xFD << 2)
    ctx->pc = 0x2C3E8Cu;
    {
        const bool branch_taken_0x2c3e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E8Cu;
        // 0x2c3e90: 0x264900bc  addiu       $t1, $s2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e8c) {
            ctx->pc = 0x2C4284u;
            goto label_2c4284;
        }
    }
    ctx->pc = 0x2C3E94u;
    // 0x2c3e94: 0x8e4600b4  lw          $a2, 0xB4($s2)
    ctx->pc = 0x2c3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2c3e98: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c3e9c: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2C3E9Cu;
    {
        const bool branch_taken_0x2c3e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E9Cu;
        // 0x2c3ea0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e9c) {
            ctx->pc = 0x2C41D0u;
            goto label_2c41d0;
        }
    }
    ctx->pc = 0x2C3EA4u;
    // 0x2c3ea4: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c3ea4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3ea8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3eac: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c3eb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3eb4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c3eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c3eb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3ebc: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c3ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3ec4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c3ec8: 0x504000c2  beql        $v0, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2C3EC8u;
    {
        const bool branch_taken_0x2c3ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ec8) {
            ctx->pc = 0x2C3ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3EC8u;
            // 0x2c3ecc: 0x94e20004  lhu         $v0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41D4u;
            goto label_2c41d4;
        }
    }
    ctx->pc = 0x2C3ED0u;
    // 0x2c3ed0: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2c3ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c3ed4: 0x505100bf  beql        $v0, $s1, . + 4 + (0xBF << 2)
    ctx->pc = 0x2C3ED4u;
    {
        const bool branch_taken_0x2c3ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2c3ed4) {
            ctx->pc = 0x2C3ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3ED4u;
            // 0x2c3ed8: 0x94e20004  lhu         $v0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41D4u;
            goto label_2c41d4;
        }
    }
    ctx->pc = 0x2C3EDCu;
    // 0x2c3edc: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2c3ee0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c3ee4: 0x506000bb  beql        $v1, $zero, . + 4 + (0xBB << 2)
    ctx->pc = 0x2C3EE4u;
    {
        const bool branch_taken_0x2c3ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ee4) {
            ctx->pc = 0x2C3EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3EE4u;
            // 0x2c3ee8: 0x94e20004  lhu         $v0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41D4u;
            goto label_2c41d4;
        }
    }
    ctx->pc = 0x2C3EECu;
    // 0x2c3eec: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2c3eecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c3ef0: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2c3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c3ef4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c3ef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3efc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c3efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c3f00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3f04: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c3f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3f0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c3f10: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2C3F10u;
    {
        const bool branch_taken_0x2c3f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F10u;
        // 0x2c3f14: 0x8fa300ac  lw          $v1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f10) {
            ctx->pc = 0x2C41D0u;
            goto label_2c41d0;
        }
    }
    ctx->pc = 0x2C3F18u;
    // 0x2c3f18: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c3f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c3f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3f24: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x2c3f24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3f28: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x2c3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c3f2c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3F2Cu;
    {
        const bool branch_taken_0x2c3f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F2Cu;
        // 0x2c3f30: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f2c) {
            ctx->pc = 0x2C3F54u;
            goto label_2c3f54;
        }
    }
    ctx->pc = 0x2C3F34u;
    // 0x2c3f34: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c3f38:
    // 0x2c3f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c3f3c: 0x0  nop
    ctx->pc = 0x2c3f3cu;
    // NOP
    // 0x2c3f40: 0x0  nop
    ctx->pc = 0x2c3f40u;
    // NOP
    // 0x2c3f44: 0x0  nop
    ctx->pc = 0x2c3f44u;
    // NOP
    // 0x2c3f48: 0x0  nop
    ctx->pc = 0x2c3f48u;
    // NOP
    // 0x2c3f4c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3F4Cu;
    {
        const bool branch_taken_0x2c3f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f4c) {
            ctx->pc = 0x2C3F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F4Cu;
            // 0x2c3f50: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3f38;
        }
    }
    ctx->pc = 0x2C3F54u;
label_2c3f54:
    // 0x2c3f54: 0x5164000a  beql        $t3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3F54u;
    {
        const bool branch_taken_0x2c3f54 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c3f54) {
            ctx->pc = 0x2C3F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F54u;
            // 0x2c3f58: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F80u;
            goto label_2c3f80;
        }
    }
    ctx->pc = 0x2C3F5Cu;
    // 0x2c3f5c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2c3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_2c3f60:
    // 0x2c3f60: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x2c3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x2c3f64: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2c3f64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f68: 0x0  nop
    ctx->pc = 0x2c3f68u;
    // NOP
    // 0x2c3f6c: 0x0  nop
    ctx->pc = 0x2c3f6cu;
    // NOP
    // 0x2c3f70: 0x0  nop
    ctx->pc = 0x2c3f70u;
    // NOP
    // 0x2c3f74: 0x5564fffa  bnel        $t3, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3F74u;
    {
        const bool branch_taken_0x2c3f74 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c3f74) {
            ctx->pc = 0x2C3F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F74u;
            // 0x2c3f78: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3f60;
        }
    }
    ctx->pc = 0x2C3F7Cu;
    // 0x2c3f7c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2c3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2c3f80:
    // 0x2c3f80: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c3f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c3f84: 0x94430020  lhu         $v1, 0x20($v0)
    ctx->pc = 0x2c3f84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c3f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c3f90: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x2c3f90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3f94: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2c3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2c3f98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3F98u;
    {
        const bool branch_taken_0x2c3f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F98u;
        // 0x2c3f9c: 0x1a0182d  daddu       $v1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f98) {
            ctx->pc = 0x2C3FC4u;
            goto label_2c3fc4;
        }
    }
    ctx->pc = 0x2C3FA0u;
    // 0x2c3fa0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2c3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3fa4: 0x0  nop
    ctx->pc = 0x2c3fa4u;
    // NOP
label_2c3fa8:
    // 0x2c3fa8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c3fac: 0x0  nop
    ctx->pc = 0x2c3facu;
    // NOP
    // 0x2c3fb0: 0x0  nop
    ctx->pc = 0x2c3fb0u;
    // NOP
    // 0x2c3fb4: 0x0  nop
    ctx->pc = 0x2c3fb4u;
    // NOP
    // 0x2c3fb8: 0x0  nop
    ctx->pc = 0x2c3fb8u;
    // NOP
    // 0x2c3fbc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3FBCu;
    {
        const bool branch_taken_0x2c3fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3fbc) {
            ctx->pc = 0x2C3FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3FBCu;
            // 0x2c3fc0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3FC4u;
label_2c3fc4:
    // 0x2c3fc4: 0x11a3000a  beq         $t5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3FC4u;
    {
        const bool branch_taken_0x2c3fc4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FC4u;
        // 0x2c3fc8: 0x1a0982d  daddu       $s3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fc4) {
            ctx->pc = 0x2C3FF0u;
            goto label_2c3ff0;
        }
    }
    ctx->pc = 0x2C3FCCu;
    // 0x2c3fcc: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2c3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2c3fd0:
    // 0x2c3fd0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2c3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2c3fd4: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2c3fd4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fd8: 0x0  nop
    ctx->pc = 0x2c3fd8u;
    // NOP
    // 0x2c3fdc: 0x0  nop
    ctx->pc = 0x2c3fdcu;
    // NOP
    // 0x2c3fe0: 0x0  nop
    ctx->pc = 0x2c3fe0u;
    // NOP
    // 0x2c3fe4: 0x55a3fffa  bnel        $t5, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3FE4u;
    {
        const bool branch_taken_0x2c3fe4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3fe4) {
            ctx->pc = 0x2C3FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3FE4u;
            // 0x2c3fe8: 0x8da20004  lw          $v0, 0x4($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3fd0;
        }
    }
    ctx->pc = 0x2C3FECu;
    // 0x2c3fec: 0x1a0982d  daddu       $s3, $t5, $zero
    ctx->pc = 0x2c3fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ff0:
    // 0x2c3ff0: 0x55730003  bnel        $t3, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3FF0u;
    {
        const bool branch_taken_0x2c3ff0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c3ff0) {
            ctx->pc = 0x2C3FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3FF0u;
            // 0x2c3ff4: 0x8d620044  lw          $v0, 0x44($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4000u;
            goto label_2c4000;
        }
    }
    ctx->pc = 0x2C3FF8u;
    // 0x2c3ff8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2C3FF8u;
    {
        const bool branch_taken_0x2c3ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FF8u;
        // 0x2c3ffc: 0xae5300d4  sw          $s3, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ff8) {
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C4000u;
label_2c4000:
    // 0x2c4000: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2c4004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4008: 0x2c420155  sltiu       $v0, $v0, 0x155
    ctx->pc = 0x2c4008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x2c400c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C400Cu;
    {
        const bool branch_taken_0x2c400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C400Cu;
        // 0x2c4010: 0x173102b  sltu        $v0, $t3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c400c) {
            ctx->pc = 0x2C401Cu;
            goto label_2c401c;
        }
    }
    ctx->pc = 0x2C4014u;
label_2c4014:
    // 0x2c4014: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2C4014u;
    {
        const bool branch_taken_0x2c4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4014u;
        // 0x2c4018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4014) {
            ctx->pc = 0x2C4194u;
            goto label_2c4194;
        }
    }
    ctx->pc = 0x2C401Cu;
label_2c401c:
    // 0x2c401c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C401Cu;
    {
        const bool branch_taken_0x2c401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C401Cu;
        // 0x2c4020: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c401c) {
            ctx->pc = 0x2C402Cu;
            goto label_2c402c;
        }
    }
    ctx->pc = 0x2C4024u;
    // 0x2c4024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4024u;
    {
        const bool branch_taken_0x2c4024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4024u;
        // 0x2c4028: 0x8e6e0028  lw          $t6, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4024) {
            ctx->pc = 0x2C4034u;
            goto label_2c4034;
        }
    }
    ctx->pc = 0x2C402Cu;
label_2c402c:
    // 0x2c402c: 0x8d6e0028  lw          $t6, 0x28($t3)
    ctx->pc = 0x2c402cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x2c4030: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4034:
    // 0x2c4034: 0x8caa002c  lw          $t2, 0x2C($a1)
    ctx->pc = 0x2c4034u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c4038: 0x2d420004  sltiu       $v0, $t2, 0x4
    ctx->pc = 0x2c4038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c403c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C403Cu;
    {
        const bool branch_taken_0x2c403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C403Cu;
        // 0x2c4040: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c403c) {
            ctx->pc = 0x2C414Cu;
            goto label_2c414c;
        }
    }
    ctx->pc = 0x2C4044u;
    // 0x2c4044: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x2c4044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2c4048: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x2c4048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x2c404c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2c404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c4050: 0x2a44021  addu        $t0, $s5, $a0
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2c4054: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x2c4054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c4058: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c405c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4060: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x2c4060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c4064: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4064u;
    {
        const bool branch_taken_0x2c4064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4064u;
        // 0x2c4068: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4064) {
            ctx->pc = 0x2C40C0u;
            goto label_2c40c0;
        }
    }
    ctx->pc = 0x2C406Cu;
    // 0x2c406c: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C406Cu;
    {
        const bool branch_taken_0x2c406c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C406Cu;
        // 0x2c4070: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c406c) {
            ctx->pc = 0x2C40E4u;
            goto label_2c40e4;
        }
    }
    ctx->pc = 0x2C4074u;
    // 0x2c4074: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4074u;
    {
        const bool branch_taken_0x2c4074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4074) {
            ctx->pc = 0x2C4078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4074u;
            // 0x2c4078: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C40C4u;
            goto label_2c40c4;
        }
    }
    ctx->pc = 0x2C407Cu;
    // 0x2c407c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2c407cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c4080: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4080u;
    {
        const bool branch_taken_0x2c4080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4080) {
            ctx->pc = 0x2C4084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4080u;
            // 0x2c4084: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C40A8u;
            goto label_2c40a8;
        }
    }
    ctx->pc = 0x2C4088u;
    // 0x2c4088: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c408c: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x2c408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2c4090: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c4090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4094: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x2c4094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c4098: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c4098u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2c409c: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2c409cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c40a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2c40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2c40a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c40a8:
    // 0x2c40a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c40a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c40ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c40b0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2c40b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c40b8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2c40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2c40bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c40c0:
    // 0x2c40c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c40c4:
    // 0x2c40c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c40c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c40c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c40cc: 0x2d2c0004  sltiu       $t4, $t1, 0x4
    ctx->pc = 0x2c40ccu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c40d0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2c40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2c40d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c40d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c40d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2c40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2c40dc: 0x1180001b  beqz        $t4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C40DCu;
    {
        const bool branch_taken_0x2c40dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40DCu;
        // 0x2c40e0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40dc) {
            ctx->pc = 0x2C414Cu;
            goto label_2c414c;
        }
    }
    ctx->pc = 0x2C40E4u;
label_2c40e4:
    // 0x2c40e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c40e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c40e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c40ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c40f0:
    // 0x2c40f0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2c40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c40f4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2c40f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2c40f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c40fc: 0x2d2c0004  sltiu       $t4, $t1, 0x4
    ctx->pc = 0x2c40fcu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c4100: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2c4100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2c4104: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c4104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c4108: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x2c4108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c410c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c4110: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2c4110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2c4114: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c4114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c4118: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2c4118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c411c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2c411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c4120: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2c4120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x2c4124: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2c4124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2c4128: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x2c4128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x2c412c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2c412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2c4130: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2c4130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2c4134: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x2c4134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x2c4138: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2c4138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2c413c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2c413cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2c4140: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2c4140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2c4144: 0x1580ffea  bnez        $t4, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C4144u;
    {
        const bool branch_taken_0x2c4144 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4144u;
        // 0x2c4148: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4144) {
            ctx->pc = 0x2C40F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c40f0;
        }
    }
    ctx->pc = 0x2C414Cu;
label_2c414c:
    // 0x2c414c: 0x11c00010  beqz        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C414Cu;
    {
        const bool branch_taken_0x2c414c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C414Cu;
        // 0x2c4150: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c414c) {
            ctx->pc = 0x2C4190u;
            goto label_2c4190;
        }
    }
    ctx->pc = 0x2C4154u;
    // 0x2c4154: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x2c4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c4158:
    // 0x2c4158: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x2c4158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2c415c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4160: 0x94630028  lhu         $v1, 0x28($v1)
    ctx->pc = 0x2c4160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2c4164: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c4164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c4168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4168u;
    {
        const bool branch_taken_0x2c4168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4168u;
        // 0x2c416c: 0x2d420003  sltiu       $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4168) {
            ctx->pc = 0x2C417Cu;
            goto label_2c417c;
        }
    }
    ctx->pc = 0x2C4170u;
    // 0x2c4170: 0x1040ffa8  beqz        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x2C4170u;
    {
        const bool branch_taken_0x2c4170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4170u;
        // 0x2c4174: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4170) {
            ctx->pc = 0x2C4014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4014;
        }
    }
    ctx->pc = 0x2C4178u;
    // 0x2c4178: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c4178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2c417c:
    // 0x2c417c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4180: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x2c4180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2c4184: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c4184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4188: 0x15c0fff3  bnez        $t6, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C4188u;
    {
        const bool branch_taken_0x2c4188 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4188u;
        // 0x2c418c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4188) {
            ctx->pc = 0x2C4158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4158;
        }
    }
    ctx->pc = 0x2C4190u;
label_2c4190:
    // 0x2c4190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4194:
    // 0x2c4194: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4194u;
    {
        const bool branch_taken_0x2c4194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4194u;
        // 0x2c4198: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4194) {
            ctx->pc = 0x2C41B8u;
            goto label_2c41b8;
        }
    }
    ctx->pc = 0x2C419Cu;
    // 0x2c419c: 0xc0b072e  jal         func_2C1CB8
    ctx->pc = 0x2C419Cu;
    SET_GPR_U32(ctx, 31, 0x2C41A4u);
    ctx->pc = 0x2C41A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C419Cu;
    // 0x2c41a0: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1CB8u, 0x2C419Cu, 0x2C41A4u)) {
        return;
    }
    ctx->pc = 0x2C41A4u;
label_2c41a4:
    // 0x2c41a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c41a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41a8: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C41A8u;
    SET_GPR_U32(ctx, 31, 0x2C41B0u);
    ctx->pc = 0x2C41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41A8u;
    // 0x2c41ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C41A8u, 0x2C41B0u)) {
        return;
    }
    ctx->pc = 0x2C41B0u;
label_2c41b0:
    // 0x2c41b0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C41B0u;
    {
        const bool branch_taken_0x2c41b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41B0u;
        // 0x2c41b4: 0xae5000d4  sw          $s0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41b0) {
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c41bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c41bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41c0: 0xc0b0784  jal         func_2C1E10
    ctx->pc = 0x2C41C0u;
    SET_GPR_U32(ctx, 31, 0x2C41C8u);
    ctx->pc = 0x2C41C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41C0u;
    // 0x2c41c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1E10u, 0x2C41C0u, 0x2C41C8u)) {
        return;
    }
    ctx->pc = 0x2C41C8u;
label_2c41c8:
    // 0x2c41c8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C41C8u;
    {
        const bool branch_taken_0x2c41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41C8u;
        // 0x2c41cc: 0x8e5200dc  lw          $s2, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41c8) {
            ctx->pc = 0x2C42FCu;
            goto label_2c42fc;
        }
    }
    ctx->pc = 0x2C41D0u;
label_2c41d0:
    // 0x2c41d0: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x2c41d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_2c41d4:
    // 0x2c41d4: 0x5051002c  beql        $v0, $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C41D4u;
    {
        const bool branch_taken_0x2c41d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2c41d4) {
            ctx->pc = 0x2C41D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41D4u;
            // 0x2c41d8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4288u;
            goto label_2c4288;
        }
    }
    ctx->pc = 0x2C41DCu;
    // 0x2c41dc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2c41dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c41e0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2c41e4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C41E4u;
    {
        const bool branch_taken_0x2c41e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41e4) {
            ctx->pc = 0x2C41E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41E4u;
            // 0x2c41e8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4288u;
            goto label_2c4288;
        }
    }
    ctx->pc = 0x2C41ECu;
    // 0x2c41ec: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2c41ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c41f0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c41f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c41f4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c41f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c41fc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c41fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c4200: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c4204: 0x962004  sllv        $a0, $s6, $a0
    ctx->pc = 0x2c4204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c4208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c420c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c4210: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C4210u;
    {
        const bool branch_taken_0x2c4210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4210u;
        // 0x2c4214: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4210) {
            ctx->pc = 0x2C4284u;
            goto label_2c4284;
        }
    }
    ctx->pc = 0x2C4218u;
    // 0x2c4218: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2c4218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c421c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c4224: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4228: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c4228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c422c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C422Cu;
    {
        const bool branch_taken_0x2c422c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C422Cu;
        // 0x2c4230: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c422c) {
            ctx->pc = 0x2C4254u;
            goto label_2c4254;
        }
    }
    ctx->pc = 0x2C4234u;
    // 0x2c4234: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2c4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c4238:
    // 0x2c4238: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c423c: 0x0  nop
    ctx->pc = 0x2c423cu;
    // NOP
    // 0x2c4240: 0x0  nop
    ctx->pc = 0x2c4240u;
    // NOP
    // 0x2c4244: 0x0  nop
    ctx->pc = 0x2c4244u;
    // NOP
    // 0x2c4248: 0x0  nop
    ctx->pc = 0x2c4248u;
    // NOP
    // 0x2c424c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C424Cu;
    {
        const bool branch_taken_0x2c424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c424c) {
            ctx->pc = 0x2C4250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C424Cu;
            // 0x2c4250: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4238;
        }
    }
    ctx->pc = 0x2C4254u;
label_2c4254:
    // 0x2c4254: 0x50a40028  beql        $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C4254u;
    {
        const bool branch_taken_0x2c4254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c4254) {
            ctx->pc = 0x2C4258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4254u;
            // 0x2c4258: 0xae4500d4  sw          $a1, 0xD4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C425Cu;
    // 0x2c425c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2c4260:
    // 0x2c4260: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2c4260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2c4264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4268: 0x0  nop
    ctx->pc = 0x2c4268u;
    // NOP
    // 0x2c426c: 0x0  nop
    ctx->pc = 0x2c426cu;
    // NOP
    // 0x2c4270: 0x0  nop
    ctx->pc = 0x2c4270u;
    // NOP
    // 0x2c4274: 0x54a4fffa  bnel        $a1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C4274u;
    {
        const bool branch_taken_0x2c4274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c4274) {
            ctx->pc = 0x2C4278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4274u;
            // 0x2c4278: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4260;
        }
    }
    ctx->pc = 0x2C427Cu;
    // 0x2c427c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C427Cu;
    {
        const bool branch_taken_0x2c427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C427Cu;
        // 0x2c4280: 0xae4500d4  sw          $a1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c427c) {
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C4284u;
label_2c4284:
    // 0x2c4284: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2c4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2c4288:
    // 0x2c4288: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2c4288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2c428c: 0x94430020  lhu         $v1, 0x20($v0)
    ctx->pc = 0x2c428cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c4290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4294: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c4294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c4298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c429c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c42a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C42A0u;
    {
        const bool branch_taken_0x2c42a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42A0u;
        // 0x2c42a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42a0) {
            ctx->pc = 0x2C42CCu;
            goto label_2c42cc;
        }
    }
    ctx->pc = 0x2C42A8u;
    // 0x2c42a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c42ac: 0x0  nop
    ctx->pc = 0x2c42acu;
    // NOP
label_2c42b0:
    // 0x2c42b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c42b4: 0x0  nop
    ctx->pc = 0x2c42b4u;
    // NOP
    // 0x2c42b8: 0x0  nop
    ctx->pc = 0x2c42b8u;
    // NOP
    // 0x2c42bc: 0x0  nop
    ctx->pc = 0x2c42bcu;
    // NOP
    // 0x2c42c0: 0x0  nop
    ctx->pc = 0x2c42c0u;
    // NOP
    // 0x2c42c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C42C4u;
    {
        const bool branch_taken_0x2c42c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c42c4) {
            ctx->pc = 0x2C42C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C42C4u;
            // 0x2c42c8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c42b0;
        }
    }
    ctx->pc = 0x2C42CCu;
label_2c42cc:
    // 0x2c42cc: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C42CCu;
    {
        const bool branch_taken_0x2c42cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c42cc) {
            ctx->pc = 0x2C42D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C42CCu;
            // 0x2c42d0: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C42D4u;
    // 0x2c42d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c42d8:
    // 0x2c42d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2c42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2c42dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c42dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42e0: 0x0  nop
    ctx->pc = 0x2c42e0u;
    // NOP
    // 0x2c42e4: 0x0  nop
    ctx->pc = 0x2c42e4u;
    // NOP
    // 0x2c42e8: 0x0  nop
    ctx->pc = 0x2c42e8u;
    // NOP
    // 0x2c42ec: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C42ECu;
    {
        const bool branch_taken_0x2c42ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c42ec) {
            ctx->pc = 0x2C42F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C42ECu;
            // 0x2c42f0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C42D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c42d8;
        }
    }
    ctx->pc = 0x2C42F4u;
    // 0x2c42f4: 0xae4300d4  sw          $v1, 0xD4($s2)
    ctx->pc = 0x2c42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
label_2c42f8:
    // 0x2c42f8: 0x8e5200dc  lw          $s2, 0xDC($s2)
    ctx->pc = 0x2c42f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2c42fc:
    // 0x2c42fc: 0x1640fee2  bnez        $s2, . + 4 + (-0x11E << 2)
    ctx->pc = 0x2C42FCu;
    {
        const bool branch_taken_0x2c42fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42FCu;
        // 0x2c4300: 0x264700b4  addiu       $a3, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42fc) {
            ctx->pc = 0x2C3E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3e88;
        }
    }
    ctx->pc = 0x2C4304u;
label_2c4304:
    // 0x2c4304: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2c4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2c4308: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c430c: 0x8fd40010  lw          $s4, 0x10($fp)
    ctx->pc = 0x2c430cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2c4310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c4310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4314: 0x8fca0008  lw          $t2, 0x8($fp)
    ctx->pc = 0x2c4314u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2c4318: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c431c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C431Cu;
    {
        const bool branch_taken_0x2c431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C431Cu;
        // 0x2c4320: 0x8fd20004  lw          $s2, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c431c) {
            ctx->pc = 0x2C4458u;
            goto label_2c4458;
        }
    }
    ctx->pc = 0x2C4324u;
    // 0x2c4324: 0x240b004c  addiu       $t3, $zero, 0x4C
    ctx->pc = 0x2c4324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c4328: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x2c4328u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c432c: 0x240d004c  addiu       $t5, $zero, 0x4C
    ctx->pc = 0x2c432cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c4330: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2c4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c4334: 0x0  nop
    ctx->pc = 0x2c4334u;
    // NOP
label_2c4338:
    // 0x2c4338: 0x400013  mtlo        $v0
    ctx->pc = 0x2c4338u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c433c: 0x726b2800  madd        $a1, $s3, $t3
    ctx->pc = 0x2c433cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c4340: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c4344: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C4344u;
    {
        const bool branch_taken_0x2c4344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4344) {
            ctx->pc = 0x2C4348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4344u;
            // 0x2c4348: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C443Cu;
            goto label_2c443c;
        }
    }
    ctx->pc = 0x2C434Cu;
    // 0x2c434c: 0x11800004  beqz        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C434Cu;
    {
        const bool branch_taken_0x2c434c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C434Cu;
        // 0x2c4350: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c434c) {
            ctx->pc = 0x2C4360u;
            goto label_2c4360;
        }
    }
    ctx->pc = 0x2C4354u;
    // 0x2c4354: 0xacbe0048  sw          $fp, 0x48($a1)
    ctx->pc = 0x2c4354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 30));
    // 0x2c4358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4358u;
    {
        const bool branch_taken_0x2c4358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4358u;
        // 0x2c435c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4358) {
            ctx->pc = 0x2C4380u;
            goto label_2c4380;
        }
    }
    ctx->pc = 0x2C4360u;
label_2c4360:
    // 0x2c4360: 0x8c8300c8  lw          $v1, 0xC8($a0)
    ctx->pc = 0x2c4360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2c4364: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2c4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2c4368: 0x6e2018  mult        $a0, $v1, $t6
    ctx->pc = 0x2c4368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c436c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4374: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x2c4374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x2c4378: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2c4378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c437c: 0xaca300c8  sw          $v1, 0xC8($a1)
    ctx->pc = 0x2c437cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 3));
label_2c4380:
    // 0x2c4380: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c4384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4388: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c4388u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c438c: 0x400013  mtlo        $v0
    ctx->pc = 0x2c438cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c4390: 0x726b2800  madd        $a1, $s3, $t3
    ctx->pc = 0x2c4390u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c4394: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2c4394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2c4398: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x2c4398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2c439c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2c439cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2c43a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2c43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2c43a4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2c43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2c43a8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2c43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2c43ac: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x2c43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2c43b0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2c43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2c43b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c43b8: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x2c43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x2c43bc: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2c43c0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x2c43c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2c43c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c43c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c43cc: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C43CCu;
    {
        const bool branch_taken_0x2c43cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43CCu;
        // 0x2c43d0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43cc) {
            ctx->pc = 0x2C4444u;
            goto label_2c4444;
        }
    }
    ctx->pc = 0x2C43D4u;
    // 0x2c43d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2c43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c43d8: 0x400013  mtlo        $v0
    ctx->pc = 0x2c43d8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c43dc: 0x726d3800  madd        $a3, $s3, $t5
    ctx->pc = 0x2c43dcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c43e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2c43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2c43e4: 0x0  nop
    ctx->pc = 0x2c43e4u;
    // NOP
label_2c43e8:
    // 0x2c43e8: 0x50480010  beql        $v0, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C43E8u;
    {
        const bool branch_taken_0x2c43e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2c43e8) {
            ctx->pc = 0x2C43ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43E8u;
            // 0x2c43ec: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C442Cu;
            goto label_2c442c;
        }
    }
    ctx->pc = 0x2C43F0u;
    // 0x2c43f0: 0x8ce50048  lw          $a1, 0x48($a3)
    ctx->pc = 0x2c43f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2c43f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c43f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43f8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2c43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2c43fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4400: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4404: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c4408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c440c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2c440cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2c4410: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2c4410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2c4414: 0x8ce40048  lw          $a0, 0x48($a3)
    ctx->pc = 0x2c4414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2c4418: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x2c4418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c441c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2c441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c4420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4424: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2c4424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2c4428: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2c4428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c442c:
    // 0x2c442c: 0x54c0ffee  bnel        $a2, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C442Cu;
    {
        const bool branch_taken_0x2c442c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c442c) {
            ctx->pc = 0x2C4430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C442Cu;
            // 0x2c4430: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c43e8;
        }
    }
    ctx->pc = 0x2C4434u;
    // 0x2c4434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4434u;
    {
        const bool branch_taken_0x2c4434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4434u;
        // 0x2c4438: 0x8fa300b4  lw          $v1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4434) {
            ctx->pc = 0x2C4448u;
            goto label_2c4448;
        }
    }
    ctx->pc = 0x2C443Cu;
label_2c443c:
    // 0x2c443c: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c443cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c4440: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x2c4440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
label_2c4444:
    // 0x2c4444: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x2c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2c4448:
    // 0x2c4448: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c4448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c444c: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2c444cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c4450: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2C4450u;
    {
        const bool branch_taken_0x2c4450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4450u;
        // 0x2c4454: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4450) {
            ctx->pc = 0x2C4338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4338;
        }
    }
    ctx->pc = 0x2C4458u;
label_2c4458:
    // 0x2c4458: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C4458u;
    {
        const bool branch_taken_0x2c4458 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4458u;
        // 0x2c445c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4458) {
            ctx->pc = 0x2C4514u;
            goto label_2c4514;
        }
    }
    ctx->pc = 0x2C4460u;
    // 0x2c4460: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c4460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4464: 0x32860003  andi        $a2, $s4, 0x3
    ctx->pc = 0x2c4464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x2c4468: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x2c4468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2c446c: 0x8c8700f0  lw          $a3, 0xF0($a0)
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2c4470: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2c4470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4474: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4474u;
    {
        const bool branch_taken_0x2c4474 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2C4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4474u;
        // 0x2c4478: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4474) {
            ctx->pc = 0x2C44C0u;
            goto label_2c44c0;
        }
    }
    ctx->pc = 0x2C447Cu;
    // 0x2c447c: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C447Cu;
    {
        const bool branch_taken_0x2c447c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C447Cu;
        // 0x2c4480: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c447c) {
            ctx->pc = 0x2C44DCu;
            goto label_2c44dc;
        }
    }
    ctx->pc = 0x2C4484u;
    // 0x2c4484: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4484u;
    {
        const bool branch_taken_0x2c4484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4484) {
            ctx->pc = 0x2C4488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4484u;
            // 0x2c4488: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44C4u;
            goto label_2c44c4;
        }
    }
    ctx->pc = 0x2C448Cu;
    // 0x2c448c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2c448cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c4490: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4490u;
    {
        const bool branch_taken_0x2c4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4490) {
            ctx->pc = 0x2C4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4490u;
            // 0x2c4494: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44B0u;
            goto label_2c44b0;
        }
    }
    ctx->pc = 0x2C4498u;
    // 0x2c4498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c449c: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c44a0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c44a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c44a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c44a8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2c44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2c44ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c44b0:
    // 0x2c44b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c44b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c44b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c44bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2c44c0:
    // 0x2c44c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c44c4:
    // 0x2c44c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c44c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c44cc: 0x274302b  sltu        $a2, $s3, $s4
    ctx->pc = 0x2c44ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c44d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c44d4: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C44D4u;
    {
        const bool branch_taken_0x2c44d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D4u;
        // 0x2c44d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44d4) {
            ctx->pc = 0x2C4514u;
            goto label_2c4514;
        }
    }
    ctx->pc = 0x2C44DCu;
label_2c44dc:
    // 0x2c44dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c44dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c44e0:
    // 0x2c44e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c44e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c44e8: 0x274302b  sltu        $a2, $s3, $s4
    ctx->pc = 0x2c44e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c44ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c44f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c44f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2c44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2c44f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c44fc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c4500: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2c4504: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2c4508: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2c4508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2c450c: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C450Cu;
    {
        const bool branch_taken_0x2c450c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C450Cu;
        // 0x2c4510: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c450c) {
            ctx->pc = 0x2C44E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c44e0;
        }
    }
    ctx->pc = 0x2C4514u;
label_2c4514:
    // 0x2c4514: 0x1280006a  beqz        $s4, . + 4 + (0x6A << 2)
    ctx->pc = 0x2C4514u;
    {
        const bool branch_taken_0x2c4514 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4514u;
        // 0x2c4518: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4514) {
            ctx->pc = 0x2C46C0u;
            goto label_2c46c0;
        }
    }
    ctx->pc = 0x2C451Cu;
    // 0x2c451c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4520: 0x1a800026  blez        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C4520u;
    {
        const bool branch_taken_0x2c4520 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2C4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4520u;
        // 0x2c4524: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4520) {
            ctx->pc = 0x2C45BCu;
            goto label_2c45bc;
        }
    }
    ctx->pc = 0x2C4528u;
    // 0x2c4528: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C4528u;
    {
        const bool branch_taken_0x2c4528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4528) {
            ctx->pc = 0x2C452Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4528u;
            // 0x2c452c: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C45E4u;
            goto label_2c45e4;
        }
    }
    ctx->pc = 0x2C4530u;
    // 0x2c4530: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c4530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c4534: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C4534u;
    {
        const bool branch_taken_0x2c4534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4534u;
        // 0x2c4538: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4534) {
            ctx->pc = 0x2C45C0u;
            goto label_2c45c0;
        }
    }
    ctx->pc = 0x2C453Cu;
    // 0x2c453c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c453cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c4540: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4540u;
    {
        const bool branch_taken_0x2c4540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4540u;
        // 0x2c4544: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4540) {
            ctx->pc = 0x2C4584u;
            goto label_2c4584;
        }
    }
    ctx->pc = 0x2C4548u;
    // 0x2c4548: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2c4548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c454c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c454cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4550: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4554: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x2c4554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x2c4558: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c455c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4560: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2c4560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c4564: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2c4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c4568: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c456c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c4574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4578: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c4578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c457c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2c457cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2c4580: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2c4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c4584:
    // 0x2c4584: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c4584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c4588: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2c4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2c458c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c4590: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c4590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4594: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c4598: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c459c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2c459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c45a0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2c45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c45a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2c45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c45a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c45ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c45acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c45b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c45b4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c45b8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2c45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_2c45bc:
    // 0x2c45bc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c45c0:
    // 0x2c45c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c45c4: 0x274382b  sltu        $a3, $s3, $s4
    ctx->pc = 0x2c45c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c45c8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2c45cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c45d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c45d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c45d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C45D4u;
    {
        const bool branch_taken_0x2c45d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45d4) {
            ctx->pc = 0x2C4698u;
            goto label_2c4698;
        }
    }
    ctx->pc = 0x2C45DCu;
    // 0x2c45dc: 0x0  nop
    ctx->pc = 0x2c45dcu;
    // NOP
label_2c45e0:
    // 0x2c45e0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2c45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c45e4:
    // 0x2c45e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c45e8: 0x274382b  sltu        $a3, $s3, $s4
    ctx->pc = 0x2c45e8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c45ec: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x2c45f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2c45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c45f4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2c45f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c45f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c45fc: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c4600: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2c4600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c4604: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2c4604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c4608: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c460c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4614: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c4614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c4618: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2c4618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2c461c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4620: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2c4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2c4624: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c4628: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c462c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4630: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2c4630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c4634: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2c4634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c4638: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c463c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2c463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4644: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4648: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c4648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c464c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x2c464cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x2c4650: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4654: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2c4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2c4658: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c465c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c4660: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c4660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4664: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2c4664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c4668: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2c4668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c466c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c4670: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4678: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c4678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c467c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c467cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c4680: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x2c4680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x2c4684: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2c4684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4688: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x2c4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x2c468c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c4690: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c4694: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2c4694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2c4698:
    // 0x2c4698: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c469c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2c469cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c46a0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2c46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c46a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c46a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c46ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c46b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c46b4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c46b8: 0x14e0ffc9  bnez        $a3, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2C46B8u;
    {
        const bool branch_taken_0x2c46b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46B8u;
        // 0x2c46bc: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46b8) {
            ctx->pc = 0x2C45E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c45e0;
        }
    }
    ctx->pc = 0x2C46C0u;
label_2c46c0:
    // 0x2c46c0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2C46C0u;
    {
        const bool branch_taken_0x2c46c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46C0u;
        // 0x2c46c4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46c0) {
            ctx->pc = 0x2C46F4u;
            goto label_2c46f4;
        }
    }
    ctx->pc = 0x2C46C8u;
    // 0x2c46c8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2c46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2c46cc: 0x0  nop
    ctx->pc = 0x2c46ccu;
    // NOP
label_2c46d0:
    // 0x2c46d0: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x2c46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2c46d4: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2c46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c46d8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c46dc: 0xae4300dc  sw          $v1, 0xDC($s2)
    ctx->pc = 0x2c46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 3));
    // 0x2c46e0: 0xacb20004  sw          $s2, 0x4($a1)
    ctx->pc = 0x2c46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 18));
    // 0x2c46e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c46e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46e8: 0x5640fff9  bnel        $s2, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C46E8u;
    {
        const bool branch_taken_0x2c46e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c46e8) {
            ctx->pc = 0x2C46ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C46E8u;
            // 0x2c46ec: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C46D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c46d0;
        }
    }
    ctx->pc = 0x2C46F0u;
label_2c46f0:
    // 0x2c46f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2c46f4:
    // 0x2c46f4: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x2c46f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2c46f8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2c46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2c46fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2c46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c4700: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c4700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c4704: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2c4708: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2c4708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c470c: 0x1440f6ba  bnez        $v0, . + 4 + (-0x946 << 2)
    ctx->pc = 0x2C470Cu;
    {
        const bool branch_taken_0x2c470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C470Cu;
        // 0x2c4710: 0xafa600a4  sw          $a2, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c470c) {
            ctx->pc = 0x2C21F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c21f8;
        }
    }
    ctx->pc = 0x2C4714u;
label_2c4714:
    // 0x2c4714: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4718: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2c471c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2C471Cu;
    {
        const bool branch_taken_0x2c471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C471Cu;
        // 0x2c4720: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c471c) {
            ctx->pc = 0x2C487Cu;
            goto label_2c487c;
        }
    }
    ctx->pc = 0x2C4724u;
    // 0x2c4724: 0x8c9900d4  lw          $t9, 0xD4($a0)
    ctx->pc = 0x2c4724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2c4728: 0x241e0028  addiu       $fp, $zero, 0x28
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c472c: 0x0  nop
    ctx->pc = 0x2c472cu;
    // NOP
label_2c4730:
    // 0x2c4730: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2c4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2c4734: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2c4734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2c4738: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x2c4738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c473c: 0x593821  addu        $a3, $v0, $t9
    ctx->pc = 0x2c473cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2c4740: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2c4744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4748: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2C4748u;
    {
        const bool branch_taken_0x2c4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4748u;
        // 0x2c474c: 0x24780001  addiu       $t8, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4748) {
            ctx->pc = 0x2C486Cu;
            goto label_2c486c;
        }
    }
    ctx->pc = 0x2C4750u;
    // 0x2c4750: 0x24ed0020  addiu       $t5, $a3, 0x20
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2c4754: 0xa4e00020  sh          $zero, 0x20($a3)
    ctx->pc = 0x2c4754u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4758: 0xa5a00002  sh          $zero, 0x2($t5)
    ctx->pc = 0x2c4758u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c475c: 0xa5a00004  sh          $zero, 0x4($t5)
    ctx->pc = 0x2c475cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4760: 0xa5a00006  sh          $zero, 0x6($t5)
    ctx->pc = 0x2c4760u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4764: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2c4764u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x2c4768: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2c4768u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c476c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c476cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4770: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2c4774: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C4774u;
    {
        const bool branch_taken_0x2c4774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4774u;
        // 0x2c4778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4774) {
            ctx->pc = 0x2C486Cu;
            goto label_2c486c;
        }
    }
    ctx->pc = 0x2C477Cu;
    // 0x2c477c: 0x8cf70000  lw          $s7, 0x0($a3)
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c4780: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c4780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4784: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x2c4784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c478c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2c478cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4790: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2c4790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c4794: 0x0  nop
    ctx->pc = 0x2c4794u;
    // NOP
label_2c4798:
    // 0x2c4798: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x2c4798u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c479c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2c479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2c47a0: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2c47a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c47a4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c47a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c47a8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C47A8u;
    {
        const bool branch_taken_0x2c47a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47A8u;
        // 0x2c47ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47a8) {
            ctx->pc = 0x2C4854u;
            goto label_2c4854;
        }
    }
    ctx->pc = 0x2C47B0u;
    // 0x2c47b0: 0x15200029  bnez        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C47B0u;
    {
        const bool branch_taken_0x2c47b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47B0u;
        // 0x2c47b4: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47b0) {
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C47B8u;
    // 0x2c47b8: 0x978c8fb8  lhu         $t4, -0x7048($gp)
    ctx->pc = 0x2c47b8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x2c47bc: 0x2325821  addu        $t3, $s1, $s2
    ctx->pc = 0x2c47bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2c47c0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c47c4: 0x1ed2821  addu        $a1, $t7, $t5
    ctx->pc = 0x2c47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x2c47c8: 0x1cc5018  mult        $t2, $t6, $t4
    ctx->pc = 0x2c47c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2c47cc: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x2c47ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c47d0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2c47d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c47d4: 0x0  nop
    ctx->pc = 0x2c47d4u;
    // NOP
label_2c47d8:
    // 0x2c47d8: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x2c47d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c47dc: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x2c47dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c47e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c47e4: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x2c47e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c47e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C47E8u;
    {
        const bool branch_taken_0x2c47e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47E8u;
        // 0x2c47ec: 0x2dc20004  sltiu       $v0, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47e8) {
            ctx->pc = 0x2C4810u;
            goto label_2c4810;
        }
    }
    ctx->pc = 0x2C47F0u;
    // 0x2c47f0: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2c47f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2c47f4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2c47f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2c47f8: 0xacea001c  sw          $t2, 0x1C($a3)
    ctx->pc = 0x2c47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 10));
    // 0x2c47fc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2c4800: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2c4804: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x2c4808: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2c4808u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2c480c: 0x2dc20004  sltiu       $v0, $t6, 0x4
    ctx->pc = 0x2c480cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2c4810:
    // 0x2c4810: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4810u;
    {
        const bool branch_taken_0x2c4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4810) {
            ctx->pc = 0x2C4814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4810u;
            // 0x2c4814: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4838u;
            goto label_2c4838;
        }
    }
    ctx->pc = 0x2C4818u;
    // 0x2c4818: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x2c4818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c481c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2c481cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4820: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x2c4820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2c4824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c4824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4828: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2c4828u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c482c: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x2c482cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c4830: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4834: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x2c4834u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
label_2c4838:
    // 0x2c4838: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c4838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c483c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c483cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4840: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c4840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c4844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4844u;
    {
        const bool branch_taken_0x2c4844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4844u;
        // 0x2c4848: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4844) {
            ctx->pc = 0x2C4854u;
            goto label_2c4854;
        }
    }
    ctx->pc = 0x2C484Cu;
    // 0x2c484c: 0x5120ffe2  beql        $t1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C484Cu;
    {
        const bool branch_taken_0x2c484c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c484c) {
            ctx->pc = 0x2C4850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C484Cu;
            // 0x2c4850: 0x8d060000  lw          $a2, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C47D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c47d8;
        }
    }
    ctx->pc = 0x2C4854u;
label_2c4854:
    // 0x2c4854: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2c4854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c4858:
    // 0x2c4858: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x2c4858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c485c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C485Cu;
    {
        const bool branch_taken_0x2c485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C485Cu;
        // 0x2c4860: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c485c) {
            ctx->pc = 0x2C4870u;
            goto label_2c4870;
        }
    }
    ctx->pc = 0x2C4864u;
    // 0x2c4864: 0x1120ffcc  beqz        $t1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2C4864u;
    {
        const bool branch_taken_0x2c4864 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4864u;
        // 0x2c4868: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4864) {
            ctx->pc = 0x2C4798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4798;
        }
    }
    ctx->pc = 0x2C486Cu;
label_2c486c:
    // 0x2c486c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c4870:
    // 0x2c4870: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2c4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2c4874: 0x1702ffae  bne         $t8, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2C4874u;
    {
        const bool branch_taken_0x2c4874 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4874u;
        // 0x2c4878: 0xafb800a4  sw          $t8, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4874) {
            ctx->pc = 0x2C4730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4730;
        }
    }
    ctx->pc = 0x2C487Cu;
label_2c487c:
    // 0x2c487c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c4880:
    // 0x2c4880: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2c4880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c4884: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2c4884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c4888: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2c4888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c488c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2c488cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c4890: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2c4890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c4894: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2c4894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c4898: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2c4898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c489c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2c489cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c48a0: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2c48a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c48a4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2c48a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c48a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C48A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48A8u;
        // 0x2c48ac: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C48A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C48B0u;
}

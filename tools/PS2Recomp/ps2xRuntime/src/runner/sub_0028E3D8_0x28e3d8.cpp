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

// Function: sub_0028E3D8
// Address: 0x28e3d8 - 0x28e5b0
void sub_0028E3D8_0x28e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E3D8_0x28e3d8");
#endif

    switch (ctx->pc) {
        case 0x28e3d8u: goto label_28e3d8;
        case 0x28e3dcu: goto label_28e3dc;
        case 0x28e3e0u: goto label_28e3e0;
        case 0x28e3e4u: goto label_28e3e4;
        case 0x28e3e8u: goto label_28e3e8;
        case 0x28e3ecu: goto label_28e3ec;
        case 0x28e3f0u: goto label_28e3f0;
        case 0x28e3f4u: goto label_28e3f4;
        case 0x28e3f8u: goto label_28e3f8;
        case 0x28e3fcu: goto label_28e3fc;
        case 0x28e400u: goto label_28e400;
        case 0x28e404u: goto label_28e404;
        case 0x28e408u: goto label_28e408;
        case 0x28e40cu: goto label_28e40c;
        case 0x28e410u: goto label_28e410;
        case 0x28e414u: goto label_28e414;
        case 0x28e418u: goto label_28e418;
        case 0x28e41cu: goto label_28e41c;
        case 0x28e420u: goto label_28e420;
        case 0x28e424u: goto label_28e424;
        case 0x28e428u: goto label_28e428;
        case 0x28e42cu: goto label_28e42c;
        case 0x28e430u: goto label_28e430;
        case 0x28e434u: goto label_28e434;
        case 0x28e438u: goto label_28e438;
        case 0x28e43cu: goto label_28e43c;
        case 0x28e440u: goto label_28e440;
        case 0x28e444u: goto label_28e444;
        case 0x28e448u: goto label_28e448;
        case 0x28e44cu: goto label_28e44c;
        case 0x28e450u: goto label_28e450;
        case 0x28e454u: goto label_28e454;
        case 0x28e458u: goto label_28e458;
        case 0x28e45cu: goto label_28e45c;
        case 0x28e460u: goto label_28e460;
        case 0x28e464u: goto label_28e464;
        case 0x28e468u: goto label_28e468;
        case 0x28e46cu: goto label_28e46c;
        case 0x28e470u: goto label_28e470;
        case 0x28e474u: goto label_28e474;
        case 0x28e478u: goto label_28e478;
        case 0x28e47cu: goto label_28e47c;
        case 0x28e480u: goto label_28e480;
        case 0x28e484u: goto label_28e484;
        case 0x28e488u: goto label_28e488;
        case 0x28e48cu: goto label_28e48c;
        case 0x28e490u: goto label_28e490;
        case 0x28e494u: goto label_28e494;
        case 0x28e498u: goto label_28e498;
        case 0x28e49cu: goto label_28e49c;
        case 0x28e4a0u: goto label_28e4a0;
        case 0x28e4a4u: goto label_28e4a4;
        case 0x28e4a8u: goto label_28e4a8;
        case 0x28e4acu: goto label_28e4ac;
        case 0x28e4b0u: goto label_28e4b0;
        case 0x28e4b4u: goto label_28e4b4;
        case 0x28e4b8u: goto label_28e4b8;
        case 0x28e4bcu: goto label_28e4bc;
        case 0x28e4c0u: goto label_28e4c0;
        case 0x28e4c4u: goto label_28e4c4;
        case 0x28e4c8u: goto label_28e4c8;
        case 0x28e4ccu: goto label_28e4cc;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4d4u: goto label_28e4d4;
        case 0x28e4d8u: goto label_28e4d8;
        case 0x28e4dcu: goto label_28e4dc;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4e4u: goto label_28e4e4;
        case 0x28e4e8u: goto label_28e4e8;
        case 0x28e4ecu: goto label_28e4ec;
        case 0x28e4f0u: goto label_28e4f0;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e4f8u: goto label_28e4f8;
        case 0x28e4fcu: goto label_28e4fc;
        case 0x28e500u: goto label_28e500;
        case 0x28e504u: goto label_28e504;
        case 0x28e508u: goto label_28e508;
        case 0x28e50cu: goto label_28e50c;
        case 0x28e510u: goto label_28e510;
        case 0x28e514u: goto label_28e514;
        case 0x28e518u: goto label_28e518;
        case 0x28e51cu: goto label_28e51c;
        case 0x28e520u: goto label_28e520;
        case 0x28e524u: goto label_28e524;
        case 0x28e528u: goto label_28e528;
        case 0x28e52cu: goto label_28e52c;
        case 0x28e530u: goto label_28e530;
        case 0x28e534u: goto label_28e534;
        case 0x28e538u: goto label_28e538;
        case 0x28e53cu: goto label_28e53c;
        case 0x28e540u: goto label_28e540;
        case 0x28e544u: goto label_28e544;
        case 0x28e548u: goto label_28e548;
        case 0x28e54cu: goto label_28e54c;
        case 0x28e550u: goto label_28e550;
        case 0x28e554u: goto label_28e554;
        case 0x28e558u: goto label_28e558;
        case 0x28e55cu: goto label_28e55c;
        case 0x28e560u: goto label_28e560;
        case 0x28e564u: goto label_28e564;
        case 0x28e568u: goto label_28e568;
        case 0x28e56cu: goto label_28e56c;
        case 0x28e570u: goto label_28e570;
        case 0x28e574u: goto label_28e574;
        case 0x28e578u: goto label_28e578;
        case 0x28e57cu: goto label_28e57c;
        case 0x28e580u: goto label_28e580;
        case 0x28e584u: goto label_28e584;
        case 0x28e588u: goto label_28e588;
        case 0x28e58cu: goto label_28e58c;
        case 0x28e590u: goto label_28e590;
        case 0x28e594u: goto label_28e594;
        case 0x28e598u: goto label_28e598;
        case 0x28e59cu: goto label_28e59c;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5a4u: goto label_28e5a4;
        case 0x28e5a8u: goto label_28e5a8;
        case 0x28e5acu: goto label_28e5ac;
        default: break;
    }

    ctx->pc = 0x28e3d8u;

label_28e3d8:
    // 0x28e3d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28e3dc:
    // 0x28e3dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28e3e0:
    // 0x28e3e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28e3e4:
    // 0x28e3e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28e3e8:
    // 0x28e3e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e3ec:
    // 0x28e3ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28e3f0:
    // 0x28e3f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28e3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28e3f4:
    // 0x28e3f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28e3f8:
    // 0x28e3f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_28e3fc:
    // 0x28e3fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_28e400:
    // 0x28e400: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x28e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_28e404:
    // 0x28e404: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_28e408:
    // 0x28e408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28e40c:
    // 0x28e40c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x28e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_28e410:
    // 0x28e410: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_28e414:
    if (ctx->pc == 0x28E414u) {
        ctx->pc = 0x28E418u;
        goto label_28e418;
    }
    ctx->pc = 0x28E410u;
    {
        const bool branch_taken_0x28e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e410) {
            ctx->pc = 0x28E488u;
            goto label_28e488;
        }
    }
    ctx->pc = 0x28E418u;
label_28e418:
    // 0x28e418: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x28e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28e41c:
    // 0x28e41c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x28e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28e420:
    // 0x28e420: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28e424:
    // 0x28e424: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x28e424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_28e428:
    // 0x28e428: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28e42c:
    // 0x28e42c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28e430:
    // 0x28e430: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28e434:
    // 0x28e434: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x28e434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28e438:
    // 0x28e438: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28e43c:
    // 0x28e43c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x28e43cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28e440:
    // 0x28e440: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28e444:
    // 0x28e444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28e448:
    // 0x28e448: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28e448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_28e44c:
    // 0x28e44c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28e450:
    // 0x28e450: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28e454:
    // 0x28e454: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28e458:
    // 0x28e458: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_28e45c:
    // 0x28e45c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28e460:
    // 0x28e460: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28e464:
    // 0x28e464: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x28e464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_28e468:
    // 0x28e468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28e468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28e46c:
    // 0x28e46c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x28e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_28e470:
    // 0x28e470: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_28e474:
    // 0x28e474: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28e474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_28e478:
    // 0x28e478: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28e47c:
    // 0x28e47c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28e480:
    // 0x28e480: 0x1000003d  b           . + 4 + (0x3D << 2)
label_28e484:
    if (ctx->pc == 0x28E484u) {
        ctx->pc = 0x28E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E480u;
        // 0x28e484: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E488u;
        goto label_28e488;
    }
    ctx->pc = 0x28E480u;
    {
        const bool branch_taken_0x28e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E480u;
        // 0x28e484: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e480) {
            ctx->pc = 0x28E578u;
            goto label_28e578;
        }
    }
    ctx->pc = 0x28E488u;
label_28e488:
    // 0x28e488: 0xc0a37be  jal         func_28DEF8
label_28e48c:
    if (ctx->pc == 0x28E48Cu) {
        ctx->pc = 0x28E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E488u;
        // 0x28e48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E490u;
        goto label_28e490;
    }
    ctx->pc = 0x28E488u;
    SET_GPR_U32(ctx, 31, 0x28E490u);
    ctx->pc = 0x28E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E488u;
    // 0x28e48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28DEF8u, 0x28E488u, 0x28E490u)) {
        return;
    }
    ctx->pc = 0x28E490u;
label_28e490:
    // 0x28e490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e494:
    // 0x28e494: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_28e498:
    if (ctx->pc == 0x28E498u) {
        ctx->pc = 0x28E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E494u;
        // 0x28e498: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E49Cu;
        goto label_28e49c;
    }
    ctx->pc = 0x28E494u;
    {
        const bool branch_taken_0x28e494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E494u;
        // 0x28e498: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e494) {
            ctx->pc = 0x28E57Cu;
            goto label_28e57c;
        }
    }
    ctx->pc = 0x28E49Cu;
label_28e49c:
    // 0x28e49c: 0xc0a3812  jal         func_28E048
label_28e4a0:
    if (ctx->pc == 0x28E4A0u) {
        ctx->pc = 0x28E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E49Cu;
        // 0x28e4a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4A4u;
        goto label_28e4a4;
    }
    ctx->pc = 0x28E49Cu;
    SET_GPR_U32(ctx, 31, 0x28E4A4u);
    ctx->pc = 0x28E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E49Cu;
    // 0x28e4a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E048u, 0x28E49Cu, 0x28E4A4u)) {
        return;
    }
    ctx->pc = 0x28E4A4u;
label_28e4a4:
    // 0x28e4a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_28e4a8:
    if (ctx->pc == 0x28E4A8u) {
        ctx->pc = 0x28E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A4u;
        // 0x28e4a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4ACu;
        goto label_28e4ac;
    }
    ctx->pc = 0x28E4A4u;
    {
        const bool branch_taken_0x28e4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A4u;
        // 0x28e4a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4a4) {
            ctx->pc = 0x28E4C0u;
            goto label_28e4c0;
        }
    }
    ctx->pc = 0x28E4ACu;
label_28e4ac:
    // 0x28e4ac: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x28e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28e4b0:
    // 0x28e4b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e4b4:
    // 0x28e4b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28e4b8:
    // 0x28e4b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e4bc:
    if (ctx->pc == 0x28E4BCu) {
        ctx->pc = 0x28E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4B8u;
        // 0x28e4bc: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4C0u;
        goto label_28e4c0;
    }
    ctx->pc = 0x28E4B8u;
    {
        const bool branch_taken_0x28e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4B8u;
        // 0x28e4bc: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4b8) {
            ctx->pc = 0x28E4C8u;
            goto label_28e4c8;
        }
    }
    ctx->pc = 0x28E4C0u;
label_28e4c0:
    // 0x28e4c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28e4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e4c4:
    // 0x28e4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e4c8:
    // 0x28e4c8: 0xc0a3868  jal         func_28E1A0
label_28e4cc:
    if (ctx->pc == 0x28E4CCu) {
        ctx->pc = 0x28E4D0u;
        goto label_28e4d0;
    }
    ctx->pc = 0x28E4C8u;
    SET_GPR_U32(ctx, 31, 0x28E4D0u);
    ctx->pc = 0x28E1A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E1A0u, 0x28E4C8u, 0x28E4D0u)) {
        return;
    }
    ctx->pc = 0x28E4D0u;
label_28e4d0:
    // 0x28e4d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e4d4:
    // 0x28e4d4: 0xc0a38f6  jal         func_28E3D8
label_28e4d8:
    if (ctx->pc == 0x28E4D8u) {
        ctx->pc = 0x28E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4D4u;
        // 0x28e4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4DCu;
        goto label_28e4dc;
    }
    ctx->pc = 0x28E4D4u;
    SET_GPR_U32(ctx, 31, 0x28E4DCu);
    ctx->pc = 0x28E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4D4u;
    // 0x28e4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E3D8u;
    goto label_28e3d8;
    ctx->pc = 0x28E4DCu;
label_28e4dc:
    // 0x28e4dc: 0xc0a38f6  jal         func_28E3D8
label_28e4e0:
    if (ctx->pc == 0x28E4E0u) {
        ctx->pc = 0x28E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4DCu;
        // 0x28e4e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4E4u;
        goto label_28e4e4;
    }
    ctx->pc = 0x28E4DCu;
    SET_GPR_U32(ctx, 31, 0x28E4E4u);
    ctx->pc = 0x28E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4DCu;
    // 0x28e4e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E3D8u;
    goto label_28e3d8;
    ctx->pc = 0x28E4E4u;
label_28e4e4:
    // 0x28e4e4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_28e4e8:
    if (ctx->pc == 0x28E4E8u) {
        ctx->pc = 0x28E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4E4u;
        // 0x28e4e8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4ECu;
        goto label_28e4ec;
    }
    ctx->pc = 0x28E4E4u;
    {
        const bool branch_taken_0x28e4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4E4u;
        // 0x28e4e8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4e4) {
            ctx->pc = 0x28E578u;
            goto label_28e578;
        }
    }
    ctx->pc = 0x28E4ECu;
label_28e4ec:
    // 0x28e4ec: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x28e4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28e4f0:
    // 0x28e4f0: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
label_28e4f4:
    // 0x28e4f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_28e4f8:
    // 0x28e4f8: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_28e4fc:
    if (ctx->pc == 0x28E4FCu) {
        ctx->pc = 0x28E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4F8u;
        // 0x28e4fc: 0x3c1e0070  lui         $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E500u;
        goto label_28e500;
    }
    ctx->pc = 0x28E4F8u;
    {
        const bool branch_taken_0x28e4f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4F8u;
        // 0x28e4fc: 0x3c1e0070  lui         $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4f8) {
            ctx->pc = 0x28E53Cu;
            goto label_28e53c;
        }
    }
    ctx->pc = 0x28E500u;
label_28e500:
    // 0x28e500: 0x26d70fc8  addiu       $s7, $s6, 0xFC8
    ctx->pc = 0x28e500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_28e504:
    // 0x28e504: 0x27d563b0  addiu       $s5, $fp, 0x63B0
    ctx->pc = 0x28e504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 25520));
label_28e508:
    // 0x28e508: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x28e508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e50c:
    // 0x28e50c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x28e50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e510:
    // 0x28e510: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_28e514:
    if (ctx->pc == 0x28E514u) {
        ctx->pc = 0x28E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E510u;
        // 0x28e514: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E518u;
        goto label_28e518;
    }
    ctx->pc = 0x28E510u;
    {
        const bool branch_taken_0x28e510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E510u;
        // 0x28e514: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e510) {
            ctx->pc = 0x28E530u;
            goto label_28e530;
        }
    }
    ctx->pc = 0x28E518u;
label_28e518:
    // 0x28e518: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x28e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_28e51c:
    // 0x28e51c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28e51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e520:
    // 0x28e520: 0x8ea40534  lw          $a0, 0x534($s5)
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_28e524:
    // 0x28e524: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28e524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28e528:
    // 0x28e528: 0x40f809  jalr        $v0
label_28e52c:
    if (ctx->pc == 0x28E52Cu) {
        ctx->pc = 0x28E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E528u;
        // 0x28e52c: 0xac740004  sw          $s4, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E530u;
        goto label_28e530;
    }
    ctx->pc = 0x28E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E530u);
        ctx->pc = 0x28E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E528u;
        // 0x28e52c: 0xac740004  sw          $s4, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E528u, 0x28E530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E530u;
label_28e530:
    // 0x28e530: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x28e530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e534:
    // 0x28e534: 0x1472fff6  bne         $v1, $s2, . + 4 + (-0xA << 2)
label_28e538:
    if (ctx->pc == 0x28E538u) {
        ctx->pc = 0x28E53Cu;
        goto label_28e53c;
    }
    ctx->pc = 0x28E534u;
    {
        const bool branch_taken_0x28e534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x28e534) {
            ctx->pc = 0x28E510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e510;
        }
    }
    ctx->pc = 0x28E53Cu;
label_28e53c:
    // 0x28e53c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x28e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_28e540:
    // 0x28e540: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28e544:
    if (ctx->pc == 0x28E544u) {
        ctx->pc = 0x28E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E540u;
        // 0x28e544: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E548u;
        goto label_28e548;
    }
    ctx->pc = 0x28E540u;
    {
        const bool branch_taken_0x28e540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E540u;
        // 0x28e544: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e540) {
            ctx->pc = 0x28E554u;
            goto label_28e554;
        }
    }
    ctx->pc = 0x28E548u;
label_28e548:
    // 0x28e548: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x28e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_28e54c:
    // 0x28e54c: 0x40f809  jalr        $v0
label_28e550:
    if (ctx->pc == 0x28E550u) {
        ctx->pc = 0x28E554u;
        goto label_28e554;
    }
    ctx->pc = 0x28E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E54Cu, 0x28E554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E554u;
label_28e554:
    // 0x28e554: 0x26c30fc8  addiu       $v1, $s6, 0xFC8
    ctx->pc = 0x28e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_28e558:
    // 0x28e558: 0x27c663b0  addiu       $a2, $fp, 0x63B0
    ctx->pc = 0x28e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 25520));
label_28e55c:
    // 0x28e55c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x28e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_28e560:
    // 0x28e560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e564:
    // 0x28e564: 0x8cc40538  lw          $a0, 0x538($a2)
    ctx->pc = 0x28e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1336)));
label_28e568:
    // 0x28e568: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x28e568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_28e56c:
    // 0x28e56c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x28e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_28e570:
    // 0x28e570: 0x40f809  jalr        $v0
label_28e574:
    if (ctx->pc == 0x28E574u) {
        ctx->pc = 0x28E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E570u;
        // 0x28e574: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E578u;
        goto label_28e578;
    }
    ctx->pc = 0x28E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E578u);
        ctx->pc = 0x28E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E570u;
        // 0x28e574: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E570u, 0x28E578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E578u;
label_28e578:
    // 0x28e578: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28e578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e57c:
    // 0x28e57c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28e57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e580:
    // 0x28e580: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28e580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28e584:
    // 0x28e584: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28e584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e588:
    // 0x28e588: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28e588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e58c:
    // 0x28e58c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28e58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e590:
    // 0x28e590: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28e590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e594:
    // 0x28e594: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x28e594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e598:
    // 0x28e598: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x28e598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e59c:
    // 0x28e59c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x28e59cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e5a0:
    // 0x28e5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e5a4:
    // 0x28e5a4: 0x3e00008  jr          $ra
label_28e5a8:
    if (ctx->pc == 0x28E5A8u) {
        ctx->pc = 0x28E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A4u;
        // 0x28e5a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5ACu;
        goto label_28e5ac;
    }
    ctx->pc = 0x28E5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A4u;
        // 0x28e5a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E5ACu;
label_28e5ac:
    // 0x28e5ac: 0x0  nop
    ctx->pc = 0x28e5acu;
    // NOP
    ctx->pc = 0x28e5b0u;
}

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

// Function: sub_0024E278
// Address: 0x24e278 - 0x24e560
void sub_0024E278_0x24e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E278_0x24e278");
#endif

    switch (ctx->pc) {
        case 0x24e278u: goto label_24e278;
        case 0x24e27cu: goto label_24e27c;
        case 0x24e280u: goto label_24e280;
        case 0x24e284u: goto label_24e284;
        case 0x24e288u: goto label_24e288;
        case 0x24e28cu: goto label_24e28c;
        case 0x24e290u: goto label_24e290;
        case 0x24e294u: goto label_24e294;
        case 0x24e298u: goto label_24e298;
        case 0x24e29cu: goto label_24e29c;
        case 0x24e2a0u: goto label_24e2a0;
        case 0x24e2a4u: goto label_24e2a4;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e2acu: goto label_24e2ac;
        case 0x24e2b0u: goto label_24e2b0;
        case 0x24e2b4u: goto label_24e2b4;
        case 0x24e2b8u: goto label_24e2b8;
        case 0x24e2bcu: goto label_24e2bc;
        case 0x24e2c0u: goto label_24e2c0;
        case 0x24e2c4u: goto label_24e2c4;
        case 0x24e2c8u: goto label_24e2c8;
        case 0x24e2ccu: goto label_24e2cc;
        case 0x24e2d0u: goto label_24e2d0;
        case 0x24e2d4u: goto label_24e2d4;
        case 0x24e2d8u: goto label_24e2d8;
        case 0x24e2dcu: goto label_24e2dc;
        case 0x24e2e0u: goto label_24e2e0;
        case 0x24e2e4u: goto label_24e2e4;
        case 0x24e2e8u: goto label_24e2e8;
        case 0x24e2ecu: goto label_24e2ec;
        case 0x24e2f0u: goto label_24e2f0;
        case 0x24e2f4u: goto label_24e2f4;
        case 0x24e2f8u: goto label_24e2f8;
        case 0x24e2fcu: goto label_24e2fc;
        case 0x24e300u: goto label_24e300;
        case 0x24e304u: goto label_24e304;
        case 0x24e308u: goto label_24e308;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e310u: goto label_24e310;
        case 0x24e314u: goto label_24e314;
        case 0x24e318u: goto label_24e318;
        case 0x24e31cu: goto label_24e31c;
        case 0x24e320u: goto label_24e320;
        case 0x24e324u: goto label_24e324;
        case 0x24e328u: goto label_24e328;
        case 0x24e32cu: goto label_24e32c;
        case 0x24e330u: goto label_24e330;
        case 0x24e334u: goto label_24e334;
        case 0x24e338u: goto label_24e338;
        case 0x24e33cu: goto label_24e33c;
        case 0x24e340u: goto label_24e340;
        case 0x24e344u: goto label_24e344;
        case 0x24e348u: goto label_24e348;
        case 0x24e34cu: goto label_24e34c;
        case 0x24e350u: goto label_24e350;
        case 0x24e354u: goto label_24e354;
        case 0x24e358u: goto label_24e358;
        case 0x24e35cu: goto label_24e35c;
        case 0x24e360u: goto label_24e360;
        case 0x24e364u: goto label_24e364;
        case 0x24e368u: goto label_24e368;
        case 0x24e36cu: goto label_24e36c;
        case 0x24e370u: goto label_24e370;
        case 0x24e374u: goto label_24e374;
        case 0x24e378u: goto label_24e378;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e380u: goto label_24e380;
        case 0x24e384u: goto label_24e384;
        case 0x24e388u: goto label_24e388;
        case 0x24e38cu: goto label_24e38c;
        case 0x24e390u: goto label_24e390;
        case 0x24e394u: goto label_24e394;
        case 0x24e398u: goto label_24e398;
        case 0x24e39cu: goto label_24e39c;
        case 0x24e3a0u: goto label_24e3a0;
        case 0x24e3a4u: goto label_24e3a4;
        case 0x24e3a8u: goto label_24e3a8;
        case 0x24e3acu: goto label_24e3ac;
        case 0x24e3b0u: goto label_24e3b0;
        case 0x24e3b4u: goto label_24e3b4;
        case 0x24e3b8u: goto label_24e3b8;
        case 0x24e3bcu: goto label_24e3bc;
        case 0x24e3c0u: goto label_24e3c0;
        case 0x24e3c4u: goto label_24e3c4;
        case 0x24e3c8u: goto label_24e3c8;
        case 0x24e3ccu: goto label_24e3cc;
        case 0x24e3d0u: goto label_24e3d0;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e3dcu: goto label_24e3dc;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e3e4u: goto label_24e3e4;
        case 0x24e3e8u: goto label_24e3e8;
        case 0x24e3ecu: goto label_24e3ec;
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        case 0x24e460u: goto label_24e460;
        case 0x24e464u: goto label_24e464;
        case 0x24e468u: goto label_24e468;
        case 0x24e46cu: goto label_24e46c;
        case 0x24e470u: goto label_24e470;
        case 0x24e474u: goto label_24e474;
        case 0x24e478u: goto label_24e478;
        case 0x24e47cu: goto label_24e47c;
        case 0x24e480u: goto label_24e480;
        case 0x24e484u: goto label_24e484;
        case 0x24e488u: goto label_24e488;
        case 0x24e48cu: goto label_24e48c;
        case 0x24e490u: goto label_24e490;
        case 0x24e494u: goto label_24e494;
        case 0x24e498u: goto label_24e498;
        case 0x24e49cu: goto label_24e49c;
        case 0x24e4a0u: goto label_24e4a0;
        case 0x24e4a4u: goto label_24e4a4;
        case 0x24e4a8u: goto label_24e4a8;
        case 0x24e4acu: goto label_24e4ac;
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e4b4u: goto label_24e4b4;
        case 0x24e4b8u: goto label_24e4b8;
        case 0x24e4bcu: goto label_24e4bc;
        case 0x24e4c0u: goto label_24e4c0;
        case 0x24e4c4u: goto label_24e4c4;
        case 0x24e4c8u: goto label_24e4c8;
        case 0x24e4ccu: goto label_24e4cc;
        case 0x24e4d0u: goto label_24e4d0;
        case 0x24e4d4u: goto label_24e4d4;
        case 0x24e4d8u: goto label_24e4d8;
        case 0x24e4dcu: goto label_24e4dc;
        case 0x24e4e0u: goto label_24e4e0;
        case 0x24e4e4u: goto label_24e4e4;
        case 0x24e4e8u: goto label_24e4e8;
        case 0x24e4ecu: goto label_24e4ec;
        case 0x24e4f0u: goto label_24e4f0;
        case 0x24e4f4u: goto label_24e4f4;
        case 0x24e4f8u: goto label_24e4f8;
        case 0x24e4fcu: goto label_24e4fc;
        case 0x24e500u: goto label_24e500;
        case 0x24e504u: goto label_24e504;
        case 0x24e508u: goto label_24e508;
        case 0x24e50cu: goto label_24e50c;
        case 0x24e510u: goto label_24e510;
        case 0x24e514u: goto label_24e514;
        case 0x24e518u: goto label_24e518;
        case 0x24e51cu: goto label_24e51c;
        case 0x24e520u: goto label_24e520;
        case 0x24e524u: goto label_24e524;
        case 0x24e528u: goto label_24e528;
        case 0x24e52cu: goto label_24e52c;
        case 0x24e530u: goto label_24e530;
        case 0x24e534u: goto label_24e534;
        case 0x24e538u: goto label_24e538;
        case 0x24e53cu: goto label_24e53c;
        case 0x24e540u: goto label_24e540;
        case 0x24e544u: goto label_24e544;
        case 0x24e548u: goto label_24e548;
        case 0x24e54cu: goto label_24e54c;
        case 0x24e550u: goto label_24e550;
        case 0x24e554u: goto label_24e554;
        case 0x24e558u: goto label_24e558;
        case 0x24e55cu: goto label_24e55c;
        default: break;
    }

    ctx->pc = 0x24e278u;

label_24e278:
    // 0x24e278: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24e278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24e27c:
    // 0x24e27c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_24e280:
    // 0x24e280: 0x8c423f78  lw          $v0, 0x3F78($v0)
    ctx->pc = 0x24e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16248)));
label_24e284:
    // 0x24e284: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x24e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_24e288:
    // 0x24e288: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x24e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_24e28c:
    // 0x24e28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24e28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e290:
    // 0x24e290: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24e294:
    // 0x24e294: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24e294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24e298:
    // 0x24e298: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x24e298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_24e29c:
    // 0x24e29c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24e29cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24e2a0:
    // 0x24e2a0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x24e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_24e2a4:
    // 0x24e2a4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x24e2a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24e2a8:
    // 0x24e2a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x24e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_24e2ac:
    // 0x24e2ac: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x24e2acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_24e2b0:
    // 0x24e2b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x24e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_24e2b4:
    // 0x24e2b4: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x24e2b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_24e2b8:
    // 0x24e2b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x24e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_24e2bc:
    // 0x24e2bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x24e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_24e2c0:
    // 0x24e2c0: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_24e2c4:
    if (ctx->pc == 0x24E2C4u) {
        ctx->pc = 0x24E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C0u;
        // 0x24e2c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2C8u;
        goto label_24e2c8;
    }
    ctx->pc = 0x24E2C0u;
    {
        const bool branch_taken_0x24e2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C0u;
        // 0x24e2c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2c0) {
            ctx->pc = 0x24E528u;
            goto label_24e528;
        }
    }
    ctx->pc = 0x24E2C8u;
label_24e2c8:
    // 0x24e2c8: 0xc0895e0  jal         func_225780
label_24e2cc:
    if (ctx->pc == 0x24E2CCu) {
        ctx->pc = 0x24E2D0u;
        goto label_24e2d0;
    }
    ctx->pc = 0x24E2C8u;
    SET_GPR_U32(ctx, 31, 0x24E2D0u);
    ctx->pc = 0x225780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225780u, 0x24E2C8u, 0x24E2D0u)) {
        return;
    }
    ctx->pc = 0x24E2D0u;
label_24e2d0:
    // 0x24e2d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24e2d4:
    if (ctx->pc == 0x24E2D4u) {
        ctx->pc = 0x24E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2D0u;
        // 0x24e2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2D8u;
        goto label_24e2d8;
    }
    ctx->pc = 0x24E2D0u;
    {
        const bool branch_taken_0x24e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2D0u;
        // 0x24e2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2d0) {
            ctx->pc = 0x24E300u;
            goto label_24e300;
        }
    }
    ctx->pc = 0x24E2D8u;
label_24e2d8:
    // 0x24e2d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24e2dc:
    // 0x24e2dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24e2e0:
    // 0x24e2e0: 0xc092848  jal         func_24A120
label_24e2e4:
    if (ctx->pc == 0x24E2E4u) {
        ctx->pc = 0x24E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2E0u;
        // 0x24e2e4: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2E8u;
        goto label_24e2e8;
    }
    ctx->pc = 0x24E2E0u;
    SET_GPR_U32(ctx, 31, 0x24E2E8u);
    ctx->pc = 0x24E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2E0u;
    // 0x24e2e4: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24E2E0u, 0x24E2E8u)) {
        return;
    }
    ctx->pc = 0x24E2E8u;
label_24e2e8:
    // 0x24e2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24e2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24e2ec:
    // 0x24e2ec: 0xc09281a  jal         func_24A068
label_24e2f0:
    if (ctx->pc == 0x24E2F0u) {
        ctx->pc = 0x24E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ECu;
        // 0x24e2f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2F4u;
        goto label_24e2f4;
    }
    ctx->pc = 0x24E2ECu;
    SET_GPR_U32(ctx, 31, 0x24E2F4u);
    ctx->pc = 0x24E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2ECu;
    // 0x24e2f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24E2ECu, 0x24E2F4u)) {
        return;
    }
    ctx->pc = 0x24E2F4u;
label_24e2f4:
    // 0x24e2f4: 0x1000008d  b           . + 4 + (0x8D << 2)
label_24e2f8:
    if (ctx->pc == 0x24E2F8u) {
        ctx->pc = 0x24E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2F4u;
        // 0x24e2f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2FCu;
        goto label_24e2fc;
    }
    ctx->pc = 0x24E2F4u;
    {
        const bool branch_taken_0x24e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2F4u;
        // 0x24e2f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2f4) {
            ctx->pc = 0x24E52Cu;
            goto label_24e52c;
        }
    }
    ctx->pc = 0x24E2FCu;
label_24e2fc:
    // 0x24e2fc: 0x0  nop
    ctx->pc = 0x24e2fcu;
    // NOP
label_24e300:
    // 0x24e300: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24e300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24e304:
    // 0x24e304: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24e304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_24e308:
    // 0x24e308: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24e308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e30c:
    // 0x24e30c: 0x2463c458  addiu       $v1, $v1, -0x3BA8
    ctx->pc = 0x24e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952024));
label_24e310:
    // 0x24e310: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24e314:
    // 0x24e314: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x24e314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_24e318:
    // 0x24e318: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_24e31c:
    if (ctx->pc == 0x24E31Cu) {
        ctx->pc = 0x24E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E318u;
        // 0x24e31c: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E320u;
        goto label_24e320;
    }
    ctx->pc = 0x24E318u;
    {
        const bool branch_taken_0x24e318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E318u;
        // 0x24e31c: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e318) {
            ctx->pc = 0x24E3F8u;
            goto label_24e3f8;
        }
    }
    ctx->pc = 0x24E320u;
label_24e320:
    // 0x24e320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e324:
    // 0x24e324: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_24e328:
    if (ctx->pc == 0x24E328u) {
        ctx->pc = 0x24E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E324u;
        // 0x24e328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E32Cu;
        goto label_24e32c;
    }
    ctx->pc = 0x24E324u;
    {
        const bool branch_taken_0x24e324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E324u;
        // 0x24e328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e324) {
            ctx->pc = 0x24E360u;
            goto label_24e360;
        }
    }
    ctx->pc = 0x24E32Cu;
label_24e32c:
    // 0x24e32c: 0x8f838568  lw          $v1, -0x7A98($gp)
    ctx->pc = 0x24e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
label_24e330:
    // 0x24e330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e334:
    // 0x24e334: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_24e338:
    if (ctx->pc == 0x24E338u) {
        ctx->pc = 0x24E33Cu;
        goto label_24e33c;
    }
    ctx->pc = 0x24E334u;
    {
        const bool branch_taken_0x24e334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e334) {
            ctx->pc = 0x24E360u;
            goto label_24e360;
        }
    }
    ctx->pc = 0x24E33Cu;
label_24e33c:
    // 0x24e33c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24e33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e340:
    // 0x24e340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24e344:
    // 0x24e344: 0x0  nop
    ctx->pc = 0x24e344u;
    // NOP
label_24e348:
    // 0x24e348: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x24e348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_24e34c:
    // 0x24e34c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24e350:
    if (ctx->pc == 0x24E350u) {
        ctx->pc = 0x24E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E34Cu;
        // 0x24e350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E354u;
        goto label_24e354;
    }
    ctx->pc = 0x24E34Cu;
    {
        const bool branch_taken_0x24e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E34Cu;
        // 0x24e350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e34c) {
            ctx->pc = 0x24E360u;
            goto label_24e360;
        }
    }
    ctx->pc = 0x24E354u;
label_24e354:
    // 0x24e354: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e358:
    // 0x24e358: 0x5622fffb  bnel        $s1, $v0, . + 4 + (-0x5 << 2)
label_24e35c:
    if (ctx->pc == 0x24E35Cu) {
        ctx->pc = 0x24E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E358u;
        // 0x24e35c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E360u;
        goto label_24e360;
    }
    ctx->pc = 0x24E358u;
    {
        const bool branch_taken_0x24e358 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e358) {
            ctx->pc = 0x24E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E358u;
            // 0x24e35c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e348;
        }
    }
    ctx->pc = 0x24E360u;
label_24e360:
    // 0x24e360: 0x54850026  bnel        $a0, $a1, . + 4 + (0x26 << 2)
label_24e364:
    if (ctx->pc == 0x24E364u) {
        ctx->pc = 0x24E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E360u;
        // 0x24e364: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E368u;
        goto label_24e368;
    }
    ctx->pc = 0x24E360u;
    {
        const bool branch_taken_0x24e360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x24e360) {
            ctx->pc = 0x24E364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E360u;
            // 0x24e364: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E368u;
label_24e368:
    // 0x24e368: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_24e36c:
    // 0x24e36c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24e370:
    // 0x24e370: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x24e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_24e374:
    // 0x24e374: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24e374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24e378:
    // 0x24e378: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x24e378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_24e37c:
    // 0x24e37c: 0x40f809  jalr        $v0
label_24e380:
    if (ctx->pc == 0x24E380u) {
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E384u;
        goto label_24e384;
    }
    ctx->pc = 0x24E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E384u);
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E37Cu, 0x24E384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E384u;
label_24e384:
    // 0x24e384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24e384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e388:
    // 0x24e388: 0x8f828568  lw          $v0, -0x7A98($gp)
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
label_24e38c:
    // 0x24e38c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_24e390:
    if (ctx->pc == 0x24E390u) {
        ctx->pc = 0x24E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E38Cu;
        // 0x24e390: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E394u;
        goto label_24e394;
    }
    ctx->pc = 0x24E38Cu;
    {
        const bool branch_taken_0x24e38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E38Cu;
        // 0x24e390: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e38c) {
            ctx->pc = 0x24E3DCu;
            goto label_24e3dc;
        }
    }
    ctx->pc = 0x24E394u;
label_24e394:
    // 0x24e394: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24e398:
    if (ctx->pc == 0x24E398u) {
        ctx->pc = 0x24E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E394u;
        // 0x24e398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E39Cu;
        goto label_24e39c;
    }
    ctx->pc = 0x24E394u;
    {
        const bool branch_taken_0x24e394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E394u;
        // 0x24e398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e394) {
            ctx->pc = 0x24E3C8u;
            goto label_24e3c8;
        }
    }
    ctx->pc = 0x24E39Cu;
label_24e39c:
    // 0x24e39c: 0x0  nop
    ctx->pc = 0x24e39cu;
    // NOP
label_24e3a0:
    // 0x24e3a0: 0x8f848568  lw          $a0, -0x7A98($gp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
label_24e3a4:
    // 0x24e3a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x24e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24e3a8:
    // 0x24e3a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24e3ac:
    // 0x24e3ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24e3b0:
    // 0x24e3b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e3b4:
    // 0x24e3b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_24e3b8:
    // 0x24e3b8: 0x8f82856c  lw          $v0, -0x7A94($gp)
    ctx->pc = 0x24e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
label_24e3bc:
    // 0x24e3bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x24e3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24e3c0:
    // 0x24e3c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_24e3c4:
    if (ctx->pc == 0x24E3C4u) {
        ctx->pc = 0x24E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C0u;
        // 0x24e3c4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3C8u;
        goto label_24e3c8;
    }
    ctx->pc = 0x24E3C0u;
    {
        const bool branch_taken_0x24e3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C0u;
        // 0x24e3c4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3c0) {
            ctx->pc = 0x24E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e3a0;
        }
    }
    ctx->pc = 0x24E3C8u;
label_24e3c8:
    // 0x24e3c8: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x24e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_24e3cc:
    // 0x24e3cc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x24e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24e3d0:
    // 0x24e3d0: 0x40f809  jalr        $v0
label_24e3d4:
    if (ctx->pc == 0x24E3D4u) {
        ctx->pc = 0x24E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3D0u;
        // 0x24e3d4: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3D8u;
        goto label_24e3d8;
    }
    ctx->pc = 0x24E3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E3D8u);
        ctx->pc = 0x24E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3D0u;
        // 0x24e3d4: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3D0u, 0x24E3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E3D8u;
label_24e3d8:
    // 0x24e3d8: 0xaf808568  sw          $zero, -0x7A98($gp)
    ctx->pc = 0x24e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 0));
label_24e3dc:
    // 0x24e3dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x24e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24e3e0:
    // 0x24e3e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24e3e4:
    // 0x24e3e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x24e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_24e3e8:
    // 0x24e3e8: 0xaf928568  sw          $s2, -0x7A98($gp)
    ctx->pc = 0x24e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 18));
label_24e3ec:
    // 0x24e3ec: 0x8f82856c  lw          $v0, -0x7A94($gp)
    ctx->pc = 0x24e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
label_24e3f0:
    // 0x24e3f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24e3f4:
    // 0x24e3f4: 0xaf82856c  sw          $v0, -0x7A94($gp)
    ctx->pc = 0x24e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935916), GPR_U32(ctx, 2));
label_24e3f8:
    // 0x24e3f8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24e3fc:
    // 0x24e3fc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_24e400:
    if (ctx->pc == 0x24E400u) {
        ctx->pc = 0x24E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3FCu;
        // 0x24e400: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E404u;
        goto label_24e404;
    }
    ctx->pc = 0x24E3FCu;
    {
        const bool branch_taken_0x24e3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3FCu;
        // 0x24e400: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3fc) {
            ctx->pc = 0x24E440u;
            goto label_24e440;
        }
    }
    ctx->pc = 0x24E404u;
label_24e404:
    // 0x24e404: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24e408:
    // 0x24e408: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
label_24e40c:
    if (ctx->pc == 0x24E40Cu) {
        ctx->pc = 0x24E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E408u;
        // 0x24e40c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E410u;
        goto label_24e410;
    }
    ctx->pc = 0x24E408u;
    {
        const bool branch_taken_0x24e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x24e408) {
            ctx->pc = 0x24E40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E408u;
            // 0x24e40c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E410u;
label_24e410:
    // 0x24e410: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24e410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24e414:
    // 0x24e414: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24e414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24e418:
    // 0x24e418: 0xc092848  jal         func_24A120
label_24e41c:
    if (ctx->pc == 0x24E41Cu) {
        ctx->pc = 0x24E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E418u;
        // 0x24e41c: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E420u;
        goto label_24e420;
    }
    ctx->pc = 0x24E418u;
    SET_GPR_U32(ctx, 31, 0x24E420u);
    ctx->pc = 0x24E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E418u;
    // 0x24e41c: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24E418u, 0x24E420u)) {
        return;
    }
    ctx->pc = 0x24E420u;
label_24e420:
    // 0x24e420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24e424:
    // 0x24e424: 0xc09281a  jal         func_24A068
label_24e428:
    if (ctx->pc == 0x24E428u) {
        ctx->pc = 0x24E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E424u;
        // 0x24e428: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E42Cu;
        goto label_24e42c;
    }
    ctx->pc = 0x24E424u;
    SET_GPR_U32(ctx, 31, 0x24E42Cu);
    ctx->pc = 0x24E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E424u;
    // 0x24e428: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24E424u, 0x24E42Cu)) {
        return;
    }
    ctx->pc = 0x24E42Cu;
label_24e42c:
    // 0x24e42c: 0x0  nop
    ctx->pc = 0x24e42cu;
    // NOP
label_24e430:
    // 0x24e430: 0x1000003e  b           . + 4 + (0x3E << 2)
label_24e434:
    if (ctx->pc == 0x24E434u) {
        ctx->pc = 0x24E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E430u;
        // 0x24e434: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E438u;
        goto label_24e438;
    }
    ctx->pc = 0x24E430u;
    {
        const bool branch_taken_0x24e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E430u;
        // 0x24e434: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e430) {
            ctx->pc = 0x24E52Cu;
            goto label_24e52c;
        }
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_24e43c:
    if (ctx->pc == 0x24E43Cu) {
        ctx->pc = 0x24E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E438u;
        // 0x24e43c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E440u;
        goto label_24e440;
    }
    ctx->pc = 0x24E438u;
    {
        const bool branch_taken_0x24e438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e438) {
            ctx->pc = 0x24E43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E438u;
            // 0x24e43c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e408;
        }
    }
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x24e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_24e444:
    // 0x24e444: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x24e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_24e448:
    // 0x24e448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24e44c:
    // 0x24e44c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24e450:
    // 0x24e450: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_24e454:
    // 0x24e454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24e458:
    if (ctx->pc == 0x24E458u) {
        ctx->pc = 0x24E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E454u;
        // 0x24e458: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E45Cu;
        goto label_24e45c;
    }
    ctx->pc = 0x24E454u;
    {
        const bool branch_taken_0x24e454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E454u;
        // 0x24e458: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e454) {
            ctx->pc = 0x24E468u;
            goto label_24e468;
        }
    }
    ctx->pc = 0x24E45Cu;
label_24e45c:
    // 0x24e45c: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x24e45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24e460:
    // 0x24e460: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_24e464:
    if (ctx->pc == 0x24E464u) {
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E460u;
        // 0x24e464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E468u;
        goto label_24e468;
    }
    ctx->pc = 0x24E460u;
    {
        const bool branch_taken_0x24e460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E460u;
        // 0x24e464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e460) {
            ctx->pc = 0x24E52Cu;
            goto label_24e52c;
        }
    }
    ctx->pc = 0x24E468u;
label_24e468:
    // 0x24e468: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x24e468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_24e46c:
    // 0x24e46c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_24e470:
    // 0x24e470: 0x8c843f78  lw          $a0, 0x3F78($a0)
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16248)));
label_24e474:
    // 0x24e474: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x24e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_24e478:
    // 0x24e478: 0x40f809  jalr        $v0
label_24e47c:
    if (ctx->pc == 0x24E47Cu) {
        ctx->pc = 0x24E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E478u;
        // 0x24e47c: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E480u;
        goto label_24e480;
    }
    ctx->pc = 0x24E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E480u);
        ctx->pc = 0x24E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E478u;
        // 0x24e47c: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E478u, 0x24E480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E480u;
label_24e480:
    // 0x24e480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e484:
    // 0x24e484: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_24e488:
    if (ctx->pc == 0x24E488u) {
        ctx->pc = 0x24E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E484u;
        // 0x24e488: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E48Cu;
        goto label_24e48c;
    }
    ctx->pc = 0x24E484u;
    {
        const bool branch_taken_0x24e484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E484u;
        // 0x24e488: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e484) {
            ctx->pc = 0x24E528u;
            goto label_24e528;
        }
    }
    ctx->pc = 0x24E48Cu;
label_24e48c:
    // 0x24e48c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24e490:
    // 0x24e490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24e494:
    // 0x24e494: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x24e494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_24e498:
    // 0x24e498: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x24e498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_24e49c:
    // 0x24e49c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x24e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_24e4a0:
    // 0x24e4a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x24e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_24e4a4:
    // 0x24e4a4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x24e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_24e4a8:
    // 0x24e4a8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x24e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_24e4ac:
    // 0x24e4ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x24e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_24e4b0:
    // 0x24e4b0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_24e4b4:
    if (ctx->pc == 0x24E4B4u) {
        ctx->pc = 0x24E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4B0u;
        // 0x24e4b4: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E4B8u;
        goto label_24e4b8;
    }
    ctx->pc = 0x24E4B0u;
    {
        const bool branch_taken_0x24e4b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4B0u;
        // 0x24e4b4: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4b0) {
            ctx->pc = 0x24E4C0u;
            goto label_24e4c0;
        }
    }
    ctx->pc = 0x24E4B8u;
label_24e4b8:
    // 0x24e4b8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_24e4bc:
    // 0x24e4bc: 0x2447e228  addiu       $a3, $v0, -0x1DD8
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959656));
label_24e4c0:
    // 0x24e4c0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x24e4c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24e4c4:
    // 0x24e4c4: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_24e4c8:
    if (ctx->pc == 0x24E4C8u) {
        ctx->pc = 0x24E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4C4u;
        // 0x24e4c8: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E4CCu;
        goto label_24e4cc;
    }
    ctx->pc = 0x24E4C4u;
    {
        const bool branch_taken_0x24e4c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4C4u;
        // 0x24e4c8: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4c4) {
            ctx->pc = 0x24E4D4u;
            goto label_24e4d4;
        }
    }
    ctx->pc = 0x24E4CCu;
label_24e4cc:
    // 0x24e4cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_24e4d0:
    // 0x24e4d0: 0x2448e230  addiu       $t0, $v0, -0x1DD0
    ctx->pc = 0x24e4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959664));
label_24e4d4:
    // 0x24e4d4: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x24e4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24e4d8:
    // 0x24e4d8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_24e4dc:
    if (ctx->pc == 0x24E4DCu) {
        ctx->pc = 0x24E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4D8u;
        // 0x24e4dc: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E4E0u;
        goto label_24e4e0;
    }
    ctx->pc = 0x24E4D8u;
    {
        const bool branch_taken_0x24e4d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4D8u;
        // 0x24e4dc: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4d8) {
            ctx->pc = 0x24E4E8u;
            goto label_24e4e8;
        }
    }
    ctx->pc = 0x24E4E0u;
label_24e4e0:
    // 0x24e4e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_24e4e4:
    // 0x24e4e4: 0x2449e238  addiu       $t1, $v0, -0x1DC8
    ctx->pc = 0x24e4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959672));
label_24e4e8:
    // 0x24e4e8: 0xae090028  sw          $t1, 0x28($s0)
    ctx->pc = 0x24e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 9));
label_24e4ec:
    // 0x24e4ec: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x24e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_24e4f0:
    // 0x24e4f0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x24e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_24e4f4:
    // 0x24e4f4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x24e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_24e4f8:
    // 0x24e4f8: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x24e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_24e4fc:
    // 0x24e4fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24e500:
    // 0x24e500: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_24e504:
    if (ctx->pc == 0x24E504u) {
        ctx->pc = 0x24E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E500u;
        // 0x24e504: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E508u;
        goto label_24e508;
    }
    ctx->pc = 0x24E500u;
    {
        const bool branch_taken_0x24e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e500) {
            ctx->pc = 0x24E504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E500u;
            // 0x24e504: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E514u;
            goto label_24e514;
        }
    }
    ctx->pc = 0x24E508u;
label_24e508:
    // 0x24e508: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x24e508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_24e50c:
    // 0x24e50c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_24e510:
    if (ctx->pc == 0x24E510u) {
        ctx->pc = 0x24E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E50Cu;
        // 0x24e510: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E514u;
        goto label_24e514;
    }
    ctx->pc = 0x24E50Cu;
    {
        const bool branch_taken_0x24e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E50Cu;
        // 0x24e510: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e50c) {
            ctx->pc = 0x24E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e430;
        }
    }
    ctx->pc = 0x24E514u;
label_24e514:
    // 0x24e514: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x24e514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_24e518:
    // 0x24e518: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_24e51c:
    // 0x24e51c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x24e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_24e520:
    // 0x24e520: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_24e524:
    if (ctx->pc == 0x24E524u) {
        ctx->pc = 0x24E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E520u;
        // 0x24e524: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E528u;
        goto label_24e528;
    }
    ctx->pc = 0x24E520u;
    {
        const bool branch_taken_0x24e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E520u;
        // 0x24e524: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e520) {
            ctx->pc = 0x24E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e430;
        }
    }
    ctx->pc = 0x24E528u;
label_24e528:
    // 0x24e528: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24e52c:
    // 0x24e52c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x24e52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24e530:
    // 0x24e530: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x24e530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24e534:
    // 0x24e534: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x24e534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24e538:
    // 0x24e538: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x24e538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24e53c:
    // 0x24e53c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x24e53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24e540:
    // 0x24e540: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24e540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24e544:
    // 0x24e544: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x24e544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24e548:
    // 0x24e548: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x24e548u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e54c:
    // 0x24e54c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x24e54cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e550:
    // 0x24e550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e554:
    // 0x24e554: 0x3e00008  jr          $ra
label_24e558:
    if (ctx->pc == 0x24E558u) {
        ctx->pc = 0x24E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E554u;
        // 0x24e558: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E55Cu;
        goto label_24e55c;
    }
    ctx->pc = 0x24E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E554u;
        // 0x24e558: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E55Cu;
label_24e55c:
    // 0x24e55c: 0x0  nop
    ctx->pc = 0x24e55cu;
    // NOP
    ctx->pc = 0x24e560u;
}

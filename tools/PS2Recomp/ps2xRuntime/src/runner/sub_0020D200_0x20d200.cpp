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

// Function: sub_0020D200
// Address: 0x20d200 - 0x20d4d0
void sub_0020D200_0x20d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D200_0x20d200");
#endif

    switch (ctx->pc) {
        case 0x20d200u: goto label_20d200;
        case 0x20d204u: goto label_20d204;
        case 0x20d208u: goto label_20d208;
        case 0x20d20cu: goto label_20d20c;
        case 0x20d210u: goto label_20d210;
        case 0x20d214u: goto label_20d214;
        case 0x20d218u: goto label_20d218;
        case 0x20d21cu: goto label_20d21c;
        case 0x20d220u: goto label_20d220;
        case 0x20d224u: goto label_20d224;
        case 0x20d228u: goto label_20d228;
        case 0x20d22cu: goto label_20d22c;
        case 0x20d230u: goto label_20d230;
        case 0x20d234u: goto label_20d234;
        case 0x20d238u: goto label_20d238;
        case 0x20d23cu: goto label_20d23c;
        case 0x20d240u: goto label_20d240;
        case 0x20d244u: goto label_20d244;
        case 0x20d248u: goto label_20d248;
        case 0x20d24cu: goto label_20d24c;
        case 0x20d250u: goto label_20d250;
        case 0x20d254u: goto label_20d254;
        case 0x20d258u: goto label_20d258;
        case 0x20d25cu: goto label_20d25c;
        case 0x20d260u: goto label_20d260;
        case 0x20d264u: goto label_20d264;
        case 0x20d268u: goto label_20d268;
        case 0x20d26cu: goto label_20d26c;
        case 0x20d270u: goto label_20d270;
        case 0x20d274u: goto label_20d274;
        case 0x20d278u: goto label_20d278;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d280u: goto label_20d280;
        case 0x20d284u: goto label_20d284;
        case 0x20d288u: goto label_20d288;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d290u: goto label_20d290;
        case 0x20d294u: goto label_20d294;
        case 0x20d298u: goto label_20d298;
        case 0x20d29cu: goto label_20d29c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2a8u: goto label_20d2a8;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2b0u: goto label_20d2b0;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2b8u: goto label_20d2b8;
        case 0x20d2bcu: goto label_20d2bc;
        case 0x20d2c0u: goto label_20d2c0;
        case 0x20d2c4u: goto label_20d2c4;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2ccu: goto label_20d2cc;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2d4u: goto label_20d2d4;
        case 0x20d2d8u: goto label_20d2d8;
        case 0x20d2dcu: goto label_20d2dc;
        case 0x20d2e0u: goto label_20d2e0;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d2e8u: goto label_20d2e8;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d2f0u: goto label_20d2f0;
        case 0x20d2f4u: goto label_20d2f4;
        case 0x20d2f8u: goto label_20d2f8;
        case 0x20d2fcu: goto label_20d2fc;
        case 0x20d300u: goto label_20d300;
        case 0x20d304u: goto label_20d304;
        case 0x20d308u: goto label_20d308;
        case 0x20d30cu: goto label_20d30c;
        case 0x20d310u: goto label_20d310;
        case 0x20d314u: goto label_20d314;
        case 0x20d318u: goto label_20d318;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d320u: goto label_20d320;
        case 0x20d324u: goto label_20d324;
        case 0x20d328u: goto label_20d328;
        case 0x20d32cu: goto label_20d32c;
        case 0x20d330u: goto label_20d330;
        case 0x20d334u: goto label_20d334;
        case 0x20d338u: goto label_20d338;
        case 0x20d33cu: goto label_20d33c;
        case 0x20d340u: goto label_20d340;
        case 0x20d344u: goto label_20d344;
        case 0x20d348u: goto label_20d348;
        case 0x20d34cu: goto label_20d34c;
        case 0x20d350u: goto label_20d350;
        case 0x20d354u: goto label_20d354;
        case 0x20d358u: goto label_20d358;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        case 0x20d434u: goto label_20d434;
        case 0x20d438u: goto label_20d438;
        case 0x20d43cu: goto label_20d43c;
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4a4u: goto label_20d4a4;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4acu: goto label_20d4ac;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4b4u: goto label_20d4b4;
        case 0x20d4b8u: goto label_20d4b8;
        case 0x20d4bcu: goto label_20d4bc;
        case 0x20d4c0u: goto label_20d4c0;
        case 0x20d4c4u: goto label_20d4c4;
        case 0x20d4c8u: goto label_20d4c8;
        case 0x20d4ccu: goto label_20d4cc;
        default: break;
    }

    ctx->pc = 0x20d200u;

label_20d200:
    // 0x20d200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20d204:
    // 0x20d204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d208:
    // 0x20d208: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20d208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_20d20c:
    // 0x20d20c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20d210:
    // 0x20d210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d214:
    // 0x20d214: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_20d218:
    // 0x20d218: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_20d21c:
    // 0x20d21c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_20d220:
    // 0x20d220: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_20d224:
    // 0x20d224: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x20d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_20d228:
    // 0x20d228: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x20d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_20d22c:
    // 0x20d22c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x20d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_20d230:
    // 0x20d230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d234:
    // 0x20d234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20d238:
    // 0x20d238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d23c:
    // 0x20d23c: 0x40f809  jalr        $v0
label_20d240:
    if (ctx->pc == 0x20D240u) {
        ctx->pc = 0x20D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D23Cu;
        // 0x20d240: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D244u;
        goto label_20d244;
    }
    ctx->pc = 0x20D23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D244u);
        ctx->pc = 0x20D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D23Cu;
        // 0x20d240: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D23Cu, 0x20D244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D244u;
label_20d244:
    // 0x20d244: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20d244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d248:
    // 0x20d248: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20d24c:
    // 0x20d24c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d250:
    // 0x20d250: 0xae3401c4  sw          $s4, 0x1C4($s1)
    ctx->pc = 0x20d250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 20));
label_20d254:
    // 0x20d254: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
label_20d258:
    // 0x20d258: 0x2463d4e8  addiu       $v1, $v1, -0x2B18
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956264));
label_20d25c:
    // 0x20d25c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x20d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_20d260:
    // 0x20d260: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x20d260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_20d264:
    // 0x20d264: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x20d264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_20d268:
    // 0x20d268: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x20d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_20d26c:
    // 0x20d26c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20d270:
    if (ctx->pc == 0x20D270u) {
        ctx->pc = 0x20D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D26Cu;
        // 0x20d270: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D274u;
        goto label_20d274;
    }
    ctx->pc = 0x20D26Cu;
    {
        const bool branch_taken_0x20d26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D26Cu;
        // 0x20d270: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d26c) {
            ctx->pc = 0x20D28Cu;
            goto label_20d28c;
        }
    }
    ctx->pc = 0x20D274u;
label_20d274:
    // 0x20d274: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20d278:
    // 0x20d278: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20d278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20d27c:
    // 0x20d27c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20d280:
    // 0x20d280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d284:
    // 0x20d284: 0x60f809  jalr        $v1
label_20d288:
    if (ctx->pc == 0x20D288u) {
        ctx->pc = 0x20D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D284u;
        // 0x20d288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D28Cu;
        goto label_20d28c;
    }
    ctx->pc = 0x20D284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D28Cu);
        ctx->pc = 0x20D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D284u;
        // 0x20d288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D284u, 0x20D28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D28Cu;
label_20d28c:
    // 0x20d28c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_20d290:
    // 0x20d290: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20d294:
    if (ctx->pc == 0x20D294u) {
        ctx->pc = 0x20D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D290u;
        // 0x20d294: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D298u;
        goto label_20d298;
    }
    ctx->pc = 0x20D290u;
    {
        const bool branch_taken_0x20d290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D290u;
        // 0x20d294: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d290) {
            ctx->pc = 0x20D2A4u;
            goto label_20d2a4;
        }
    }
    ctx->pc = 0x20D298u;
label_20d298:
    // 0x20d298: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_20d29c:
    // 0x20d29c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20d29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_20d2a0:
    // 0x20d2a0: 0x38570001  xori        $s7, $v0, 0x1
    ctx->pc = 0x20d2a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20d2a4:
    // 0x20d2a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20d2a8:
    // 0x20d2a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20d2a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d2ac:
    // 0x20d2ac: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
label_20d2b0:
    if (ctx->pc == 0x20D2B0u) {
        ctx->pc = 0x20D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2ACu;
        // 0x20d2b0: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D2B4u;
        goto label_20d2b4;
    }
    ctx->pc = 0x20D2ACu;
    {
        const bool branch_taken_0x20d2ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2ACu;
        // 0x20d2b0: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2ac) {
            ctx->pc = 0x20D4A0u;
            goto label_20d4a0;
        }
    }
    ctx->pc = 0x20D2B4u;
label_20d2b4:
    // 0x20d2b4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d2b8:
    // 0x20d2b8: 0x26920034  addiu       $s2, $s4, 0x34
    ctx->pc = 0x20d2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_20d2bc:
    // 0x20d2bc: 0x245ed688  addiu       $fp, $v0, -0x2978
    ctx->pc = 0x20d2bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
label_20d2c0:
    // 0x20d2c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20d2c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d2c4:
    // 0x20d2c4: 0x0  nop
    ctx->pc = 0x20d2c4u;
    // NOP
label_20d2c8:
    // 0x20d2c8: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x20d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_20d2cc:
    // 0x20d2cc: 0x2963021  addu        $a2, $s4, $s6
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_20d2d0:
    // 0x20d2d0: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_20d2d4:
    // 0x20d2d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d2d8:
    // 0x20d2d8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_20d2dc:
    if (ctx->pc == 0x20D2DCu) {
        ctx->pc = 0x20D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2D8u;
        // 0x20d2dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D2E0u;
        goto label_20d2e0;
    }
    ctx->pc = 0x20D2D8u;
    {
        const bool branch_taken_0x20d2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d2d8) {
            ctx->pc = 0x20D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D2D8u;
            // 0x20d2dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D2E0u;
            goto label_20d2e0;
        }
    }
    ctx->pc = 0x20D2E0u;
label_20d2e0:
    // 0x20d2e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x20d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_20d2e4:
    // 0x20d2e4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x20d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20d2e8:
    // 0x20d2e8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x20d2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20d2ec:
    // 0x20d2ec: 0x8e280134  lw          $t0, 0x134($s1)
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_20d2f0:
    // 0x20d2f0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20d2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20d2f4:
    // 0x20d2f4: 0x8e250138  lw          $a1, 0x138($s1)
    ctx->pc = 0x20d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_20d2f8:
    // 0x20d2f8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x20d2f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20d2fc:
    // 0x20d2fc: 0x4812  mflo        $t1
    ctx->pc = 0x20d2fcu;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_20d300:
    // 0x20d300: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x20d300u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20d304:
    // 0x20d304: 0x1812  mflo        $v1
    ctx->pc = 0x20d304u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_20d308:
    // 0x20d308: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20d30c:
    // 0x20d30c: 0xacc40064  sw          $a0, 0x64($a2)
    ctx->pc = 0x20d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 4));
label_20d310:
    // 0x20d310: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_20d314:
    // 0x20d314: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20d318:
    if (ctx->pc == 0x20D318u) {
        ctx->pc = 0x20D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D314u;
        // 0x20d318: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D31Cu;
        goto label_20d31c;
    }
    ctx->pc = 0x20D314u;
    {
        const bool branch_taken_0x20d314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D314u;
        // 0x20d318: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d314) {
            ctx->pc = 0x20D330u;
            goto label_20d330;
        }
    }
    ctx->pc = 0x20D31Cu;
label_20d31c:
    // 0x20d31c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d320:
    // 0x20d320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20d320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d324:
    // 0x20d324: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_20d328:
    // 0x20d328: 0x10000047  b           . + 4 + (0x47 << 2)
label_20d32c:
    if (ctx->pc == 0x20D32Cu) {
        ctx->pc = 0x20D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D328u;
        // 0x20d32c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D330u;
        goto label_20d330;
    }
    ctx->pc = 0x20D328u;
    {
        const bool branch_taken_0x20d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D328u;
        // 0x20d32c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d328) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D330u;
label_20d330:
    // 0x20d330: 0x14e80008  bne         $a3, $t0, . + 4 + (0x8 << 2)
label_20d334:
    if (ctx->pc == 0x20D334u) {
        ctx->pc = 0x20D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D330u;
        // 0x20d334: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D338u;
        goto label_20d338;
    }
    ctx->pc = 0x20D330u;
    {
        const bool branch_taken_0x20d330 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x20D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D330u;
        // 0x20d334: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d330) {
            ctx->pc = 0x20D354u;
            goto label_20d354;
        }
    }
    ctx->pc = 0x20D338u;
label_20d338:
    // 0x20d338: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_20d33c:
    if (ctx->pc == 0x20D33Cu) {
        ctx->pc = 0x20D340u;
        goto label_20d340;
    }
    ctx->pc = 0x20D338u;
    {
        const bool branch_taken_0x20d338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x20d338) {
            ctx->pc = 0x20D354u;
            goto label_20d354;
        }
    }
    ctx->pc = 0x20D340u;
label_20d340:
    // 0x20d340: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d344:
    // 0x20d344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20d344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d348:
    // 0x20d348: 0x2442d678  addiu       $v0, $v0, -0x2988
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956664));
label_20d34c:
    // 0x20d34c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_20d350:
    if (ctx->pc == 0x20D350u) {
        ctx->pc = 0x20D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D34Cu;
        // 0x20d350: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D354u;
        goto label_20d354;
    }
    ctx->pc = 0x20D34Cu;
    {
        const bool branch_taken_0x20d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D34Cu;
        // 0x20d350: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d34c) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D354u;
label_20d354:
    // 0x20d354: 0x54480021  bnel        $v0, $t0, . + 4 + (0x21 << 2)
label_20d358:
    if (ctx->pc == 0x20D358u) {
        ctx->pc = 0x20D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D354u;
        // 0x20d358: 0x107001a  div         $zero, $t0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D35Cu;
        goto label_20d35c;
    }
    ctx->pc = 0x20D354u;
    {
        const bool branch_taken_0x20d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x20d354) {
            ctx->pc = 0x20D358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D354u;
            // 0x20d358: 0x107001a  div         $zero, $t0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3DCu;
            goto label_20d3dc;
        }
    }
    ctx->pc = 0x20D35Cu;
label_20d35c:
    // 0x20d35c: 0x1465000e  bne         $v1, $a1, . + 4 + (0xE << 2)
label_20d360:
    if (ctx->pc == 0x20D360u) {
        ctx->pc = 0x20D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D35Cu;
        // 0x20d360: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D364u;
        goto label_20d364;
    }
    ctx->pc = 0x20D35Cu;
    {
        const bool branch_taken_0x20d35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D35Cu;
        // 0x20d360: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d35c) {
            ctx->pc = 0x20D398u;
            goto label_20d398;
        }
    }
    ctx->pc = 0x20D364u;
label_20d364:
    // 0x20d364: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_20d368:
    if (ctx->pc == 0x20D368u) {
        ctx->pc = 0x20D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D364u;
        // 0x20d368: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D36Cu;
        goto label_20d36c;
    }
    ctx->pc = 0x20D364u;
    {
        const bool branch_taken_0x20d364 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D364u;
        // 0x20d368: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d364) {
            ctx->pc = 0x20D38Cu;
            goto label_20d38c;
        }
    }
    ctx->pc = 0x20D36Cu;
label_20d36c:
    // 0x20d36c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x20d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_20d370:
    // 0x20d370: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x20d370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_20d374:
    // 0x20d374: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20d378:
    if (ctx->pc == 0x20D378u) {
        ctx->pc = 0x20D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D374u;
        // 0x20d378: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D37Cu;
        goto label_20d37c;
    }
    ctx->pc = 0x20D374u;
    {
        const bool branch_taken_0x20d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D374u;
        // 0x20d378: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d374) {
            ctx->pc = 0x20D38Cu;
            goto label_20d38c;
        }
    }
    ctx->pc = 0x20D37Cu;
label_20d37c:
    // 0x20d37c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d380:
    // 0x20d380: 0x2442d908  addiu       $v0, $v0, -0x26F8
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957320));
label_20d384:
    // 0x20d384: 0x10000030  b           . + 4 + (0x30 << 2)
label_20d388:
    if (ctx->pc == 0x20D388u) {
        ctx->pc = 0x20D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D384u;
        // 0x20d388: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D38Cu;
        goto label_20d38c;
    }
    ctx->pc = 0x20D384u;
    {
        const bool branch_taken_0x20d384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D384u;
        // 0x20d388: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d384) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D38Cu;
label_20d38c:
    // 0x20d38c: 0x2442d7b0  addiu       $v0, $v0, -0x2850
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
label_20d390:
    // 0x20d390: 0x1000002d  b           . + 4 + (0x2D << 2)
label_20d394:
    if (ctx->pc == 0x20D394u) {
        ctx->pc = 0x20D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D390u;
        // 0x20d394: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D398u;
        goto label_20d398;
    }
    ctx->pc = 0x20D390u;
    {
        const bool branch_taken_0x20d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D390u;
        // 0x20d394: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d390) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D398u;
label_20d398:
    // 0x20d398: 0x54450010  bnel        $v0, $a1, . + 4 + (0x10 << 2)
label_20d39c:
    if (ctx->pc == 0x20D39Cu) {
        ctx->pc = 0x20D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D398u;
        // 0x20d39c: 0x107001a  div         $zero, $t0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3A0u;
        goto label_20d3a0;
    }
    ctx->pc = 0x20D398u;
    {
        const bool branch_taken_0x20d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20d398) {
            ctx->pc = 0x20D39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D398u;
            // 0x20d39c: 0x107001a  div         $zero, $t0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3DCu;
            goto label_20d3dc;
        }
    }
    ctx->pc = 0x20D3A0u;
label_20d3a0:
    // 0x20d3a0: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_20d3a4:
    if (ctx->pc == 0x20D3A4u) {
        ctx->pc = 0x20D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3A0u;
        // 0x20d3a4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3A8u;
        goto label_20d3a8;
    }
    ctx->pc = 0x20D3A0u;
    {
        const bool branch_taken_0x20d3a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3A0u;
        // 0x20d3a4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3a0) {
            ctx->pc = 0x20D3D0u;
            goto label_20d3d0;
        }
    }
    ctx->pc = 0x20D3A8u;
label_20d3a8:
    // 0x20d3a8: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_20d3ac:
    // 0x20d3ac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x20d3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_20d3b0:
    // 0x20d3b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20d3b4:
    if (ctx->pc == 0x20D3B4u) {
        ctx->pc = 0x20D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3B0u;
        // 0x20d3b4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3B8u;
        goto label_20d3b8;
    }
    ctx->pc = 0x20D3B0u;
    {
        const bool branch_taken_0x20d3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3B0u;
        // 0x20d3b4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3b0) {
            ctx->pc = 0x20D3D0u;
            goto label_20d3d0;
        }
    }
    ctx->pc = 0x20D3B8u;
label_20d3b8:
    // 0x20d3b8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20d3bc:
    // 0x20d3bc: 0x2442d058  addiu       $v0, $v0, -0x2FA8
    ctx->pc = 0x20d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955096));
label_20d3c0:
    // 0x20d3c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20d3c4:
    // 0x20d3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d3c8:
    // 0x20d3c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_20d3cc:
    if (ctx->pc == 0x20D3CCu) {
        ctx->pc = 0x20D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3C8u;
        // 0x20d3cc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3D0u;
        goto label_20d3d0;
    }
    ctx->pc = 0x20D3C8u;
    {
        const bool branch_taken_0x20d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3C8u;
        // 0x20d3cc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3c8) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D3D0u;
label_20d3d0:
    // 0x20d3d0: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_20d3d4:
    // 0x20d3d4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20d3d8:
    if (ctx->pc == 0x20D3D8u) {
        ctx->pc = 0x20D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D4u;
        // 0x20d3d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3DCu;
        goto label_20d3dc;
    }
    ctx->pc = 0x20D3D4u;
    {
        const bool branch_taken_0x20d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D4u;
        // 0x20d3d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3d4) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D3DCu;
label_20d3dc:
    // 0x20d3dc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_20d3e0:
    if (ctx->pc == 0x20D3E0u) {
        ctx->pc = 0x20D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3DCu;
        // 0x20d3e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3E4u;
        goto label_20d3e4;
    }
    ctx->pc = 0x20D3DCu;
    {
        const bool branch_taken_0x20d3dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3dc) {
            ctx->pc = 0x20D3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3DCu;
            // 0x20d3e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3E4u;
            goto label_20d3e4;
        }
    }
    ctx->pc = 0x20D3E4u;
label_20d3e4:
    // 0x20d3e4: 0x3012  mflo        $a2
    ctx->pc = 0x20d3e4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_20d3e8:
    // 0x20d3e8: 0x1010  mfhi        $v0
    ctx->pc = 0x20d3e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20d3ec:
    // 0x20d3ec: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_20d3f0:
    if (ctx->pc == 0x20D3F0u) {
        ctx->pc = 0x20D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3ECu;
        // 0x20d3f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D3F4u;
        goto label_20d3f4;
    }
    ctx->pc = 0x20D3ECu;
    {
        const bool branch_taken_0x20d3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d3ec) {
            ctx->pc = 0x20D3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3ECu;
            // 0x20d3f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D430u;
            goto label_20d430;
        }
    }
    ctx->pc = 0x20D3F4u;
label_20d3f4:
    // 0x20d3f4: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x20d3f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20d3f8:
    // 0x20d3f8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_20d3fc:
    if (ctx->pc == 0x20D3FCu) {
        ctx->pc = 0x20D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3F8u;
        // 0x20d3fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D400u;
        goto label_20d400;
    }
    ctx->pc = 0x20D3F8u;
    {
        const bool branch_taken_0x20d3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3f8) {
            ctx->pc = 0x20D3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3F8u;
            // 0x20d3fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D400u;
            goto label_20d400;
        }
    }
    ctx->pc = 0x20D400u;
label_20d400:
    // 0x20d400: 0x2812  mflo        $a1
    ctx->pc = 0x20d400u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_20d404:
    // 0x20d404: 0x1010  mfhi        $v0
    ctx->pc = 0x20d404u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20d408:
    // 0x20d408: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20d40c:
    if (ctx->pc == 0x20D40Cu) {
        ctx->pc = 0x20D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D408u;
        // 0x20d40c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D410u;
        goto label_20d410;
    }
    ctx->pc = 0x20D408u;
    {
        const bool branch_taken_0x20d408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d408) {
            ctx->pc = 0x20D40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D408u;
            // 0x20d40c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D430u;
            goto label_20d430;
        }
    }
    ctx->pc = 0x20D410u;
label_20d410:
    // 0x20d410: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x20d410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
label_20d414:
    // 0x20d414: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x20d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_20d418:
    // 0x20d418: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_20d41c:
    if (ctx->pc == 0x20D41Cu) {
        ctx->pc = 0x20D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D418u;
        // 0x20d41c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D420u;
        goto label_20d420;
    }
    ctx->pc = 0x20D418u;
    {
        const bool branch_taken_0x20d418 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d418) {
            ctx->pc = 0x20D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D418u;
            // 0x20d41c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D420u;
            goto label_20d420;
        }
    }
    ctx->pc = 0x20D420u;
label_20d420:
    // 0x20d420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d424:
    // 0x20d424: 0xa046008c  sb          $a2, 0x8C($v0)
    ctx->pc = 0x20d424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 6));
label_20d428:
    // 0x20d428: 0x10000007  b           . + 4 + (0x7 << 2)
label_20d42c:
    if (ctx->pc == 0x20D42Cu) {
        ctx->pc = 0x20D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D428u;
        // 0x20d42c: 0xa0650096  sb          $a1, 0x96($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 150), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D430u;
        goto label_20d430;
    }
    ctx->pc = 0x20D428u;
    {
        const bool branch_taken_0x20d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D428u;
        // 0x20d42c: 0xa0650096  sb          $a1, 0x96($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 150), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d428) {
            ctx->pc = 0x20D448u;
            goto label_20d448;
        }
    }
    ctx->pc = 0x20D430u;
label_20d430:
    // 0x20d430: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x20d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_20d434:
    // 0x20d434: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20d434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20d438:
    // 0x20d438: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20d43c:
    // 0x20d43c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d440:
    // 0x20d440: 0x60f809  jalr        $v1
label_20d444:
    if (ctx->pc == 0x20D444u) {
        ctx->pc = 0x20D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D440u;
        // 0x20d444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D448u;
        goto label_20d448;
    }
    ctx->pc = 0x20D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D448u);
        ctx->pc = 0x20D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D440u;
        // 0x20d444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D440u, 0x20D448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D448u;
label_20d448:
    // 0x20d448: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_20d44c:
    if (ctx->pc == 0x20D44Cu) {
        ctx->pc = 0x20D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D448u;
        // 0x20d44c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D450u;
        goto label_20d450;
    }
    ctx->pc = 0x20D448u;
    {
        const bool branch_taken_0x20d448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d448) {
            ctx->pc = 0x20D44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D448u;
            // 0x20d44c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D488u;
            goto label_20d488;
        }
    }
    ctx->pc = 0x20D450u;
label_20d450:
    // 0x20d450: 0x9e240070  lwu         $a0, 0x70($s1)
    ctx->pc = 0x20d450u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_20d454:
    // 0x20d454: 0x8e250134  lw          $a1, 0x134($s1)
    ctx->pc = 0x20d454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_20d458:
    // 0x20d458: 0xc084868  jal         func_2121A0
label_20d45c:
    if (ctx->pc == 0x20D45Cu) {
        ctx->pc = 0x20D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D458u;
        // 0x20d45c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D460u;
        goto label_20d460;
    }
    ctx->pc = 0x20D458u;
    SET_GPR_U32(ctx, 31, 0x20D460u);
    ctx->pc = 0x20D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D458u;
    // 0x20d45c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121A0u, 0x20D458u, 0x20D460u)) {
        return;
    }
    ctx->pc = 0x20D460u;
label_20d460:
    // 0x20d460: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20d464:
    // 0x20d464: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x20d464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_20d468:
    // 0x20d468: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20d468u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20d46c:
    // 0x20d46c: 0x8e270138  lw          $a3, 0x138($s1)
    ctx->pc = 0x20d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_20d470:
    // 0x20d470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d474:
    // 0x20d474: 0x100f809  jalr        $t0
label_20d478:
    if (ctx->pc == 0x20D478u) {
        ctx->pc = 0x20D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D474u;
        // 0x20d478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D47Cu;
        goto label_20d47c;
    }
    ctx->pc = 0x20D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x20D47Cu);
        ctx->pc = 0x20D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D474u;
        // 0x20d478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D474u, 0x20D47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0x2961821  addu        $v1, $s4, $s6
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_20d480:
    // 0x20d480: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x20d480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_20d484:
    // 0x20d484: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20d488:
    // 0x20d488: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20d488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20d48c:
    // 0x20d48c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20d490:
    // 0x20d490: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x20d490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_20d494:
    // 0x20d494: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20d494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20d498:
    // 0x20d498: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_20d49c:
    if (ctx->pc == 0x20D49Cu) {
        ctx->pc = 0x20D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D498u;
        // 0x20d49c: 0x26730054  addiu       $s3, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D4A0u;
        goto label_20d4a0;
    }
    ctx->pc = 0x20D498u;
    {
        const bool branch_taken_0x20d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D498u;
        // 0x20d49c: 0x26730054  addiu       $s3, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d498) {
            ctx->pc = 0x20D2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d2c8;
        }
    }
    ctx->pc = 0x20D4A0u;
label_20d4a0:
    // 0x20d4a0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20d4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d4a4:
    // 0x20d4a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20d4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20d4a8:
    // 0x20d4a8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20d4ac:
    // 0x20d4ac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20d4acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20d4b0:
    // 0x20d4b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20d4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20d4b4:
    // 0x20d4b4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20d4b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d4b8:
    // 0x20d4b8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x20d4b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d4bc:
    // 0x20d4bc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x20d4bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d4c0:
    // 0x20d4c0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x20d4c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d4c4:
    // 0x20d4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d4c8:
    // 0x20d4c8: 0x3e00008  jr          $ra
label_20d4cc:
    if (ctx->pc == 0x20D4CCu) {
        ctx->pc = 0x20D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4C8u;
        // 0x20d4cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D4D0u;
        goto label_fallthrough_0x20d4c8;
    }
    ctx->pc = 0x20D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4C8u;
        // 0x20d4cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d4c8:
    ctx->pc = 0x20D4D0u;
}

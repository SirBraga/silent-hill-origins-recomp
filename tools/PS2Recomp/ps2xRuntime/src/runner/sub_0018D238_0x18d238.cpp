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

// Function: sub_0018D238
// Address: 0x18d238 - 0x18d538
void sub_0018D238_0x18d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D238_0x18d238");
#endif

    switch (ctx->pc) {
        case 0x18d238u: goto label_18d238;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d240u: goto label_18d240;
        case 0x18d244u: goto label_18d244;
        case 0x18d248u: goto label_18d248;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d250u: goto label_18d250;
        case 0x18d254u: goto label_18d254;
        case 0x18d258u: goto label_18d258;
        case 0x18d25cu: goto label_18d25c;
        case 0x18d260u: goto label_18d260;
        case 0x18d264u: goto label_18d264;
        case 0x18d268u: goto label_18d268;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d270u: goto label_18d270;
        case 0x18d274u: goto label_18d274;
        case 0x18d278u: goto label_18d278;
        case 0x18d27cu: goto label_18d27c;
        case 0x18d280u: goto label_18d280;
        case 0x18d284u: goto label_18d284;
        case 0x18d288u: goto label_18d288;
        case 0x18d28cu: goto label_18d28c;
        case 0x18d290u: goto label_18d290;
        case 0x18d294u: goto label_18d294;
        case 0x18d298u: goto label_18d298;
        case 0x18d29cu: goto label_18d29c;
        case 0x18d2a0u: goto label_18d2a0;
        case 0x18d2a4u: goto label_18d2a4;
        case 0x18d2a8u: goto label_18d2a8;
        case 0x18d2acu: goto label_18d2ac;
        case 0x18d2b0u: goto label_18d2b0;
        case 0x18d2b4u: goto label_18d2b4;
        case 0x18d2b8u: goto label_18d2b8;
        case 0x18d2bcu: goto label_18d2bc;
        case 0x18d2c0u: goto label_18d2c0;
        case 0x18d2c4u: goto label_18d2c4;
        case 0x18d2c8u: goto label_18d2c8;
        case 0x18d2ccu: goto label_18d2cc;
        case 0x18d2d0u: goto label_18d2d0;
        case 0x18d2d4u: goto label_18d2d4;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d2dcu: goto label_18d2dc;
        case 0x18d2e0u: goto label_18d2e0;
        case 0x18d2e4u: goto label_18d2e4;
        case 0x18d2e8u: goto label_18d2e8;
        case 0x18d2ecu: goto label_18d2ec;
        case 0x18d2f0u: goto label_18d2f0;
        case 0x18d2f4u: goto label_18d2f4;
        case 0x18d2f8u: goto label_18d2f8;
        case 0x18d2fcu: goto label_18d2fc;
        case 0x18d300u: goto label_18d300;
        case 0x18d304u: goto label_18d304;
        case 0x18d308u: goto label_18d308;
        case 0x18d30cu: goto label_18d30c;
        case 0x18d310u: goto label_18d310;
        case 0x18d314u: goto label_18d314;
        case 0x18d318u: goto label_18d318;
        case 0x18d31cu: goto label_18d31c;
        case 0x18d320u: goto label_18d320;
        case 0x18d324u: goto label_18d324;
        case 0x18d328u: goto label_18d328;
        case 0x18d32cu: goto label_18d32c;
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        default: break;
    }

    ctx->pc = 0x18d238u;

label_18d238:
    // 0x18d238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18d23c:
    // 0x18d23c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x18d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_18d240:
    // 0x18d240: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18d240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18d244:
    // 0x18d244: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18d244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18d248:
    // 0x18d248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18d24c:
    // 0x18d24c: 0x8c62f888  lw          $v0, -0x778($v1)
    ctx->pc = 0x18d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965384)));
label_18d250:
    // 0x18d250: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x18d250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d254:
    // 0x18d254: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_18d258:
    if (ctx->pc == 0x18D258u) {
        ctx->pc = 0x18D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D254u;
        // 0x18d258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D25Cu;
        goto label_18d25c;
    }
    ctx->pc = 0x18D254u;
    {
        const bool branch_taken_0x18d254 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D254u;
        // 0x18d258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d254) {
            ctx->pc = 0x18D268u;
            goto label_18d268;
        }
    }
    ctx->pc = 0x18D25Cu;
label_18d25c:
    // 0x18d25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d260:
    // 0x18d260: 0x100000af  b           . + 4 + (0xAF << 2)
label_18d264:
    if (ctx->pc == 0x18D264u) {
        ctx->pc = 0x18D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D260u;
        // 0x18d264: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D268u;
        goto label_18d268;
    }
    ctx->pc = 0x18D260u;
    {
        const bool branch_taken_0x18d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D260u;
        // 0x18d264: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d260) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D268u;
label_18d268:
    // 0x18d268: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_18d26c:
    // 0x18d26c: 0x8c4386d0  lw          $v1, -0x7930($v0)
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936272)));
label_18d270:
    // 0x18d270: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_18d274:
    if (ctx->pc == 0x18D274u) {
        ctx->pc = 0x18D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D270u;
        // 0x18d274: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D278u;
        goto label_18d278;
    }
    ctx->pc = 0x18D270u;
    {
        const bool branch_taken_0x18d270 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D270u;
        // 0x18d274: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d270) {
            ctx->pc = 0x18D294u;
            goto label_18d294;
        }
    }
    ctx->pc = 0x18D278u;
label_18d278:
    // 0x18d278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d27c:
    // 0x18d27c: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x18d27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
label_18d280:
    // 0x18d280: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x18d280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_18d284:
    // 0x18d284: 0xc063a7e  jal         func_18E9F8
label_18d288:
    if (ctx->pc == 0x18D288u) {
        ctx->pc = 0x18D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D284u;
        // 0x18d288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D28Cu;
        goto label_18d28c;
    }
    ctx->pc = 0x18D284u;
    SET_GPR_U32(ctx, 31, 0x18D28Cu);
    ctx->pc = 0x18D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D284u;
    // 0x18d288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18E9F8u, 0x18D284u, 0x18D28Cu)) {
        return;
    }
    ctx->pc = 0x18D28Cu;
label_18d28c:
    // 0x18d28c: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_18d290:
    if (ctx->pc == 0x18D290u) {
        ctx->pc = 0x18D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D28Cu;
        // 0x18d290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D294u;
        goto label_18d294;
    }
    ctx->pc = 0x18D28Cu;
    {
        const bool branch_taken_0x18d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D28Cu;
        // 0x18d290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d28c) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D294u;
label_18d294:
    // 0x18d294: 0x8c4386c8  lw          $v1, -0x7938($v0)
    ctx->pc = 0x18d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
label_18d298:
    // 0x18d298: 0x54c30008  bnel        $a2, $v1, . + 4 + (0x8 << 2)
label_18d29c:
    if (ctx->pc == 0x18D29Cu) {
        ctx->pc = 0x18D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D298u;
        // 0x18d29c: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2A0u;
        goto label_18d2a0;
    }
    ctx->pc = 0x18D298u;
    {
        const bool branch_taken_0x18d298 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d298) {
            ctx->pc = 0x18D29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D298u;
            // 0x18d29c: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D2BCu;
            goto label_18d2bc;
        }
    }
    ctx->pc = 0x18D2A0u;
label_18d2a0:
    // 0x18d2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d2a4:
    // 0x18d2a4: 0xc064420  jal         func_191080
label_18d2a8:
    if (ctx->pc == 0x18D2A8u) {
        ctx->pc = 0x18D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A4u;
        // 0x18d2a8: 0x2605007c  addiu       $a1, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2ACu;
        goto label_18d2ac;
    }
    ctx->pc = 0x18D2A4u;
    SET_GPR_U32(ctx, 31, 0x18D2ACu);
    ctx->pc = 0x18D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2A4u;
    // 0x18d2a8: 0x2605007c  addiu       $a1, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191080u, 0x18D2A4u, 0x18D2ACu)) {
        return;
    }
    ctx->pc = 0x18D2ACu;
label_18d2ac:
    // 0x18d2ac: 0xc06391c  jal         func_18E470
label_18d2b0:
    if (ctx->pc == 0x18D2B0u) {
        ctx->pc = 0x18D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2ACu;
        // 0x18d2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2B4u;
        goto label_18d2b4;
    }
    ctx->pc = 0x18D2ACu;
    SET_GPR_U32(ctx, 31, 0x18D2B4u);
    ctx->pc = 0x18D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2ACu;
    // 0x18d2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18E470u, 0x18D2ACu, 0x18D2B4u)) {
        return;
    }
    ctx->pc = 0x18D2B4u;
label_18d2b4:
    // 0x18d2b4: 0x1000009b  b           . + 4 + (0x9B << 2)
label_18d2b8:
    if (ctx->pc == 0x18D2B8u) {
        ctx->pc = 0x18D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B4u;
        // 0x18d2b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2BCu;
        goto label_18d2bc;
    }
    ctx->pc = 0x18D2B4u;
    {
        const bool branch_taken_0x18d2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B4u;
        // 0x18d2b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b4) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D2BCu;
label_18d2bc:
    // 0x18d2bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d2c0:
    if (ctx->pc == 0x18D2C0u) {
        ctx->pc = 0x18D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2BCu;
        // 0x18d2c0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2C4u;
        goto label_18d2c4;
    }
    ctx->pc = 0x18D2BCu;
    {
        const bool branch_taken_0x18d2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2BCu;
        // 0x18d2c0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2bc) {
            ctx->pc = 0x18D2E0u;
            goto label_18d2e0;
        }
    }
    ctx->pc = 0x18D2C4u;
label_18d2c4:
    // 0x18d2c4: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x18d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
label_18d2c8:
    // 0x18d2c8: 0x54c30006  bnel        $a2, $v1, . + 4 + (0x6 << 2)
label_18d2cc:
    if (ctx->pc == 0x18D2CCu) {
        ctx->pc = 0x18D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C8u;
        // 0x18d2cc: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2D0u;
        goto label_18d2d0;
    }
    ctx->pc = 0x18D2C8u;
    {
        const bool branch_taken_0x18d2c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d2c8) {
            ctx->pc = 0x18D2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2C8u;
            // 0x18d2cc: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D2E4u;
            goto label_18d2e4;
        }
    }
    ctx->pc = 0x18D2D0u;
label_18d2d0:
    // 0x18d2d0: 0xc0643f8  jal         func_190FE0
label_18d2d4:
    if (ctx->pc == 0x18D2D4u) {
        ctx->pc = 0x18D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D0u;
        // 0x18d2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2D8u;
        goto label_18d2d8;
    }
    ctx->pc = 0x18D2D0u;
    SET_GPR_U32(ctx, 31, 0x18D2D8u);
    ctx->pc = 0x18D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2D0u;
    // 0x18d2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190FE0u, 0x18D2D0u, 0x18D2D8u)) {
        return;
    }
    ctx->pc = 0x18D2D8u;
label_18d2d8:
    // 0x18d2d8: 0x10000091  b           . + 4 + (0x91 << 2)
label_18d2dc:
    if (ctx->pc == 0x18D2DCu) {
        ctx->pc = 0x18D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D8u;
        // 0x18d2dc: 0xae0000ac  sw          $zero, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2E0u;
        goto label_18d2e0;
    }
    ctx->pc = 0x18D2D8u;
    {
        const bool branch_taken_0x18d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D8u;
        // 0x18d2dc: 0xae0000ac  sw          $zero, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2d8) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D2E0u;
label_18d2e0:
    // 0x18d2e0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x18d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_18d2e4:
    // 0x18d2e4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_18d2e8:
    if (ctx->pc == 0x18D2E8u) {
        ctx->pc = 0x18D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E4u;
        // 0x18d2e8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2ECu;
        goto label_18d2ec;
    }
    ctx->pc = 0x18D2E4u;
    {
        const bool branch_taken_0x18d2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E4u;
        // 0x18d2e8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e4) {
            ctx->pc = 0x18D398u;
            goto label_18d398;
        }
    }
    ctx->pc = 0x18D2ECu;
label_18d2ec:
    // 0x18d2ec: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_18d2f0:
    // 0x18d2f0: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
label_18d2f4:
    // 0x18d2f4: 0x14a20028  bne         $a1, $v0, . + 4 + (0x28 << 2)
label_18d2f8:
    if (ctx->pc == 0x18D2F8u) {
        ctx->pc = 0x18D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2F4u;
        // 0x18d2f8: 0x24718880  addiu       $s1, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2FCu;
        goto label_18d2fc;
    }
    ctx->pc = 0x18D2F4u;
    {
        const bool branch_taken_0x18d2f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2F4u;
        // 0x18d2f8: 0x24718880  addiu       $s1, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2f4) {
            ctx->pc = 0x18D398u;
            goto label_18d398;
        }
    }
    ctx->pc = 0x18D2FCu;
label_18d2fc:
    // 0x18d2fc: 0xc07600c  jal         func_1D8030
label_18d300:
    if (ctx->pc == 0x18D300u) {
        ctx->pc = 0x18D304u;
        goto label_18d304;
    }
    ctx->pc = 0x18D2FCu;
    SET_GPR_U32(ctx, 31, 0x18D304u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x18D2FCu, 0x18D304u)) {
        return;
    }
    ctx->pc = 0x18D304u;
label_18d304:
    // 0x18d304: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d308:
    // 0x18d308: 0xc60100cc  lwc1        $f1, 0xCC($s0)
    ctx->pc = 0x18d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d30c:
    // 0x18d30c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x18d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18d310:
    // 0x18d310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d314:
    // 0x18d314: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x18d314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d318:
    // 0x18d318: 0x0  nop
    ctx->pc = 0x18d318u;
    // NOP
label_18d31c:
    // 0x18d31c: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_18d320:
    if (ctx->pc == 0x18D320u) {
        ctx->pc = 0x18D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D31Cu;
        // 0x18d320: 0xe60100cc  swc1        $f1, 0xCC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D324u;
        goto label_18d324;
    }
    ctx->pc = 0x18D31Cu;
    {
        const bool branch_taken_0x18d31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D31Cu;
        // 0x18d320: 0xe60100cc  swc1        $f1, 0xCC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d31c) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D324u;
label_18d324:
    // 0x18d324: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x18d324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_18d328:
    // 0x18d328: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x18d328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_18d32c:
    // 0x18d32c: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x18d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_18d330:
    // 0x18d330: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d334:
    // 0x18d334: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d338:
    // 0x18d338: 0x40f809  jalr        $v0
label_18d33c:
    if (ctx->pc == 0x18D33Cu) {
        ctx->pc = 0x18D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D338u;
        // 0x18d33c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D340u;
        goto label_18d340;
    }
    ctx->pc = 0x18D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D340u);
        ctx->pc = 0x18D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D338u;
        // 0x18d33c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D338u, 0x18D340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D340u;
label_18d340:
    // 0x18d340: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x18d340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_18d344:
    // 0x18d344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d348:
    // 0x18d348: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x18d348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_18d34c:
    // 0x18d34c: 0xc07fb0c  jal         func_1FEC30
label_18d350:
    if (ctx->pc == 0x18D350u) {
        ctx->pc = 0x18D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D34Cu;
        // 0x18d350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D354u;
        goto label_18d354;
    }
    ctx->pc = 0x18D34Cu;
    SET_GPR_U32(ctx, 31, 0x18D354u);
    ctx->pc = 0x18D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D34Cu;
    // 0x18d350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18D34Cu, 0x18D354u)) {
        return;
    }
    ctx->pc = 0x18D354u;
label_18d354:
    // 0x18d354: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_18d358:
    // 0x18d358: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_18d35c:
    // 0x18d35c: 0x8c4546c8  lw          $a1, 0x46C8($v0)
    ctx->pc = 0x18d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18120)));
label_18d360:
    // 0x18d360: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18d364:
    // 0x18d364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d368:
    // 0x18d368: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_18d36c:
    // 0x18d36c: 0x10a4006c  beq         $a1, $a0, . + 4 + (0x6C << 2)
label_18d370:
    if (ctx->pc == 0x18D370u) {
        ctx->pc = 0x18D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D36Cu;
        // 0x18d370: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D374u;
        goto label_18d374;
    }
    ctx->pc = 0x18D36Cu;
    {
        const bool branch_taken_0x18d36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x18D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D36Cu;
        // 0x18d370: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d36c) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D374u;
label_18d374:
    // 0x18d374: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d378:
    // 0x18d378: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_18d37c:
    if (ctx->pc == 0x18D37Cu) {
        ctx->pc = 0x18D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D378u;
        // 0x18d37c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D380u;
        goto label_18d380;
    }
    ctx->pc = 0x18D378u;
    {
        const bool branch_taken_0x18d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D378u;
        // 0x18d37c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d378) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D380u;
label_18d380:
    // 0x18d380: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_18d384:
    // 0x18d384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d388:
    // 0x18d388: 0xc07fd18  jal         func_1FF460
label_18d38c:
    if (ctx->pc == 0x18D38Cu) {
        ctx->pc = 0x18D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D388u;
        // 0x18d38c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D390u;
        goto label_18d390;
    }
    ctx->pc = 0x18D388u;
    SET_GPR_U32(ctx, 31, 0x18D390u);
    ctx->pc = 0x18D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D388u;
    // 0x18d38c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18D388u, 0x18D390u)) {
        return;
    }
    ctx->pc = 0x18D390u;
label_18d390:
    // 0x18d390: 0x10000064  b           . + 4 + (0x64 << 2)
label_18d394:
    if (ctx->pc == 0x18D394u) {
        ctx->pc = 0x18D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D390u;
        // 0x18d394: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D398u;
        goto label_18d398;
    }
    ctx->pc = 0x18D390u;
    {
        const bool branch_taken_0x18d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D390u;
        // 0x18d394: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d390) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D398u;
label_18d398:
    // 0x18d398: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_18d39c:
    // 0x18d39c: 0x8c43bd90  lw          $v1, -0x4270($v0)
    ctx->pc = 0x18d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950288)));
label_18d3a0:
    // 0x18d3a0: 0x14a30035  bne         $a1, $v1, . + 4 + (0x35 << 2)
label_18d3a4:
    if (ctx->pc == 0x18D3A4u) {
        ctx->pc = 0x18D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A0u;
        // 0x18d3a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3A8u;
        goto label_18d3a8;
    }
    ctx->pc = 0x18D3A0u;
    {
        const bool branch_taken_0x18d3a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A0u;
        // 0x18d3a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3a0) {
            ctx->pc = 0x18D478u;
            goto label_18d478;
        }
    }
    ctx->pc = 0x18D3A8u;
label_18d3a8:
    // 0x18d3a8: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18d3ac:
    // 0x18d3ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_18d3b0:
    if (ctx->pc == 0x18D3B0u) {
        ctx->pc = 0x18D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ACu;
        // 0x18d3b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B4u;
        goto label_18d3b4;
    }
    ctx->pc = 0x18D3ACu;
    {
        const bool branch_taken_0x18d3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ACu;
        // 0x18d3b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3ac) {
            ctx->pc = 0x18D3D4u;
            goto label_18d3d4;
        }
    }
    ctx->pc = 0x18D3B4u;
label_18d3b4:
    // 0x18d3b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_18d3b8:
    // 0x18d3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d3bc:
    // 0x18d3bc: 0x8c458b18  lw          $a1, -0x74E8($v0)
    ctx->pc = 0x18d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937368)));
label_18d3c0:
    // 0x18d3c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3c4:
    // 0x18d3c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3c8:
    // 0x18d3c8: 0xc0636ea  jal         func_18DBA8
label_18d3cc:
    if (ctx->pc == 0x18D3CCu) {
        ctx->pc = 0x18D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3C8u;
        // 0x18d3cc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D0u;
        goto label_18d3d0;
    }
    ctx->pc = 0x18D3C8u;
    SET_GPR_U32(ctx, 31, 0x18D3D0u);
    ctx->pc = 0x18D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3C8u;
    // 0x18d3cc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x18D3C8u, 0x18D3D0u)) {
        return;
    }
    ctx->pc = 0x18D3D0u;
label_18d3d0:
    // 0x18d3d0: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x18d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_18d3d4:
    // 0x18d3d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x18d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_18d3d8:
    // 0x18d3d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_18d3dc:
    if (ctx->pc == 0x18D3DCu) {
        ctx->pc = 0x18D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D8u;
        // 0x18d3dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3E0u;
        goto label_18d3e0;
    }
    ctx->pc = 0x18D3D8u;
    {
        const bool branch_taken_0x18d3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D8u;
        // 0x18d3dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3d8) {
            ctx->pc = 0x18D400u;
            goto label_18d400;
        }
    }
    ctx->pc = 0x18D3E0u;
label_18d3e0:
    // 0x18d3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d3e4:
    // 0x18d3e4: 0x8c458b14  lw          $a1, -0x74EC($v0)
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937364)));
label_18d3e8:
    // 0x18d3e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3ec:
    // 0x18d3ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3f0:
    // 0x18d3f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d3f4:
    // 0x18d3f4: 0xc0636ea  jal         func_18DBA8
label_18d3f8:
    if (ctx->pc == 0x18D3F8u) {
        ctx->pc = 0x18D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3F4u;
        // 0x18d3f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3FCu;
        goto label_18d3fc;
    }
    ctx->pc = 0x18D3F4u;
    SET_GPR_U32(ctx, 31, 0x18D3FCu);
    ctx->pc = 0x18D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3F4u;
    // 0x18d3f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x18D3F4u, 0x18D3FCu)) {
        return;
    }
    ctx->pc = 0x18D3FCu;
label_18d3fc:
    // 0x18d3fc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x18d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_18d400:
    // 0x18d400: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_18d404:
    if (ctx->pc == 0x18D404u) {
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D408u;
        goto label_18d408;
    }
    ctx->pc = 0x18D400u;
    {
        const bool branch_taken_0x18d400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d400) {
            ctx->pc = 0x18D440u;
            goto label_18d440;
        }
    }
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_18d40c:
    // 0x18d40c: 0x8c668b20  lw          $a2, -0x74E0($v1)
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
label_18d410:
    // 0x18d410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d414:
    // 0x18d414: 0x8c458b1c  lw          $a1, -0x74E4($v0)
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937372)));
label_18d418:
    // 0x18d418: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d41c:
    // 0x18d41c: 0xc0636ea  jal         func_18DBA8
label_18d420:
    if (ctx->pc == 0x18D420u) {
        ctx->pc = 0x18D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D41Cu;
        // 0x18d420: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D424u;
        goto label_18d424;
    }
    ctx->pc = 0x18D41Cu;
    SET_GPR_U32(ctx, 31, 0x18D424u);
    ctx->pc = 0x18D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D41Cu;
    // 0x18d420: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x18D41Cu, 0x18D424u)) {
        return;
    }
    ctx->pc = 0x18D424u;
label_18d424:
    // 0x18d424: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_18d428:
    // 0x18d428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d42c:
    // 0x18d42c: 0x8c658b28  lw          $a1, -0x74D8($v1)
    ctx->pc = 0x18d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937384)));
label_18d430:
    // 0x18d430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d434:
    // 0x18d434: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d438:
    // 0x18d438: 0xc0636ea  jal         func_18DBA8
label_18d43c:
    if (ctx->pc == 0x18D43Cu) {
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D438u;
        // 0x18d43c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D440u;
        goto label_18d440;
    }
    ctx->pc = 0x18D438u;
    SET_GPR_U32(ctx, 31, 0x18D440u);
    ctx->pc = 0x18D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D438u;
    // 0x18d43c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x18D438u, 0x18D440u)) {
        return;
    }
    ctx->pc = 0x18D440u;
label_18d440:
    // 0x18d440: 0xc07600c  jal         func_1D8030
label_18d444:
    if (ctx->pc == 0x18D444u) {
        ctx->pc = 0x18D448u;
        goto label_18d448;
    }
    ctx->pc = 0x18D440u;
    SET_GPR_U32(ctx, 31, 0x18D448u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x18D440u, 0x18D448u)) {
        return;
    }
    ctx->pc = 0x18D448u;
label_18d448:
    // 0x18d448: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_18d44c:
    // 0x18d44c: 0x8c621988  lw          $v0, 0x1988($v1)
    ctx->pc = 0x18d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6536)));
label_18d450:
    // 0x18d450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18d454:
    if (ctx->pc == 0x18D454u) {
        ctx->pc = 0x18D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D450u;
        // 0x18d454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D458u;
        goto label_18d458;
    }
    ctx->pc = 0x18D450u;
    {
        const bool branch_taken_0x18d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D450u;
        // 0x18d454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d450) {
            ctx->pc = 0x18D460u;
            goto label_18d460;
        }
    }
    ctx->pc = 0x18D458u;
label_18d458:
    // 0x18d458: 0x8c62198c  lw          $v0, 0x198C($v1)
    ctx->pc = 0x18d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6540)));
label_18d45c:
    // 0x18d45c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18d460:
    // 0x18d460: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x18d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_18d464:
    // 0x18d464: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x18d464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
label_18d468:
    // 0x18d468: 0x8c631524  lw          $v1, 0x1524($v1)
    ctx->pc = 0x18d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5412)));
label_18d46c:
    // 0x18d46c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x18d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18d470:
    // 0x18d470: 0x1000002b  b           . + 4 + (0x2B << 2)
label_18d474:
    if (ctx->pc == 0x18D474u) {
        ctx->pc = 0x18D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D470u;
        // 0x18d474: 0xac430068  sw          $v1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D478u;
        goto label_18d478;
    }
    ctx->pc = 0x18D470u;
    {
        const bool branch_taken_0x18d470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D470u;
        // 0x18d474: 0xac430068  sw          $v1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d470) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D478u;
label_18d478:
    // 0x18d478: 0x8c434700  lw          $v1, 0x4700($v0)
    ctx->pc = 0x18d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18176)));
label_18d47c:
    // 0x18d47c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_18d480:
    if (ctx->pc == 0x18D480u) {
        ctx->pc = 0x18D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D47Cu;
        // 0x18d480: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D484u;
        goto label_18d484;
    }
    ctx->pc = 0x18D47Cu;
    {
        const bool branch_taken_0x18d47c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D47Cu;
        // 0x18d480: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d47c) {
            ctx->pc = 0x18D48Cu;
            goto label_18d48c;
        }
    }
    ctx->pc = 0x18D484u;
label_18d484:
    // 0x18d484: 0x1000000a  b           . + 4 + (0xA << 2)
label_18d488:
    if (ctx->pc == 0x18D488u) {
        ctx->pc = 0x18D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D484u;
        // 0x18d488: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D48Cu;
        goto label_18d48c;
    }
    ctx->pc = 0x18D484u;
    {
        const bool branch_taken_0x18d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D484u;
        // 0x18d488: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d484) {
            ctx->pc = 0x18D4B0u;
            goto label_18d4b0;
        }
    }
    ctx->pc = 0x18D48Cu;
label_18d48c:
    // 0x18d48c: 0x8c4346f8  lw          $v1, 0x46F8($v0)
    ctx->pc = 0x18d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
label_18d490:
    // 0x18d490: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_18d494:
    if (ctx->pc == 0x18D494u) {
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D498u;
        goto label_18d498;
    }
    ctx->pc = 0x18D490u;
    {
        const bool branch_taken_0x18d490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d490) {
            ctx->pc = 0x18D4A0u;
            goto label_18d4a0;
        }
    }
    ctx->pc = 0x18D498u;
label_18d498:
    // 0x18d498: 0x1000000d  b           . + 4 + (0xD << 2)
label_18d49c:
    if (ctx->pc == 0x18D49Cu) {
        ctx->pc = 0x18D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D498u;
        // 0x18d49c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4A0u;
        goto label_18d4a0;
    }
    ctx->pc = 0x18D498u;
    {
        const bool branch_taken_0x18d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D498u;
        // 0x18d49c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d498) {
            ctx->pc = 0x18D4D0u;
            goto label_18d4d0;
        }
    }
    ctx->pc = 0x18D4A0u;
label_18d4a0:
    // 0x18d4a0: 0x8c434728  lw          $v1, 0x4728($v0)
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_18d4a4:
    // 0x18d4a4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_18d4a8:
    if (ctx->pc == 0x18D4A8u) {
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A4u;
        // 0x18d4a8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ACu;
        goto label_18d4ac;
    }
    ctx->pc = 0x18D4A4u;
    {
        const bool branch_taken_0x18d4a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A4u;
        // 0x18d4a8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4a4) {
            ctx->pc = 0x18D4C0u;
            goto label_18d4c0;
        }
    }
    ctx->pc = 0x18D4ACu;
label_18d4ac:
    // 0x18d4ac: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x18d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18d4b0:
    // 0x18d4b0: 0x5480001b  bnel        $a0, $zero, . + 4 + (0x1B << 2)
label_18d4b4:
    if (ctx->pc == 0x18D4B4u) {
        ctx->pc = 0x18D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B0u;
        // 0x18d4b4: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4B8u;
        goto label_18d4b8;
    }
    ctx->pc = 0x18D4B0u;
    {
        const bool branch_taken_0x18d4b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d4b0) {
            ctx->pc = 0x18D4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D4B0u;
            // 0x18d4b4: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D4B8u;
label_18d4b8:
    // 0x18d4b8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_18d4bc:
    if (ctx->pc == 0x18D4BCu) {
        ctx->pc = 0x18D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B8u;
        // 0x18d4bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4C0u;
        goto label_18d4c0;
    }
    ctx->pc = 0x18D4B8u;
    {
        const bool branch_taken_0x18d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B8u;
        // 0x18d4bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4b8) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D4C0u;
label_18d4c0:
    // 0x18d4c0: 0x8c434720  lw          $v1, 0x4720($v0)
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18208)));
label_18d4c4:
    // 0x18d4c4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_18d4c8:
    if (ctx->pc == 0x18D4C8u) {
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4CCu;
        goto label_18d4cc;
    }
    ctx->pc = 0x18D4C4u;
    {
        const bool branch_taken_0x18d4c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4c4) {
            ctx->pc = 0x18D4E0u;
            goto label_18d4e0;
        }
    }
    ctx->pc = 0x18D4CCu;
label_18d4cc:
    // 0x18d4cc: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x18d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18d4d0:
    // 0x18d4d0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_18d4d4:
    if (ctx->pc == 0x18D4D4u) {
        ctx->pc = 0x18D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D0u;
        // 0x18d4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4D8u;
        goto label_18d4d8;
    }
    ctx->pc = 0x18D4D0u;
    {
        const bool branch_taken_0x18d4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D0u;
        // 0x18d4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4d0) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D4D8u;
label_18d4d8:
    // 0x18d4d8: 0x10000011  b           . + 4 + (0x11 << 2)
label_18d4dc:
    if (ctx->pc == 0x18D4DCu) {
        ctx->pc = 0x18D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D8u;
        // 0x18d4dc: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4E0u;
        goto label_18d4e0;
    }
    ctx->pc = 0x18D4D8u;
    {
        const bool branch_taken_0x18d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D8u;
        // 0x18d4dc: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4d8) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D4E0u;
label_18d4e0:
    // 0x18d4e0: 0x8c628908  lw          $v0, -0x76F8($v1)
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936840)));
label_18d4e4:
    // 0x18d4e4: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
label_18d4e8:
    if (ctx->pc == 0x18D4E8u) {
        ctx->pc = 0x18D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E4u;
        // 0x18d4e8: 0x24718908  addiu       $s1, $v1, -0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ECu;
        goto label_18d4ec;
    }
    ctx->pc = 0x18D4E4u;
    {
        const bool branch_taken_0x18d4e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E4u;
        // 0x18d4e8: 0x24718908  addiu       $s1, $v1, -0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4e4) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D4ECu;
label_18d4ec:
    // 0x18d4ec: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_18d4f0:
    // 0x18d4f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_18d4f4:
    if (ctx->pc == 0x18D4F4u) {
        ctx->pc = 0x18D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F0u;
        // 0x18d4f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4F8u;
        goto label_18d4f8;
    }
    ctx->pc = 0x18D4F0u;
    {
        const bool branch_taken_0x18d4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4f0) {
            ctx->pc = 0x18D4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D4F0u;
            // 0x18d4f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D4F8u;
label_18d4f8:
    // 0x18d4f8: 0xc081042  jal         func_204108
label_18d4fc:
    if (ctx->pc == 0x18D4FCu) {
        ctx->pc = 0x18D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F8u;
        // 0x18d4fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D500u;
        goto label_18d500;
    }
    ctx->pc = 0x18D4F8u;
    SET_GPR_U32(ctx, 31, 0x18D500u);
    ctx->pc = 0x18D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4F8u;
    // 0x18d4fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204108u, 0x18D4F8u, 0x18D500u)) {
        return;
    }
    ctx->pc = 0x18D500u;
label_18d500:
    // 0x18d500: 0xc07f438  jal         func_1FD0E0
label_18d504:
    if (ctx->pc == 0x18D504u) {
        ctx->pc = 0x18D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D500u;
        // 0x18d504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D508u;
        goto label_18d508;
    }
    ctx->pc = 0x18D500u;
    SET_GPR_U32(ctx, 31, 0x18D508u);
    ctx->pc = 0x18D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D500u;
    // 0x18d504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD0E0u, 0x18D500u, 0x18D508u)) {
        return;
    }
    ctx->pc = 0x18D508u;
label_18d508:
    // 0x18d508: 0xc0804a8  jal         func_2012A0
label_18d50c:
    if (ctx->pc == 0x18D50Cu) {
        ctx->pc = 0x18D510u;
        goto label_18d510;
    }
    ctx->pc = 0x18D508u;
    SET_GPR_U32(ctx, 31, 0x18D510u);
    ctx->pc = 0x2012A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2012A0u, 0x18D508u, 0x18D510u)) {
        return;
    }
    ctx->pc = 0x18D510u;
label_18d510:
    // 0x18d510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d514:
    // 0x18d514: 0xc07fb0c  jal         func_1FEC30
label_18d518:
    if (ctx->pc == 0x18D518u) {
        ctx->pc = 0x18D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D514u;
        // 0x18d518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D51Cu;
        goto label_18d51c;
    }
    ctx->pc = 0x18D514u;
    SET_GPR_U32(ctx, 31, 0x18D51Cu);
    ctx->pc = 0x18D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D514u;
    // 0x18d518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18D514u, 0x18D51Cu)) {
        return;
    }
    ctx->pc = 0x18D51Cu;
label_18d51c:
    // 0x18d51c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x18d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_18d520:
    // 0x18d520: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18d520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18d524:
    // 0x18d524: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18d524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18d528:
    // 0x18d528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d52c:
    // 0x18d52c: 0x3e00008  jr          $ra
label_18d530:
    if (ctx->pc == 0x18D530u) {
        ctx->pc = 0x18D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D52Cu;
        // 0x18d530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D534u;
        goto label_18d534;
    }
    ctx->pc = 0x18D52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D52Cu;
        // 0x18d530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D534u;
label_18d534:
    // 0x18d534: 0x0  nop
    ctx->pc = 0x18d534u;
    // NOP
    ctx->pc = 0x18d538u;
}

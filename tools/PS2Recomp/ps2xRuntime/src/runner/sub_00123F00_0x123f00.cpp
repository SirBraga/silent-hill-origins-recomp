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

// Function: sub_00123F00
// Address: 0x123f00 - 0x1242c0
void sub_00123F00_0x123f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123F00_0x123f00");
#endif

    switch (ctx->pc) {
        case 0x123f00u: goto label_123f00;
        case 0x123f04u: goto label_123f04;
        case 0x123f08u: goto label_123f08;
        case 0x123f0cu: goto label_123f0c;
        case 0x123f10u: goto label_123f10;
        case 0x123f14u: goto label_123f14;
        case 0x123f18u: goto label_123f18;
        case 0x123f1cu: goto label_123f1c;
        case 0x123f20u: goto label_123f20;
        case 0x123f24u: goto label_123f24;
        case 0x123f28u: goto label_123f28;
        case 0x123f2cu: goto label_123f2c;
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        case 0x124248u: goto label_124248;
        case 0x12424cu: goto label_12424c;
        case 0x124250u: goto label_124250;
        case 0x124254u: goto label_124254;
        case 0x124258u: goto label_124258;
        case 0x12425cu: goto label_12425c;
        case 0x124260u: goto label_124260;
        case 0x124264u: goto label_124264;
        case 0x124268u: goto label_124268;
        case 0x12426cu: goto label_12426c;
        case 0x124270u: goto label_124270;
        case 0x124274u: goto label_124274;
        case 0x124278u: goto label_124278;
        case 0x12427cu: goto label_12427c;
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        default: break;
    }

    ctx->pc = 0x123f00u;

label_123f00:
    // 0x123f00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_123f04:
    // 0x123f04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x123f04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123f08:
    // 0x123f08: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x123f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_123f0c:
    // 0x123f0c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x123f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_123f10:
    // 0x123f10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123f14:
    // 0x123f14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x123f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_123f18:
    // 0x123f18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123f1c:
    // 0x123f1c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x123f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_123f20:
    // 0x123f20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x123f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_123f24:
    // 0x123f24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x123f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_123f28:
    // 0x123f28: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x123f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_123f2c:
    // 0x123f2c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x123f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_123f30:
    // 0x123f30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x123f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_123f34:
    // 0x123f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_123f38:
    // 0x123f38: 0x8e220f54  lw          $v0, 0xF54($s1)
    ctx->pc = 0x123f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3924)));
label_123f3c:
    // 0x123f3c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x123f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_123f40:
    // 0x123f40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_123f44:
    if (ctx->pc == 0x123F44u) {
        ctx->pc = 0x123F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F40u;
        // 0x123f44: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F48u;
        goto label_123f48;
    }
    ctx->pc = 0x123F40u;
    {
        const bool branch_taken_0x123f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F40u;
        // 0x123f44: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f40) {
            ctx->pc = 0x123F54u;
            goto label_123f54;
        }
    }
    ctx->pc = 0x123F48u;
label_123f48:
    // 0x123f48: 0x8e220f68  lw          $v0, 0xF68($s1)
    ctx->pc = 0x123f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3944)));
label_123f4c:
    // 0x123f4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_123f50:
    if (ctx->pc == 0x123F50u) {
        ctx->pc = 0x123F54u;
        goto label_123f54;
    }
    ctx->pc = 0x123F4Cu;
    {
        const bool branch_taken_0x123f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f4c) {
            ctx->pc = 0x123F58u;
            goto label_123f58;
        }
    }
    ctx->pc = 0x123F54u;
label_123f54:
    // 0x123f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123f58:
    // 0x123f58: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
label_123f5c:
    if (ctx->pc == 0x123F5Cu) {
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F60u;
        goto label_123f60;
    }
    ctx->pc = 0x123F58u;
    {
        const bool branch_taken_0x123f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f58) {
            ctx->pc = 0x12429Cu;
            goto label_12429c;
        }
    }
    ctx->pc = 0x123F60u;
label_123f60:
    // 0x123f60: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123f64:
    // 0x123f64: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_123f68:
    // 0x123f68: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x123f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_123f6c:
    // 0x123f6c: 0x60f809  jalr        $v1
label_123f70:
    if (ctx->pc == 0x123F70u) {
        ctx->pc = 0x123F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F6Cu;
        // 0x123f70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F74u;
        goto label_123f74;
    }
    ctx->pc = 0x123F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123F74u);
        ctx->pc = 0x123F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F6Cu;
        // 0x123f70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F6Cu, 0x123F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123F74u;
label_123f74:
    // 0x123f74: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x123f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_123f78:
    // 0x123f78: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x123f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_123f7c:
    // 0x123f7c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x123f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_123f80:
    // 0x123f80: 0xb2220beb  sdl         $v0, 0xBEB($s1)
    ctx->pc = 0x123f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3051); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123f84:
    // 0x123f84: 0xb6220be4  sdr         $v0, 0xBE4($s1)
    ctx->pc = 0x123f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3044); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123f88:
    // 0x123f88: 0xae230bec  sw          $v1, 0xBEC($s1)
    ctx->pc = 0x123f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3052), GPR_U32(ctx, 3));
label_123f8c:
    // 0x123f8c: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x123f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_123f90:
    // 0x123f90: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x123f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_123f94:
    // 0x123f94: 0xb2260f7f  sdl         $a2, 0xF7F($s1)
    ctx->pc = 0x123f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123f98:
    // 0x123f98: 0xb6260f78  sdr         $a2, 0xF78($s1)
    ctx->pc = 0x123f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123f9c:
    // 0x123f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123fa0:
    // 0x123fa0: 0x6a450007  ldl         $a1, 0x7($s2)
    ctx->pc = 0x123fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_123fa4:
    // 0x123fa4: 0x6e450000  ldr         $a1, 0x0($s2)
    ctx->pc = 0x123fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_123fa8:
    // 0x123fa8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_123fac:
    // 0x123fac: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x123facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123fb0:
    // 0x123fb0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x123fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123fb4:
    // 0x123fb4: 0xc04f0cc  jal         func_13C330
label_123fb8:
    if (ctx->pc == 0x123FB8u) {
        ctx->pc = 0x123FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FB4u;
        // 0x123fb8: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FBCu;
        goto label_123fbc;
    }
    ctx->pc = 0x123FB4u;
    SET_GPR_U32(ctx, 31, 0x123FBCu);
    ctx->pc = 0x123FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FB4u;
    // 0x123fb8: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x123FB4u, 0x123FBCu)) {
        return;
    }
    ctx->pc = 0x123FBCu;
label_123fbc:
    // 0x123fbc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123fc0:
    // 0x123fc0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x123fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123fc4:
    // 0x123fc4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x123fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123fc8:
    // 0x123fc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x123fc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_123fcc:
    // 0x123fcc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x123fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_123fd0:
    // 0x123fd0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x123fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_123fd4:
    // 0x123fd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x123fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123fd8:
    // 0x123fd8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x123fd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_123fdc:
    // 0x123fdc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x123fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_123fe0:
    // 0x123fe0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x123fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123fe4:
    // 0x123fe4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x123fe4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_123fe8:
    // 0x123fe8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x123fe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_123fec:
    // 0x123fec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x123fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_123ff0:
    // 0x123ff0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x123ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123ff4:
    // 0x123ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123ff8:
    // 0x123ff8: 0xc04642c  jal         func_1190B0
label_123ffc:
    if (ctx->pc == 0x123FFCu) {
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124000u;
        goto label_124000;
    }
    ctx->pc = 0x123FF8u;
    SET_GPR_U32(ctx, 31, 0x124000u);
    ctx->pc = 0x123FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123FF8u;
    // 0x123ffc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x123FF8u, 0x124000u)) {
        return;
    }
    ctx->pc = 0x124000u;
label_124000:
    // 0x124000: 0x0  nop
    ctx->pc = 0x124000u;
    // NOP
label_124004:
    // 0x124004: 0x0  nop
    ctx->pc = 0x124004u;
    // NOP
label_124008:
    // 0x124008: 0x46000044  c1          0x44
    ctx->pc = 0x124008u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_12400c:
    // 0x12400c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12400cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124010:
    // 0x124010: 0x0  nop
    ctx->pc = 0x124010u;
    // NOP
label_124014:
    // 0x124014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x124014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124018:
    // 0x124018: 0x0  nop
    ctx->pc = 0x124018u;
    // NOP
label_12401c:
    // 0x12401c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_124020:
    if (ctx->pc == 0x124020u) {
        ctx->pc = 0x124020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12401Cu;
        // 0x124020: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124024u;
        goto label_124024;
    }
    ctx->pc = 0x12401Cu;
    {
        const bool branch_taken_0x12401c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x124020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12401Cu;
        // 0x124020: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12401c) {
            ctx->pc = 0x1240A0u;
            goto label_1240a0;
        }
    }
    ctx->pc = 0x124024u;
label_124024:
    // 0x124024: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x124024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124028:
    // 0x124028: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x124028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12402c:
    // 0x12402c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_124030:
    // 0x124030: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x124030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_124034:
    // 0x124034: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x124034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_124038:
    // 0x124038: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x124038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12403c:
    // 0x12403c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_124040:
    // 0x124040: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x124040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_124044:
    // 0x124044: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x124044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_124048:
    // 0x124048: 0xc04f0f0  jal         func_13C3C0
label_12404c:
    if (ctx->pc == 0x12404Cu) {
        ctx->pc = 0x12404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124048u;
        // 0x12404c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124050u;
        goto label_124050;
    }
    ctx->pc = 0x124048u;
    SET_GPR_U32(ctx, 31, 0x124050u);
    ctx->pc = 0x12404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124048u;
    // 0x12404c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x124048u, 0x124050u)) {
        return;
    }
    ctx->pc = 0x124050u;
label_124050:
    // 0x124050: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x124050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124054:
    // 0x124054: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x124054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_124058:
    // 0x124058: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x124058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12405c:
    // 0x12405c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x12405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_124060:
    // 0x124060: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x124060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_124064:
    // 0x124064: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x124064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_124068:
    // 0x124068: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x124068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12406c:
    // 0x12406c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x12406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124070:
    // 0x124070: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
label_124074:
    // 0x124074: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x124074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_124078:
    // 0x124078: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12407c:
    // 0x12407c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12407cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_124080:
    // 0x124080: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x124080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_124084:
    // 0x124084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x124084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_124088:
    // 0x124088: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x124088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12408c:
    // 0x12408c: 0x0  nop
    ctx->pc = 0x12408cu;
    // NOP
label_124090:
    // 0x124090: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_124094:
    if (ctx->pc == 0x124094u) {
        ctx->pc = 0x124094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124090u;
        // 0x124094: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124098u;
        goto label_124098;
    }
    ctx->pc = 0x124090u;
    {
        const bool branch_taken_0x124090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124090u;
        // 0x124094: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124090) {
            ctx->pc = 0x1240B8u;
            goto label_1240b8;
        }
    }
    ctx->pc = 0x124098u;
label_124098:
    // 0x124098: 0x10000014  b           . + 4 + (0x14 << 2)
label_12409c:
    if (ctx->pc == 0x12409Cu) {
        ctx->pc = 0x12409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124098u;
        // 0x12409c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240A0u;
        goto label_1240a0;
    }
    ctx->pc = 0x124098u;
    {
        const bool branch_taken_0x124098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124098u;
        // 0x12409c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124098) {
            ctx->pc = 0x1240ECu;
            goto label_1240ec;
        }
    }
    ctx->pc = 0x1240A0u;
label_1240a0:
    // 0x1240a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1240a4:
    // 0x1240a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1240a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1240a8:
    // 0x1240a8: 0x0  nop
    ctx->pc = 0x1240a8u;
    // NOP
label_1240ac:
    // 0x1240ac: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1240acu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1240b0:
    // 0x1240b0: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_1240b4:
    if (ctx->pc == 0x1240B4u) {
        ctx->pc = 0x1240B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240B0u;
        // 0x1240b4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240B8u;
        goto label_1240b8;
    }
    ctx->pc = 0x1240B0u;
    {
        const bool branch_taken_0x1240b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240B0u;
        // 0x1240b4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240b0) {
            ctx->pc = 0x124028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124028;
        }
    }
    ctx->pc = 0x1240B8u;
label_1240b8:
    // 0x1240b8: 0x26300e00  addiu       $s0, $s1, 0xE00
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3584));
label_1240bc:
    // 0x1240bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1240bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1240c0:
    // 0x1240c0: 0xc0499c6  jal         func_126718
label_1240c4:
    if (ctx->pc == 0x1240C4u) {
        ctx->pc = 0x1240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240C0u;
        // 0x1240c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240C8u;
        goto label_1240c8;
    }
    ctx->pc = 0x1240C0u;
    SET_GPR_U32(ctx, 31, 0x1240C8u);
    ctx->pc = 0x1240C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240C0u;
    // 0x1240c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126718u, 0x1240C0u, 0x1240C8u)) {
        return;
    }
    ctx->pc = 0x1240C8u;
label_1240c8:
    // 0x1240c8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1240cc:
    // 0x1240cc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1240ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1240d0:
    // 0x1240d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1240d4:
    if (ctx->pc == 0x1240D4u) {
        ctx->pc = 0x1240D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D0u;
        // 0x1240d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240D8u;
        goto label_1240d8;
    }
    ctx->pc = 0x1240D0u;
    {
        const bool branch_taken_0x1240d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D0u;
        // 0x1240d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240d0) {
            ctx->pc = 0x1240E8u;
            goto label_1240e8;
        }
    }
    ctx->pc = 0x1240D8u;
label_1240d8:
    // 0x1240d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1240d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1240dc:
    // 0x1240dc: 0xc0499dc  jal         func_126770
label_1240e0:
    if (ctx->pc == 0x1240E0u) {
        ctx->pc = 0x1240E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240DCu;
        // 0x1240e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240E4u;
        goto label_1240e4;
    }
    ctx->pc = 0x1240DCu;
    SET_GPR_U32(ctx, 31, 0x1240E4u);
    ctx->pc = 0x1240E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240DCu;
    // 0x1240e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126770u, 0x1240DCu, 0x1240E4u)) {
        return;
    }
    ctx->pc = 0x1240E4u;
label_1240e4:
    // 0x1240e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1240e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1240e8:
    // 0x1240e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1240ec:
    // 0x1240ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1240ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1240f0:
    // 0x1240f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1240f4:
    if (ctx->pc == 0x1240F4u) {
        ctx->pc = 0x1240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F0u;
        // 0x1240f4: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240F8u;
        goto label_1240f8;
    }
    ctx->pc = 0x1240F0u;
    {
        const bool branch_taken_0x1240f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F0u;
        // 0x1240f4: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240f0) {
            ctx->pc = 0x124124u;
            goto label_124124;
        }
    }
    ctx->pc = 0x1240F8u;
label_1240f8:
    // 0x1240f8: 0x8e250eb8  lw          $a1, 0xEB8($s1)
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3768)));
label_1240fc:
    // 0x1240fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1240fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124100:
    // 0x124100: 0xc043c7c  jal         func_10F1F0
label_124104:
    if (ctx->pc == 0x124104u) {
        ctx->pc = 0x124104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124100u;
        // 0x124104: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124108u;
        goto label_124108;
    }
    ctx->pc = 0x124100u;
    SET_GPR_U32(ctx, 31, 0x124108u);
    ctx->pc = 0x124104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124100u;
    // 0x124104: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x124100u, 0x124108u)) {
        return;
    }
    ctx->pc = 0x124108u;
label_124108:
    // 0x124108: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12410c:
    // 0x12410c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x12410cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_124110:
    // 0x124110: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_124114:
    if (ctx->pc == 0x124114u) {
        ctx->pc = 0x124114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124110u;
        // 0x124114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124118u;
        goto label_124118;
    }
    ctx->pc = 0x124110u;
    {
        const bool branch_taken_0x124110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124110u;
        // 0x124114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124110) {
            ctx->pc = 0x124124u;
            goto label_124124;
        }
    }
    ctx->pc = 0x124118u;
label_124118:
    // 0x124118: 0x8e250ebc  lw          $a1, 0xEBC($s1)
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3772)));
label_12411c:
    // 0x12411c: 0xc043c7c  jal         func_10F1F0
label_124120:
    if (ctx->pc == 0x124120u) {
        ctx->pc = 0x124120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12411Cu;
        // 0x124120: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124124u;
        goto label_124124;
    }
    ctx->pc = 0x12411Cu;
    SET_GPR_U32(ctx, 31, 0x124124u);
    ctx->pc = 0x124120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12411Cu;
    // 0x124120: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x12411Cu, 0x124124u)) {
        return;
    }
    ctx->pc = 0x124124u;
label_124124:
    // 0x124124: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_124128:
    if (ctx->pc == 0x124128u) {
        ctx->pc = 0x124128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124124u;
        // 0x124128: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12412Cu;
        goto label_12412c;
    }
    ctx->pc = 0x124124u;
    {
        const bool branch_taken_0x124124 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x124128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124124u;
        // 0x124128: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124124) {
            ctx->pc = 0x124134u;
            goto label_124134;
        }
    }
    ctx->pc = 0x12412Cu;
label_12412c:
    // 0x12412c: 0x10000036  b           . + 4 + (0x36 << 2)
label_124130:
    if (ctx->pc == 0x124130u) {
        ctx->pc = 0x124130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12412Cu;
        // 0x124130: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124134u;
        goto label_124134;
    }
    ctx->pc = 0x12412Cu;
    {
        const bool branch_taken_0x12412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12412Cu;
        // 0x124130: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12412c) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x124134u;
label_124134:
    // 0x124134: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_124138:
    // 0x124138: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x124138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_12413c:
    // 0x12413c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_124140:
    if (ctx->pc == 0x124140u) {
        ctx->pc = 0x124140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12413Cu;
        // 0x124140: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124144u;
        goto label_124144;
    }
    ctx->pc = 0x12413Cu;
    {
        const bool branch_taken_0x12413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12413Cu;
        // 0x124140: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12413c) {
            ctx->pc = 0x1241CCu;
            goto label_1241cc;
        }
    }
    ctx->pc = 0x124144u;
label_124144:
    // 0x124144: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_124148:
    // 0x124148: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x124148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_12414c:
    // 0x12414c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x12414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_124150:
    // 0x124150: 0x40f809  jalr        $v0
label_124154:
    if (ctx->pc == 0x124154u) {
        ctx->pc = 0x124154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124150u;
        // 0x124154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124158u;
        goto label_124158;
    }
    ctx->pc = 0x124150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124158u);
        ctx->pc = 0x124154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124150u;
        // 0x124154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124150u, 0x124158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124158u;
label_124158:
    // 0x124158: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_12415c:
    if (ctx->pc == 0x12415Cu) {
        ctx->pc = 0x12415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124158u;
        // 0x12415c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124160u;
        goto label_124160;
    }
    ctx->pc = 0x124158u;
    {
        const bool branch_taken_0x124158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124158) {
            ctx->pc = 0x12415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124158u;
            // 0x12415c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124198u;
            goto label_124198;
        }
    }
    ctx->pc = 0x124160u;
label_124160:
    // 0x124160: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_124164:
    // 0x124164: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x124164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_124168:
    // 0x124168: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x124168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_12416c:
    // 0x12416c: 0x40f809  jalr        $v0
label_124170:
    if (ctx->pc == 0x124170u) {
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124174u;
        goto label_124174;
    }
    ctx->pc = 0x12416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124174u);
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12416Cu, 0x124174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124174u;
label_124174:
    // 0x124174: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_124178:
    if (ctx->pc == 0x124178u) {
        ctx->pc = 0x124178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124174u;
        // 0x124178: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12417Cu;
        goto label_12417c;
    }
    ctx->pc = 0x124174u;
    {
        const bool branch_taken_0x124174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124174) {
            ctx->pc = 0x124178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124174u;
            // 0x124178: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124198u;
            goto label_124198;
        }
    }
    ctx->pc = 0x12417Cu;
label_12417c:
    // 0x12417c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x12417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_124180:
    // 0x124180: 0x84640180  lh          $a0, 0x180($v1)
    ctx->pc = 0x124180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 384)));
label_124184:
    // 0x124184: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_124188:
    // 0x124188: 0x40f809  jalr        $v0
label_12418c:
    if (ctx->pc == 0x12418Cu) {
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124190u;
        goto label_124190;
    }
    ctx->pc = 0x124188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124190u);
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124188u, 0x124190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124190u;
label_124190:
    // 0x124190: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_124194:
    if (ctx->pc == 0x124194u) {
        ctx->pc = 0x124194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124190u;
        // 0x124194: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124198u;
        goto label_124198;
    }
    ctx->pc = 0x124190u;
    {
        const bool branch_taken_0x124190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124190u;
        // 0x124194: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124190) {
            ctx->pc = 0x1241B8u;
            goto label_1241b8;
        }
    }
    ctx->pc = 0x124198u;
label_124198:
    // 0x124198: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_12419c:
    // 0x12419c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1241a0:
    if (ctx->pc == 0x1241A0u) {
        ctx->pc = 0x1241A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12419Cu;
        // 0x1241a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241A4u;
        goto label_1241a4;
    }
    ctx->pc = 0x12419Cu;
    {
        const bool branch_taken_0x12419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12419Cu;
        // 0x1241a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12419c) {
            ctx->pc = 0x1241ACu;
            goto label_1241ac;
        }
    }
    ctx->pc = 0x1241A4u;
label_1241a4:
    // 0x1241a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1241a8:
    if (ctx->pc == 0x1241A8u) {
        ctx->pc = 0x1241A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A4u;
        // 0x1241a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241ACu;
        goto label_1241ac;
    }
    ctx->pc = 0x1241A4u;
    {
        const bool branch_taken_0x1241a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A4u;
        // 0x1241a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241a4) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x1241ACu;
label_1241ac:
    // 0x1241ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1241acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1241b0:
    // 0x1241b0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1241b4:
    if (ctx->pc == 0x1241B4u) {
        ctx->pc = 0x1241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241B0u;
        // 0x1241b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241B8u;
        goto label_1241b8;
    }
    ctx->pc = 0x1241B0u;
    {
        const bool branch_taken_0x1241b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241B0u;
        // 0x1241b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241b0) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x1241B8u;
label_1241b8:
    // 0x1241b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1241bc:
    // 0x1241bc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1241c0:
    if (ctx->pc == 0x1241C0u) {
        ctx->pc = 0x1241C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241BCu;
        // 0x1241c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241C4u;
        goto label_1241c4;
    }
    ctx->pc = 0x1241BCu;
    {
        const bool branch_taken_0x1241bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1241C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241BCu;
        // 0x1241c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241bc) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x1241C4u;
label_1241c4:
    // 0x1241c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1241c8:
    if (ctx->pc == 0x1241C8u) {
        ctx->pc = 0x1241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C4u;
        // 0x1241c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241CCu;
        goto label_1241cc;
    }
    ctx->pc = 0x1241C4u;
    {
        const bool branch_taken_0x1241c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C4u;
        // 0x1241c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c4) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x1241CCu;
label_1241cc:
    // 0x1241cc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1241ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1241d0:
    // 0x1241d0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1241d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1241d4:
    // 0x1241d4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1241d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1241d8:
    // 0x1241d8: 0x40f809  jalr        $v0
label_1241dc:
    if (ctx->pc == 0x1241DCu) {
        ctx->pc = 0x1241DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241D8u;
        // 0x1241dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241E0u;
        goto label_1241e0;
    }
    ctx->pc = 0x1241D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1241E0u);
        ctx->pc = 0x1241DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241D8u;
        // 0x1241dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1241D8u, 0x1241E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1241E0u;
label_1241e0:
    // 0x1241e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1241e4:
    if (ctx->pc == 0x1241E4u) {
        ctx->pc = 0x1241E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E0u;
        // 0x1241e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241E8u;
        goto label_1241e8;
    }
    ctx->pc = 0x1241E0u;
    {
        const bool branch_taken_0x1241e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1241E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E0u;
        // 0x1241e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241e0) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x1241E8u;
label_1241e8:
    // 0x1241e8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1241e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1241ec:
    // 0x1241ec: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1241ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1241f0:
    // 0x1241f0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1241f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1241f4:
    // 0x1241f4: 0x40f809  jalr        $v0
label_1241f8:
    if (ctx->pc == 0x1241F8u) {
        ctx->pc = 0x1241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241F4u;
        // 0x1241f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241FCu;
        goto label_1241fc;
    }
    ctx->pc = 0x1241F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1241FCu);
        ctx->pc = 0x1241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241F4u;
        // 0x1241f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1241F4u, 0x1241FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1241FCu;
label_1241fc:
    // 0x1241fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_124200:
    if (ctx->pc == 0x124200u) {
        ctx->pc = 0x124200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241FCu;
        // 0x124200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124204u;
        goto label_124204;
    }
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241FCu;
        // 0x124200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x124204u;
label_124204:
    // 0x124204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124208:
    // 0x124208: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x124208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12420c:
    // 0x12420c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124210:
    if (ctx->pc == 0x124210u) {
        ctx->pc = 0x124214u;
        goto label_124214;
    }
    ctx->pc = 0x12420Cu;
    {
        const bool branch_taken_0x12420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12420c) {
            ctx->pc = 0x124224u;
            goto label_124224;
        }
    }
    ctx->pc = 0x124214u;
label_124214:
    // 0x124214: 0xc049c38  jal         func_1270E0
label_124218:
    if (ctx->pc == 0x124218u) {
        ctx->pc = 0x124218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124214u;
        // 0x124218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12421Cu;
        goto label_12421c;
    }
    ctx->pc = 0x124214u;
    SET_GPR_U32(ctx, 31, 0x12421Cu);
    ctx->pc = 0x124218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124214u;
    // 0x124218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1270E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1270E0u, 0x124214u, 0x12421Cu)) {
        return;
    }
    ctx->pc = 0x12421Cu;
label_12421c:
    // 0x12421c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_124220:
    if (ctx->pc == 0x124220u) {
        ctx->pc = 0x124220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12421Cu;
        // 0x124220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124224u;
        goto label_124224;
    }
    ctx->pc = 0x12421Cu;
    {
        const bool branch_taken_0x12421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12421Cu;
        // 0x124220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12421c) {
            ctx->pc = 0x12429Cu;
            goto label_12429c;
        }
    }
    ctx->pc = 0x124224u;
label_124224:
    // 0x124224: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_124228:
    if (ctx->pc == 0x124228u) {
        ctx->pc = 0x124228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124224u;
        // 0x124228: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12422Cu;
        goto label_12422c;
    }
    ctx->pc = 0x124224u;
    {
        const bool branch_taken_0x124224 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124224u;
        // 0x124228: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124224) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x12422Cu;
label_12422c:
    // 0x12422c: 0x8e220c94  lw          $v0, 0xC94($s1)
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3220)));
label_124230:
    // 0x124230: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x124230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_124234:
    // 0x124234: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x124234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_124238:
    // 0x124238: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x124238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12423c:
    // 0x12423c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x12423cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_124240:
    // 0x124240: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_124244:
    if (ctx->pc == 0x124244u) {
        ctx->pc = 0x124244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124240u;
        // 0x124244: 0xafb60010  sw          $s6, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124248u;
        goto label_124248;
    }
    ctx->pc = 0x124240u;
    {
        const bool branch_taken_0x124240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124240u;
        // 0x124244: 0xafb60010  sw          $s6, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124240) {
            ctx->pc = 0x124264u;
            goto label_124264;
        }
    }
    ctx->pc = 0x124248u;
label_124248:
    // 0x124248: 0x8e220bb8  lw          $v0, 0xBB8($s1)
    ctx->pc = 0x124248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3000)));
label_12424c:
    // 0x12424c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_124250:
    if (ctx->pc == 0x124250u) {
        ctx->pc = 0x124250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12424Cu;
        // 0x124250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124254u;
        goto label_124254;
    }
    ctx->pc = 0x12424Cu;
    {
        const bool branch_taken_0x12424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12424Cu;
        // 0x124250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12424c) {
            ctx->pc = 0x12425Cu;
            goto label_12425c;
        }
    }
    ctx->pc = 0x124254u;
label_124254:
    // 0x124254: 0x10000010  b           . + 4 + (0x10 << 2)
label_124258:
    if (ctx->pc == 0x124258u) {
        ctx->pc = 0x124258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124254u;
        // 0x124258: 0xae220de8  sw          $v0, 0xDE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12425Cu;
        goto label_12425c;
    }
    ctx->pc = 0x124254u;
    {
        const bool branch_taken_0x124254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124254u;
        // 0x124258: 0xae220de8  sw          $v0, 0xDE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124254) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x12425Cu;
label_12425c:
    // 0x12425c: 0x1000000e  b           . + 4 + (0xE << 2)
label_124260:
    if (ctx->pc == 0x124260u) {
        ctx->pc = 0x124260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12425Cu;
        // 0x124260: 0xae220de4  sw          $v0, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124264u;
        goto label_124264;
    }
    ctx->pc = 0x12425Cu;
    {
        const bool branch_taken_0x12425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12425Cu;
        // 0x124260: 0xae220de4  sw          $v0, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12425c) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124264u;
label_124264:
    // 0x124264: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x124264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_124268:
    // 0x124268: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12426c:
    // 0x12426c: 0x84640158  lh          $a0, 0x158($v1)
    ctx->pc = 0x12426cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
label_124270:
    // 0x124270: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x124270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_124274:
    // 0x124274: 0x40f809  jalr        $v0
label_124278:
    if (ctx->pc == 0x124278u) {
        ctx->pc = 0x124278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124274u;
        // 0x124278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12427Cu;
        goto label_12427c;
    }
    ctx->pc = 0x124274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12427Cu);
        ctx->pc = 0x124278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124274u;
        // 0x124278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124274u, 0x12427Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12427Cu;
label_12427c:
    // 0x12427c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_124280:
    if (ctx->pc == 0x124280u) {
        ctx->pc = 0x124280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12427Cu;
        // 0x124280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124284u;
        goto label_124284;
    }
    ctx->pc = 0x12427Cu;
    {
        const bool branch_taken_0x12427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12427Cu;
        // 0x124280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12427c) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124284u;
label_124284:
    // 0x124284: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x124284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_124288:
    // 0x124288: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x124288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12428c:
    // 0x12428c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_124290:
    // 0x124290: 0x40f809  jalr        $v0
label_124294:
    if (ctx->pc == 0x124294u) {
        ctx->pc = 0x124294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124290u;
        // 0x124294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124298u;
        goto label_124298;
    }
    ctx->pc = 0x124290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124298u);
        ctx->pc = 0x124294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124290u;
        // 0x124294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124290u, 0x124298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124298u;
label_124298:
    // 0x124298: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x124298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12429c:
    // 0x12429c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12429cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1242a0:
    // 0x1242a0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1242a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1242a4:
    // 0x1242a4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1242a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1242a8:
    // 0x1242a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1242a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1242ac:
    // 0x1242ac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1242acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1242b0:
    // 0x1242b0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1242b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1242b4:
    // 0x1242b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1242b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1242b8:
    // 0x1242b8: 0x3e00008  jr          $ra
label_1242bc:
    if (ctx->pc == 0x1242BCu) {
        ctx->pc = 0x1242BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242B8u;
        // 0x1242bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242C0u;
        goto label_fallthrough_0x1242b8;
    }
    ctx->pc = 0x1242B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1242BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242B8u;
        // 0x1242bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1242B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1242b8:
    ctx->pc = 0x1242C0u;
}

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

// Function: sub_0021DCE8
// Address: 0x21dce8 - 0x21e088
void sub_0021DCE8_0x21dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DCE8_0x21dce8");
#endif

    switch (ctx->pc) {
        case 0x21dce8u: goto label_21dce8;
        case 0x21dcecu: goto label_21dcec;
        case 0x21dcf0u: goto label_21dcf0;
        case 0x21dcf4u: goto label_21dcf4;
        case 0x21dcf8u: goto label_21dcf8;
        case 0x21dcfcu: goto label_21dcfc;
        case 0x21dd00u: goto label_21dd00;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd08u: goto label_21dd08;
        case 0x21dd0cu: goto label_21dd0c;
        case 0x21dd10u: goto label_21dd10;
        case 0x21dd14u: goto label_21dd14;
        case 0x21dd18u: goto label_21dd18;
        case 0x21dd1cu: goto label_21dd1c;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd24u: goto label_21dd24;
        case 0x21dd28u: goto label_21dd28;
        case 0x21dd2cu: goto label_21dd2c;
        case 0x21dd30u: goto label_21dd30;
        case 0x21dd34u: goto label_21dd34;
        case 0x21dd38u: goto label_21dd38;
        case 0x21dd3cu: goto label_21dd3c;
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd48u: goto label_21dd48;
        case 0x21dd4cu: goto label_21dd4c;
        case 0x21dd50u: goto label_21dd50;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd58u: goto label_21dd58;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd60u: goto label_21dd60;
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd68u: goto label_21dd68;
        case 0x21dd6cu: goto label_21dd6c;
        case 0x21dd70u: goto label_21dd70;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd7cu: goto label_21dd7c;
        case 0x21dd80u: goto label_21dd80;
        case 0x21dd84u: goto label_21dd84;
        case 0x21dd88u: goto label_21dd88;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21dd90u: goto label_21dd90;
        case 0x21dd94u: goto label_21dd94;
        case 0x21dd98u: goto label_21dd98;
        case 0x21dd9cu: goto label_21dd9c;
        case 0x21dda0u: goto label_21dda0;
        case 0x21dda4u: goto label_21dda4;
        case 0x21dda8u: goto label_21dda8;
        case 0x21ddacu: goto label_21ddac;
        case 0x21ddb0u: goto label_21ddb0;
        case 0x21ddb4u: goto label_21ddb4;
        case 0x21ddb8u: goto label_21ddb8;
        case 0x21ddbcu: goto label_21ddbc;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21ddc8u: goto label_21ddc8;
        case 0x21ddccu: goto label_21ddcc;
        case 0x21ddd0u: goto label_21ddd0;
        case 0x21ddd4u: goto label_21ddd4;
        case 0x21ddd8u: goto label_21ddd8;
        case 0x21dddcu: goto label_21dddc;
        case 0x21dde0u: goto label_21dde0;
        case 0x21dde4u: goto label_21dde4;
        case 0x21dde8u: goto label_21dde8;
        case 0x21ddecu: goto label_21ddec;
        case 0x21ddf0u: goto label_21ddf0;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21ddf8u: goto label_21ddf8;
        case 0x21ddfcu: goto label_21ddfc;
        case 0x21de00u: goto label_21de00;
        case 0x21de04u: goto label_21de04;
        case 0x21de08u: goto label_21de08;
        case 0x21de0cu: goto label_21de0c;
        case 0x21de10u: goto label_21de10;
        case 0x21de14u: goto label_21de14;
        case 0x21de18u: goto label_21de18;
        case 0x21de1cu: goto label_21de1c;
        case 0x21de20u: goto label_21de20;
        case 0x21de24u: goto label_21de24;
        case 0x21de28u: goto label_21de28;
        case 0x21de2cu: goto label_21de2c;
        case 0x21de30u: goto label_21de30;
        case 0x21de34u: goto label_21de34;
        case 0x21de38u: goto label_21de38;
        case 0x21de3cu: goto label_21de3c;
        case 0x21de40u: goto label_21de40;
        case 0x21de44u: goto label_21de44;
        case 0x21de48u: goto label_21de48;
        case 0x21de4cu: goto label_21de4c;
        case 0x21de50u: goto label_21de50;
        case 0x21de54u: goto label_21de54;
        case 0x21de58u: goto label_21de58;
        case 0x21de5cu: goto label_21de5c;
        case 0x21de60u: goto label_21de60;
        case 0x21de64u: goto label_21de64;
        case 0x21de68u: goto label_21de68;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de70u: goto label_21de70;
        case 0x21de74u: goto label_21de74;
        case 0x21de78u: goto label_21de78;
        case 0x21de7cu: goto label_21de7c;
        case 0x21de80u: goto label_21de80;
        case 0x21de84u: goto label_21de84;
        case 0x21de88u: goto label_21de88;
        case 0x21de8cu: goto label_21de8c;
        case 0x21de90u: goto label_21de90;
        case 0x21de94u: goto label_21de94;
        case 0x21de98u: goto label_21de98;
        case 0x21de9cu: goto label_21de9c;
        case 0x21dea0u: goto label_21dea0;
        case 0x21dea4u: goto label_21dea4;
        case 0x21dea8u: goto label_21dea8;
        case 0x21deacu: goto label_21deac;
        case 0x21deb0u: goto label_21deb0;
        case 0x21deb4u: goto label_21deb4;
        case 0x21deb8u: goto label_21deb8;
        case 0x21debcu: goto label_21debc;
        case 0x21dec0u: goto label_21dec0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21dec8u: goto label_21dec8;
        case 0x21deccu: goto label_21decc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded4u: goto label_21ded4;
        case 0x21ded8u: goto label_21ded8;
        case 0x21dedcu: goto label_21dedc;
        case 0x21dee0u: goto label_21dee0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21dee8u: goto label_21dee8;
        case 0x21deecu: goto label_21deec;
        case 0x21def0u: goto label_21def0;
        case 0x21def4u: goto label_21def4;
        case 0x21def8u: goto label_21def8;
        case 0x21defcu: goto label_21defc;
        case 0x21df00u: goto label_21df00;
        case 0x21df04u: goto label_21df04;
        case 0x21df08u: goto label_21df08;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df10u: goto label_21df10;
        case 0x21df14u: goto label_21df14;
        case 0x21df18u: goto label_21df18;
        case 0x21df1cu: goto label_21df1c;
        case 0x21df20u: goto label_21df20;
        case 0x21df24u: goto label_21df24;
        case 0x21df28u: goto label_21df28;
        case 0x21df2cu: goto label_21df2c;
        case 0x21df30u: goto label_21df30;
        case 0x21df34u: goto label_21df34;
        case 0x21df38u: goto label_21df38;
        case 0x21df3cu: goto label_21df3c;
        case 0x21df40u: goto label_21df40;
        case 0x21df44u: goto label_21df44;
        case 0x21df48u: goto label_21df48;
        case 0x21df4cu: goto label_21df4c;
        case 0x21df50u: goto label_21df50;
        case 0x21df54u: goto label_21df54;
        case 0x21df58u: goto label_21df58;
        case 0x21df5cu: goto label_21df5c;
        case 0x21df60u: goto label_21df60;
        case 0x21df64u: goto label_21df64;
        case 0x21df68u: goto label_21df68;
        case 0x21df6cu: goto label_21df6c;
        case 0x21df70u: goto label_21df70;
        case 0x21df74u: goto label_21df74;
        case 0x21df78u: goto label_21df78;
        case 0x21df7cu: goto label_21df7c;
        case 0x21df80u: goto label_21df80;
        case 0x21df84u: goto label_21df84;
        case 0x21df88u: goto label_21df88;
        case 0x21df8cu: goto label_21df8c;
        case 0x21df90u: goto label_21df90;
        case 0x21df94u: goto label_21df94;
        case 0x21df98u: goto label_21df98;
        case 0x21df9cu: goto label_21df9c;
        case 0x21dfa0u: goto label_21dfa0;
        case 0x21dfa4u: goto label_21dfa4;
        case 0x21dfa8u: goto label_21dfa8;
        case 0x21dfacu: goto label_21dfac;
        case 0x21dfb0u: goto label_21dfb0;
        case 0x21dfb4u: goto label_21dfb4;
        case 0x21dfb8u: goto label_21dfb8;
        case 0x21dfbcu: goto label_21dfbc;
        case 0x21dfc0u: goto label_21dfc0;
        case 0x21dfc4u: goto label_21dfc4;
        case 0x21dfc8u: goto label_21dfc8;
        case 0x21dfccu: goto label_21dfcc;
        case 0x21dfd0u: goto label_21dfd0;
        case 0x21dfd4u: goto label_21dfd4;
        case 0x21dfd8u: goto label_21dfd8;
        case 0x21dfdcu: goto label_21dfdc;
        case 0x21dfe0u: goto label_21dfe0;
        case 0x21dfe4u: goto label_21dfe4;
        case 0x21dfe8u: goto label_21dfe8;
        case 0x21dfecu: goto label_21dfec;
        case 0x21dff0u: goto label_21dff0;
        case 0x21dff4u: goto label_21dff4;
        case 0x21dff8u: goto label_21dff8;
        case 0x21dffcu: goto label_21dffc;
        case 0x21e000u: goto label_21e000;
        case 0x21e004u: goto label_21e004;
        case 0x21e008u: goto label_21e008;
        case 0x21e00cu: goto label_21e00c;
        case 0x21e010u: goto label_21e010;
        case 0x21e014u: goto label_21e014;
        case 0x21e018u: goto label_21e018;
        case 0x21e01cu: goto label_21e01c;
        case 0x21e020u: goto label_21e020;
        case 0x21e024u: goto label_21e024;
        case 0x21e028u: goto label_21e028;
        case 0x21e02cu: goto label_21e02c;
        case 0x21e030u: goto label_21e030;
        case 0x21e034u: goto label_21e034;
        case 0x21e038u: goto label_21e038;
        case 0x21e03cu: goto label_21e03c;
        case 0x21e040u: goto label_21e040;
        case 0x21e044u: goto label_21e044;
        case 0x21e048u: goto label_21e048;
        case 0x21e04cu: goto label_21e04c;
        case 0x21e050u: goto label_21e050;
        case 0x21e054u: goto label_21e054;
        case 0x21e058u: goto label_21e058;
        case 0x21e05cu: goto label_21e05c;
        case 0x21e060u: goto label_21e060;
        case 0x21e064u: goto label_21e064;
        case 0x21e068u: goto label_21e068;
        case 0x21e06cu: goto label_21e06c;
        case 0x21e070u: goto label_21e070;
        case 0x21e074u: goto label_21e074;
        case 0x21e078u: goto label_21e078;
        case 0x21e07cu: goto label_21e07c;
        case 0x21e080u: goto label_21e080;
        case 0x21e084u: goto label_21e084;
        default: break;
    }

    ctx->pc = 0x21dce8u;

label_21dce8:
    // 0x21dce8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_21dcec:
    // 0x21dcec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x21dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_21dcf0:
    // 0x21dcf0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x21dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_21dcf4:
    // 0x21dcf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21dcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dcf8:
    // 0x21dcf8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x21dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_21dcfc:
    // 0x21dcfc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21dcfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21dd00:
    // 0x21dd00: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x21dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_21dd04:
    // 0x21dd04: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x21dd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_21dd08:
    // 0x21dd08: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x21dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_21dd0c:
    // 0x21dd0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_21dd10:
    // 0x21dd10: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x21dd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_21dd14:
    // 0x21dd14: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x21dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_21dd18:
    // 0x21dd18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21dd1c:
    // 0x21dd1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_21dd20:
    // 0x21dd20: 0x8ec201c0  lw          $v0, 0x1C0($s6)
    ctx->pc = 0x21dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 448)));
label_21dd24:
    // 0x21dd24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_21dd28:
    // 0x21dd28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_21dd2c:
    // 0x21dd2c: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x21dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_21dd30:
    // 0x21dd30: 0x184000c8  blez        $v0, . + 4 + (0xC8 << 2)
label_21dd34:
    if (ctx->pc == 0x21DD34u) {
        ctx->pc = 0x21DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD30u;
        // 0x21dd34: 0x8ed000d8  lw          $s0, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD38u;
        goto label_21dd38;
    }
    ctx->pc = 0x21DD30u;
    {
        const bool branch_taken_0x21dd30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD30u;
        // 0x21dd34: 0x8ed000d8  lw          $s0, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd30) {
            ctx->pc = 0x21E054u;
            goto label_21e054;
        }
    }
    ctx->pc = 0x21DD38u;
label_21dd38:
    // 0x21dd38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21dd3c:
    // 0x21dd3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21dd40:
    // 0x21dd40: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
label_21dd44:
    if (ctx->pc == 0x21DD44u) {
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD48u;
        goto label_21dd48;
    }
    ctx->pc = 0x21DD40u;
    {
        const bool branch_taken_0x21dd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd40) {
            ctx->pc = 0x21DD8Cu;
            goto label_21dd8c;
        }
    }
    ctx->pc = 0x21DD48u;
label_21dd48:
    // 0x21dd48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21dd4c:
    if (ctx->pc == 0x21DD4Cu) {
        ctx->pc = 0x21DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD48u;
        // 0x21dd4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD50u;
        goto label_21dd50;
    }
    ctx->pc = 0x21DD48u;
    {
        const bool branch_taken_0x21dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD48u;
        // 0x21dd4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd48) {
            ctx->pc = 0x21DD60u;
            goto label_21dd60;
        }
    }
    ctx->pc = 0x21DD50u;
label_21dd50:
    // 0x21dd50: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_21dd54:
    if (ctx->pc == 0x21DD54u) {
        ctx->pc = 0x21DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD50u;
        // 0x21dd54: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD58u;
        goto label_21dd58;
    }
    ctx->pc = 0x21DD50u;
    {
        const bool branch_taken_0x21dd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD50u;
        // 0x21dd54: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd50) {
            ctx->pc = 0x21DD7Cu;
            goto label_21dd7c;
        }
    }
    ctx->pc = 0x21DD58u;
label_21dd58:
    // 0x21dd58: 0x10000034  b           . + 4 + (0x34 << 2)
label_21dd5c:
    if (ctx->pc == 0x21DD5Cu) {
        ctx->pc = 0x21DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD58u;
        // 0x21dd5c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD60u;
        goto label_21dd60;
    }
    ctx->pc = 0x21DD58u;
    {
        const bool branch_taken_0x21dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD58u;
        // 0x21dd5c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd58) {
            ctx->pc = 0x21DE2Cu;
            goto label_21de2c;
        }
    }
    ctx->pc = 0x21DD60u;
label_21dd60:
    // 0x21dd60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21dd64:
    // 0x21dd64: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_21dd68:
    if (ctx->pc == 0x21DD68u) {
        ctx->pc = 0x21DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD64u;
        // 0x21dd68: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD6Cu;
        goto label_21dd6c;
    }
    ctx->pc = 0x21DD64u;
    {
        const bool branch_taken_0x21dd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD64u;
        // 0x21dd68: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd64) {
            ctx->pc = 0x21DDA0u;
            goto label_21dda0;
        }
    }
    ctx->pc = 0x21DD6Cu;
label_21dd6c:
    // 0x21dd6c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_21dd70:
    if (ctx->pc == 0x21DD70u) {
        ctx->pc = 0x21DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD6Cu;
        // 0x21dd70: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD74u;
        goto label_21dd74;
    }
    ctx->pc = 0x21DD6Cu;
    {
        const bool branch_taken_0x21dd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21dd6c) {
            ctx->pc = 0x21DD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DD6Cu;
            // 0x21dd70: 0x8ec20048  lw          $v0, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DDB4u;
            goto label_21ddb4;
        }
    }
    ctx->pc = 0x21DD74u;
label_21dd74:
    // 0x21dd74: 0x1000002d  b           . + 4 + (0x2D << 2)
label_21dd78:
    if (ctx->pc == 0x21DD78u) {
        ctx->pc = 0x21DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD74u;
        // 0x21dd78: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD7Cu;
        goto label_21dd7c;
    }
    ctx->pc = 0x21DD74u;
    {
        const bool branch_taken_0x21dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD74u;
        // 0x21dd78: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd74) {
            ctx->pc = 0x21DE2Cu;
            goto label_21de2c;
        }
    }
    ctx->pc = 0x21DD7Cu;
label_21dd7c:
    // 0x21dd7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_21dd80:
    // 0x21dd80: 0x24421f10  addiu       $v0, $v0, 0x1F10
    ctx->pc = 0x21dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
label_21dd84:
    // 0x21dd84: 0x10000032  b           . + 4 + (0x32 << 2)
label_21dd88:
    if (ctx->pc == 0x21DD88u) {
        ctx->pc = 0x21DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD84u;
        // 0x21dd88: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD8Cu;
        goto label_21dd8c;
    }
    ctx->pc = 0x21DD84u;
    {
        const bool branch_taken_0x21dd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD84u;
        // 0x21dd88: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd84) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DD8Cu;
label_21dd8c:
    // 0x21dd8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21dd90:
    // 0x21dd90: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_21dd94:
    // 0x21dd94: 0x24421bd8  addiu       $v0, $v0, 0x1BD8
    ctx->pc = 0x21dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7128));
label_21dd98:
    // 0x21dd98: 0x1000002d  b           . + 4 + (0x2D << 2)
label_21dd9c:
    if (ctx->pc == 0x21DD9Cu) {
        ctx->pc = 0x21DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD98u;
        // 0x21dd9c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDA0u;
        goto label_21dda0;
    }
    ctx->pc = 0x21DD98u;
    {
        const bool branch_taken_0x21dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD98u;
        // 0x21dd9c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd98) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DDA0u;
label_21dda0:
    // 0x21dda0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21dda4:
    // 0x21dda4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_21dda8:
    // 0x21dda8: 0x24421638  addiu       $v0, $v0, 0x1638
    ctx->pc = 0x21dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5688));
label_21ddac:
    // 0x21ddac: 0x10000028  b           . + 4 + (0x28 << 2)
label_21ddb0:
    if (ctx->pc == 0x21DDB0u) {
        ctx->pc = 0x21DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDACu;
        // 0x21ddb0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDB4u;
        goto label_21ddb4;
    }
    ctx->pc = 0x21DDACu;
    {
        const bool branch_taken_0x21ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDACu;
        // 0x21ddb0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddac) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DDB4u;
label_21ddb4:
    // 0x21ddb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ddb8:
    // 0x21ddb8: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_21ddbc:
    if (ctx->pc == 0x21DDBCu) {
        ctx->pc = 0x21DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDB8u;
        // 0x21ddbc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDC0u;
        goto label_21ddc0;
    }
    ctx->pc = 0x21DDB8u;
    {
        const bool branch_taken_0x21ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ddb8) {
            ctx->pc = 0x21DDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DDB8u;
            // 0x21ddbc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DDECu;
            goto label_21ddec;
        }
    }
    ctx->pc = 0x21DDC0u;
label_21ddc0:
    // 0x21ddc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21ddc4:
    if (ctx->pc == 0x21DDC4u) {
        ctx->pc = 0x21DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC0u;
        // 0x21ddc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDC8u;
        goto label_21ddc8;
    }
    ctx->pc = 0x21DDC0u;
    {
        const bool branch_taken_0x21ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC0u;
        // 0x21ddc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddc0) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DDC8u;
label_21ddc8:
    // 0x21ddc8: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_21ddcc:
    if (ctx->pc == 0x21DDCCu) {
        ctx->pc = 0x21DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC8u;
        // 0x21ddcc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDD0u;
        goto label_21ddd0;
    }
    ctx->pc = 0x21DDC8u;
    {
        const bool branch_taken_0x21ddc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x21DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC8u;
        // 0x21ddcc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddc8) {
            ctx->pc = 0x21DDFCu;
            goto label_21ddfc;
        }
    }
    ctx->pc = 0x21DDD0u;
label_21ddd0:
    // 0x21ddd0: 0x1000000e  b           . + 4 + (0xE << 2)
label_21ddd4:
    if (ctx->pc == 0x21DDD4u) {
        ctx->pc = 0x21DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDD0u;
        // 0x21ddd4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDD8u;
        goto label_21ddd8;
    }
    ctx->pc = 0x21DDD0u;
    {
        const bool branch_taken_0x21ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDD0u;
        // 0x21ddd4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddd0) {
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DDD8u;
label_21ddd8:
    // 0x21ddd8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21dddc:
    // 0x21dddc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_21dde0:
    // 0x21dde0: 0x24420de8  addiu       $v0, $v0, 0xDE8
    ctx->pc = 0x21dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
label_21dde4:
    // 0x21dde4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_21dde8:
    if (ctx->pc == 0x21DDE8u) {
        ctx->pc = 0x21DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE4u;
        // 0x21dde8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDECu;
        goto label_21ddec;
    }
    ctx->pc = 0x21DDE4u;
    {
        const bool branch_taken_0x21dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE4u;
        // 0x21dde8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dde4) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DDECu;
label_21ddec:
    // 0x21ddec: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x21ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_21ddf0:
    // 0x21ddf0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_21ddf4:
    // 0x21ddf4: 0x10000016  b           . + 4 + (0x16 << 2)
label_21ddf8:
    if (ctx->pc == 0x21DDF8u) {
        ctx->pc = 0x21DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDF4u;
        // 0x21ddf8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDFCu;
        goto label_21ddfc;
    }
    ctx->pc = 0x21DDF4u;
    {
        const bool branch_taken_0x21ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDF4u;
        // 0x21ddf8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddf4) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DDFCu;
label_21ddfc:
    // 0x21ddfc: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x21ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
label_21de00:
    // 0x21de00: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x21de00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_21de04:
    // 0x21de04: 0x10000012  b           . + 4 + (0x12 << 2)
label_21de08:
    if (ctx->pc == 0x21DE08u) {
        ctx->pc = 0x21DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE04u;
        // 0x21de08: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE0Cu;
        goto label_21de0c;
    }
    ctx->pc = 0x21DE04u;
    {
        const bool branch_taken_0x21de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE04u;
        // 0x21de08: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de04) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DE0Cu;
label_21de0c:
    // 0x21de0c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21de10:
    // 0x21de10: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x21de10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_21de14:
    // 0x21de14: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x21de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21de18:
    // 0x21de18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21de1c:
    // 0x21de1c: 0x40f809  jalr        $v0
label_21de20:
    if (ctx->pc == 0x21DE20u) {
        ctx->pc = 0x21DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE1Cu;
        // 0x21de20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE24u;
        goto label_21de24;
    }
    ctx->pc = 0x21DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DE24u);
        ctx->pc = 0x21DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE1Cu;
        // 0x21de20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE1Cu, 0x21DE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DE24u;
label_21de24:
    // 0x21de24: 0x1000000b  b           . + 4 + (0xB << 2)
label_21de28:
    if (ctx->pc == 0x21DE28u) {
        ctx->pc = 0x21DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE24u;
        // 0x21de28: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE2Cu;
        goto label_21de2c;
    }
    ctx->pc = 0x21DE24u;
    {
        const bool branch_taken_0x21de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE24u;
        // 0x21de28: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de24) {
            ctx->pc = 0x21DE54u;
            goto label_21de54;
        }
    }
    ctx->pc = 0x21DE2Cu;
label_21de2c:
    // 0x21de2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21de30:
    // 0x21de30: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x21de30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_21de34:
    // 0x21de34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21de38:
    // 0x21de38: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21de3c:
    // 0x21de3c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x21de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_21de40:
    // 0x21de40: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x21de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21de44:
    // 0x21de44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21de48:
    // 0x21de48: 0x40f809  jalr        $v0
label_21de4c:
    if (ctx->pc == 0x21DE4Cu) {
        ctx->pc = 0x21DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE48u;
        // 0x21de4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE50u;
        goto label_21de50;
    }
    ctx->pc = 0x21DE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DE50u);
        ctx->pc = 0x21DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE48u;
        // 0x21de4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE48u, 0x21DE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DE50u;
label_21de50:
    // 0x21de50: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x21de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21de54:
    // 0x21de54: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x21de54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21de58:
    // 0x21de58: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x21de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_21de5c:
    // 0x21de5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21de60:
    // 0x21de60: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21de64:
    // 0x21de64: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_21de68:
    // 0x21de68: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x21de68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_21de6c:
    // 0x21de6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21de70:
    // 0x21de70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21de70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_21de74:
    // 0x21de74: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_21de78:
    // 0x21de78: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_21de7c:
    if (ctx->pc == 0x21DE7Cu) {
        ctx->pc = 0x21DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE78u;
        // 0x21de7c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE80u;
        goto label_21de80;
    }
    ctx->pc = 0x21DE78u;
    {
        const bool branch_taken_0x21de78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE78u;
        // 0x21de7c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de78) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DE80u;
label_21de80:
    // 0x21de80: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_21de84:
    // 0x21de84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21de88:
    // 0x21de88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21de8c:
    // 0x21de8c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21de90:
    // 0x21de90: 0x5064006c  beql        $v1, $a0, . + 4 + (0x6C << 2)
label_21de94:
    if (ctx->pc == 0x21DE94u) {
        ctx->pc = 0x21DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE90u;
        // 0x21de94: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE98u;
        goto label_21de98;
    }
    ctx->pc = 0x21DE90u;
    {
        const bool branch_taken_0x21de90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21de90) {
            ctx->pc = 0x21DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DE90u;
            // 0x21de94: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21DE98u;
label_21de98:
    // 0x21de98: 0x8e17004c  lw          $s7, 0x4C($s0)
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_21de9c:
    // 0x21de9c: 0x52e00069  beql        $s7, $zero, . + 4 + (0x69 << 2)
label_21dea0:
    if (ctx->pc == 0x21DEA0u) {
        ctx->pc = 0x21DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE9Cu;
        // 0x21dea0: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEA4u;
        goto label_21dea4;
    }
    ctx->pc = 0x21DE9Cu;
    {
        const bool branch_taken_0x21de9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x21de9c) {
            ctx->pc = 0x21DEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DE9Cu;
            // 0x21dea0: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21DEA4u;
label_21dea4:
    // 0x21dea4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21dea8:
    // 0x21dea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21deac:
    // 0x21deac: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_21deb0:
    if (ctx->pc == 0x21DEB0u) {
        ctx->pc = 0x21DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEACu;
        // 0x21deb0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEB4u;
        goto label_21deb4;
    }
    ctx->pc = 0x21DEACu;
    {
        const bool branch_taken_0x21deac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEACu;
        // 0x21deb0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21deac) {
            ctx->pc = 0x21DF08u;
            goto label_21df08;
        }
    }
    ctx->pc = 0x21DEB4u;
label_21deb4:
    // 0x21deb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21deb8:
    if (ctx->pc == 0x21DEB8u) {
        ctx->pc = 0x21DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEB4u;
        // 0x21deb8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEBCu;
        goto label_21debc;
    }
    ctx->pc = 0x21DEB4u;
    {
        const bool branch_taken_0x21deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEB4u;
        // 0x21deb8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21deb4) {
            ctx->pc = 0x21DECCu;
            goto label_21decc;
        }
    }
    ctx->pc = 0x21DEBCu;
label_21debc:
    // 0x21debc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_21dec0:
    if (ctx->pc == 0x21DEC0u) {
        ctx->pc = 0x21DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEBCu;
        // 0x21dec0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEC4u;
        goto label_21dec4;
    }
    ctx->pc = 0x21DEBCu;
    {
        const bool branch_taken_0x21debc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21debc) {
            ctx->pc = 0x21DEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DEBCu;
            // 0x21dec0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DEE0u;
            goto label_21dee0;
        }
    }
    ctx->pc = 0x21DEC4u;
label_21dec4:
    // 0x21dec4: 0x10000054  b           . + 4 + (0x54 << 2)
label_21dec8:
    if (ctx->pc == 0x21DEC8u) {
        ctx->pc = 0x21DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEC4u;
        // 0x21dec8: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DECCu;
        goto label_21decc;
    }
    ctx->pc = 0x21DEC4u;
    {
        const bool branch_taken_0x21dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEC4u;
        // 0x21dec8: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dec4) {
            ctx->pc = 0x21E018u;
            goto label_21e018;
        }
    }
    ctx->pc = 0x21DECCu;
label_21decc:
    // 0x21decc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21ded0:
    // 0x21ded0: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
label_21ded4:
    if (ctx->pc == 0x21DED4u) {
        ctx->pc = 0x21DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED0u;
        // 0x21ded4: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DED8u;
        goto label_21ded8;
    }
    ctx->pc = 0x21DED0u;
    {
        const bool branch_taken_0x21ded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21ded0) {
            ctx->pc = 0x21DED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DED0u;
            // 0x21ded4: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DF58u;
            goto label_21df58;
        }
    }
    ctx->pc = 0x21DED8u;
label_21ded8:
    // 0x21ded8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_21dedc:
    if (ctx->pc == 0x21DEDCu) {
        ctx->pc = 0x21DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED8u;
        // 0x21dedc: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEE0u;
        goto label_21dee0;
    }
    ctx->pc = 0x21DED8u;
    {
        const bool branch_taken_0x21ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED8u;
        // 0x21dedc: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ded8) {
            ctx->pc = 0x21E018u;
            goto label_21e018;
        }
    }
    ctx->pc = 0x21DEE0u;
label_21dee0:
    // 0x21dee0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x21dee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21dee4:
    // 0x21dee4: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x21dee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_21dee8:
    // 0x21dee8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21dee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21deec:
    // 0x21deec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21def0:
    // 0x21def0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_21def4:
    // 0x21def4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21def4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21def8:
    // 0x21def8: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
label_21defc:
    if (ctx->pc == 0x21DEFCu) {
        ctx->pc = 0x21DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEF8u;
        // 0x21defc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF00u;
        goto label_21df00;
    }
    ctx->pc = 0x21DEF8u;
    {
        const bool branch_taken_0x21def8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x21DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEF8u;
        // 0x21defc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21def8) {
            ctx->pc = 0x21DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dee8;
        }
    }
    ctx->pc = 0x21DF00u;
label_21df00:
    // 0x21df00: 0x10000050  b           . + 4 + (0x50 << 2)
label_21df04:
    if (ctx->pc == 0x21DF04u) {
        ctx->pc = 0x21DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF00u;
        // 0x21df04: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF08u;
        goto label_21df08;
    }
    ctx->pc = 0x21DF00u;
    {
        const bool branch_taken_0x21df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF00u;
        // 0x21df04: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df00) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21DF08u;
label_21df08:
    // 0x21df08: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x21df08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_21df0c:
    // 0x21df0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21df10:
    // 0x21df10: 0x245365b0  addiu       $s3, $v0, 0x65B0
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
label_21df14:
    // 0x21df14: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x21df14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21df18:
    // 0x21df18: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x21df18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_21df1c:
    // 0x21df1c: 0x0  nop
    ctx->pc = 0x21df1cu;
    // NOP
label_21df20:
    // 0x21df20: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x21df20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_21df24:
    // 0x21df24: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21df24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21df28:
    // 0x21df28: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x21df28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_21df2c:
    // 0x21df2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x21df2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_21df30:
    // 0x21df30: 0xc07e4e4  jal         func_1F9390
label_21df34:
    if (ctx->pc == 0x21DF34u) {
        ctx->pc = 0x21DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF30u;
        // 0x21df34: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF38u;
        goto label_21df38;
    }
    ctx->pc = 0x21DF30u;
    SET_GPR_U32(ctx, 31, 0x21DF38u);
    ctx->pc = 0x21DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF30u;
    // 0x21df34: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21DF30u, 0x21DF38u)) {
        return;
    }
    ctx->pc = 0x21DF38u;
label_21df38:
    // 0x21df38: 0x64420800  daddiu      $v0, $v0, 0x800
    ctx->pc = 0x21df38u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2048);
label_21df3c:
    // 0x21df3c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x21df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
label_21df40:
    // 0x21df40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21df40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21df44:
    // 0x21df44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21df44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21df48:
    // 0x21df48: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_21df4c:
    if (ctx->pc == 0x21DF4Cu) {
        ctx->pc = 0x21DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF48u;
        // 0x21df4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF50u;
        goto label_21df50;
    }
    ctx->pc = 0x21DF48u;
    {
        const bool branch_taken_0x21df48 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x21DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF48u;
        // 0x21df4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df48) {
            ctx->pc = 0x21DF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21df20;
        }
    }
    ctx->pc = 0x21DF50u;
label_21df50:
    // 0x21df50: 0x1000003c  b           . + 4 + (0x3C << 2)
label_21df54:
    if (ctx->pc == 0x21DF54u) {
        ctx->pc = 0x21DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF50u;
        // 0x21df54: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF58u;
        goto label_21df58;
    }
    ctx->pc = 0x21DF50u;
    {
        const bool branch_taken_0x21df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF50u;
        // 0x21df54: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df50) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21DF58u;
label_21df58:
    // 0x21df58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21df58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21df5c:
    // 0x21df5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21df60:
    // 0x21df60: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x21df60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_21df64:
    // 0x21df64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21df64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_21df68:
    // 0x21df68: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x21df68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21df6c:
    // 0x21df6c: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x21df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
label_21df70:
    // 0x21df70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21df74:
    // 0x21df74: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x21df74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21df78:
    // 0x21df78: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_21df7c:
    // 0x21df7c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_21df80:
    // 0x21df80: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x21df80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_21df84:
    // 0x21df84: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x21df84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_21df88:
    // 0x21df88: 0x779821  addu        $s3, $v1, $s7
    ctx->pc = 0x21df88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_21df8c:
    // 0x21df8c: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x21df8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21df90:
    // 0x21df90: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
label_21df94:
    // 0x21df94: 0x26316630  addiu       $s1, $s1, 0x6630
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26160));
label_21df98:
    // 0x21df98: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x21df98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21df9c:
    // 0x21df9c: 0x0  nop
    ctx->pc = 0x21df9cu;
    // NOP
label_21dfa0:
    // 0x21dfa0: 0x86700000  lh          $s0, 0x0($s3)
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_21dfa4:
    // 0x21dfa4: 0xc07df10  jal         func_1F7C40
label_21dfa8:
    if (ctx->pc == 0x21DFA8u) {
        ctx->pc = 0x21DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFA4u;
        // 0x21dfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFACu;
        goto label_21dfac;
    }
    ctx->pc = 0x21DFA4u;
    SET_GPR_U32(ctx, 31, 0x21DFACu);
    ctx->pc = 0x21DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFA4u;
    // 0x21dfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x21DFA4u, 0x21DFACu)) {
        return;
    }
    ctx->pc = 0x21DFACu;
label_21dfac:
    // 0x21dfac: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
label_21dfb0:
    if (ctx->pc == 0x21DFB0u) {
        ctx->pc = 0x21DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFACu;
        // 0x21dfb0: 0xdfc50000  ld          $a1, 0x0($fp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFB4u;
        goto label_21dfb4;
    }
    ctx->pc = 0x21DFACu;
    {
        const bool branch_taken_0x21dfac = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x21dfac) {
            ctx->pc = 0x21DFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DFACu;
            // 0x21dfb0: 0xdfc50000  ld          $a1, 0x0($fp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DFC8u;
            goto label_21dfc8;
        }
    }
    ctx->pc = 0x21DFB4u;
label_21dfb4:
    // 0x21dfb4: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x21dfb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
label_21dfb8:
    // 0x21dfb8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x21dfb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_21dfbc:
    // 0x21dfbc: 0xc07dd82  jal         func_1F7608
label_21dfc0:
    if (ctx->pc == 0x21DFC0u) {
        ctx->pc = 0x21DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFBCu;
        // 0x21dfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFC4u;
        goto label_21dfc4;
    }
    ctx->pc = 0x21DFBCu;
    SET_GPR_U32(ctx, 31, 0x21DFC4u);
    ctx->pc = 0x21DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFBCu;
    // 0x21dfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x21DFBCu, 0x21DFC4u)) {
        return;
    }
    ctx->pc = 0x21DFC4u;
label_21dfc4:
    // 0x21dfc4: 0xdfc50000  ld          $a1, 0x0($fp)
    ctx->pc = 0x21dfc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 0)));
label_21dfc8:
    // 0x21dfc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21dfcc:
    // 0x21dfcc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_21dfd0:
    // 0x21dfd0: 0xc07ddb2  jal         func_1F76C8
label_21dfd4:
    if (ctx->pc == 0x21DFD4u) {
        ctx->pc = 0x21DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD0u;
        // 0x21dfd4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFD8u;
        goto label_21dfd8;
    }
    ctx->pc = 0x21DFD0u;
    SET_GPR_U32(ctx, 31, 0x21DFD8u);
    ctx->pc = 0x21DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFD0u;
    // 0x21dfd4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x21DFD0u, 0x21DFD8u)) {
        return;
    }
    ctx->pc = 0x21DFD8u;
label_21dfd8:
    // 0x21dfd8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_21dfdc:
    // 0x21dfdc: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x21dfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_21dfe0:
    // 0x21dfe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21dfe4:
    // 0x21dfe4: 0xc07ddb2  jal         func_1F76C8
label_21dfe8:
    if (ctx->pc == 0x21DFE8u) {
        ctx->pc = 0x21DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFE4u;
        // 0x21dfe8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFECu;
        goto label_21dfec;
    }
    ctx->pc = 0x21DFE4u;
    SET_GPR_U32(ctx, 31, 0x21DFECu);
    ctx->pc = 0x21DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFE4u;
    // 0x21dfe8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x21DFE4u, 0x21DFECu)) {
        return;
    }
    ctx->pc = 0x21DFECu;
label_21dfec:
    // 0x21dfec: 0xc07df98  jal         func_1F7E60
label_21dff0:
    if (ctx->pc == 0x21DFF0u) {
        ctx->pc = 0x21DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFECu;
        // 0x21dff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFF4u;
        goto label_21dff4;
    }
    ctx->pc = 0x21DFECu;
    SET_GPR_U32(ctx, 31, 0x21DFF4u);
    ctx->pc = 0x21DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFECu;
    // 0x21dff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x21DFECu, 0x21DFF4u)) {
        return;
    }
    ctx->pc = 0x21DFF4u;
label_21dff4:
    // 0x21dff4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x21dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_21dff8:
    // 0x21dff8: 0x6a1ffe9  bgez        $s5, . + 4 + (-0x17 << 2)
label_21dffc:
    if (ctx->pc == 0x21DFFCu) {
        ctx->pc = 0x21DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFF8u;
        // 0x21dffc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E000u;
        goto label_21e000;
    }
    ctx->pc = 0x21DFF8u;
    {
        const bool branch_taken_0x21dff8 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x21DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFF8u;
        // 0x21dffc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dff8) {
            ctx->pc = 0x21DFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dfa0;
        }
    }
    ctx->pc = 0x21E000u;
label_21e000:
    // 0x21e000: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x21e000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21e004:
    // 0x21e004: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x21e004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_21e008:
    // 0x21e008: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_21e00c:
    if (ctx->pc == 0x21E00Cu) {
        ctx->pc = 0x21E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E008u;
        // 0x21e00c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E010u;
        goto label_21e010;
    }
    ctx->pc = 0x21E008u;
    {
        const bool branch_taken_0x21e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E008u;
        // 0x21e00c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e008) {
            ctx->pc = 0x21DF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21df68;
        }
    }
    ctx->pc = 0x21E010u;
label_21e010:
    // 0x21e010: 0x1000000c  b           . + 4 + (0xC << 2)
label_21e014:
    if (ctx->pc == 0x21E014u) {
        ctx->pc = 0x21E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E010u;
        // 0x21e014: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E018u;
        goto label_21e018;
    }
    ctx->pc = 0x21E010u;
    {
        const bool branch_taken_0x21e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E010u;
        // 0x21e014: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e010) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21E018u;
label_21e018:
    // 0x21e018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e01c:
    // 0x21e01c: 0xafb10018  sw          $s1, 0x18($sp)
    ctx->pc = 0x21e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
label_21e020:
    // 0x21e020: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21e024:
    // 0x21e024: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x21e024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_21e028:
    // 0x21e028: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x21e028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_21e02c:
    // 0x21e02c: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x21e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_21e030:
    // 0x21e030: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x21e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21e034:
    // 0x21e034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e038:
    // 0x21e038: 0x60f809  jalr        $v1
label_21e03c:
    if (ctx->pc == 0x21E03Cu) {
        ctx->pc = 0x21E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E038u;
        // 0x21e03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E040u;
        goto label_21e040;
    }
    ctx->pc = 0x21E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E040u);
        ctx->pc = 0x21E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E038u;
        // 0x21e03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E038u, 0x21E040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E040u;
label_21e040:
    // 0x21e040: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x21e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_21e044:
    // 0x21e044: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x21e044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21e048:
    // 0x21e048: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21e048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21e04c:
    // 0x21e04c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
label_21e050:
    if (ctx->pc == 0x21E050u) {
        ctx->pc = 0x21E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E04Cu;
        // 0x21e050: 0x8fb00014  lw          $s0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E054u;
        goto label_21e054;
    }
    ctx->pc = 0x21E04Cu;
    {
        const bool branch_taken_0x21e04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E04Cu;
        // 0x21e050: 0x8fb00014  lw          $s0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e04c) {
            ctx->pc = 0x21DD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dd38;
        }
    }
    ctx->pc = 0x21E054u;
label_21e054:
    // 0x21e054: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x21e054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21e058:
    // 0x21e058: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x21e058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21e05c:
    // 0x21e05c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x21e05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21e060:
    // 0x21e060: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x21e060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e064:
    // 0x21e064: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x21e064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21e068:
    // 0x21e068: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x21e068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21e06c:
    // 0x21e06c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x21e06cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21e070:
    // 0x21e070: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x21e070u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21e074:
    // 0x21e074: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x21e074u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21e078:
    // 0x21e078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21e07c:
    // 0x21e07c: 0x3e00008  jr          $ra
label_21e080:
    if (ctx->pc == 0x21E080u) {
        ctx->pc = 0x21E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E07Cu;
        // 0x21e080: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E084u;
        goto label_21e084;
    }
    ctx->pc = 0x21E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E07Cu;
        // 0x21e080: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E084u;
label_21e084:
    // 0x21e084: 0x0  nop
    ctx->pc = 0x21e084u;
    // NOP
    ctx->pc = 0x21e088u;
}

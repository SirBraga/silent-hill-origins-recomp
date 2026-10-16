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

// Function: sub_0027DBF0
// Address: 0x27dbf0 - 0x27df50
void sub_0027DBF0_0x27dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DBF0_0x27dbf0");
#endif

    switch (ctx->pc) {
        case 0x27dbf0u: goto label_27dbf0;
        case 0x27dbf4u: goto label_27dbf4;
        case 0x27dbf8u: goto label_27dbf8;
        case 0x27dbfcu: goto label_27dbfc;
        case 0x27dc00u: goto label_27dc00;
        case 0x27dc04u: goto label_27dc04;
        case 0x27dc08u: goto label_27dc08;
        case 0x27dc0cu: goto label_27dc0c;
        case 0x27dc10u: goto label_27dc10;
        case 0x27dc14u: goto label_27dc14;
        case 0x27dc18u: goto label_27dc18;
        case 0x27dc1cu: goto label_27dc1c;
        case 0x27dc20u: goto label_27dc20;
        case 0x27dc24u: goto label_27dc24;
        case 0x27dc28u: goto label_27dc28;
        case 0x27dc2cu: goto label_27dc2c;
        case 0x27dc30u: goto label_27dc30;
        case 0x27dc34u: goto label_27dc34;
        case 0x27dc38u: goto label_27dc38;
        case 0x27dc3cu: goto label_27dc3c;
        case 0x27dc40u: goto label_27dc40;
        case 0x27dc44u: goto label_27dc44;
        case 0x27dc48u: goto label_27dc48;
        case 0x27dc4cu: goto label_27dc4c;
        case 0x27dc50u: goto label_27dc50;
        case 0x27dc54u: goto label_27dc54;
        case 0x27dc58u: goto label_27dc58;
        case 0x27dc5cu: goto label_27dc5c;
        case 0x27dc60u: goto label_27dc60;
        case 0x27dc64u: goto label_27dc64;
        case 0x27dc68u: goto label_27dc68;
        case 0x27dc6cu: goto label_27dc6c;
        case 0x27dc70u: goto label_27dc70;
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc78u: goto label_27dc78;
        case 0x27dc7cu: goto label_27dc7c;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dc84u: goto label_27dc84;
        case 0x27dc88u: goto label_27dc88;
        case 0x27dc8cu: goto label_27dc8c;
        case 0x27dc90u: goto label_27dc90;
        case 0x27dc94u: goto label_27dc94;
        case 0x27dc98u: goto label_27dc98;
        case 0x27dc9cu: goto label_27dc9c;
        case 0x27dca0u: goto label_27dca0;
        case 0x27dca4u: goto label_27dca4;
        case 0x27dca8u: goto label_27dca8;
        case 0x27dcacu: goto label_27dcac;
        case 0x27dcb0u: goto label_27dcb0;
        case 0x27dcb4u: goto label_27dcb4;
        case 0x27dcb8u: goto label_27dcb8;
        case 0x27dcbcu: goto label_27dcbc;
        case 0x27dcc0u: goto label_27dcc0;
        case 0x27dcc4u: goto label_27dcc4;
        case 0x27dcc8u: goto label_27dcc8;
        case 0x27dcccu: goto label_27dccc;
        case 0x27dcd0u: goto label_27dcd0;
        case 0x27dcd4u: goto label_27dcd4;
        case 0x27dcd8u: goto label_27dcd8;
        case 0x27dcdcu: goto label_27dcdc;
        case 0x27dce0u: goto label_27dce0;
        case 0x27dce4u: goto label_27dce4;
        case 0x27dce8u: goto label_27dce8;
        case 0x27dcecu: goto label_27dcec;
        case 0x27dcf0u: goto label_27dcf0;
        case 0x27dcf4u: goto label_27dcf4;
        case 0x27dcf8u: goto label_27dcf8;
        case 0x27dcfcu: goto label_27dcfc;
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd0cu: goto label_27dd0c;
        case 0x27dd10u: goto label_27dd10;
        case 0x27dd14u: goto label_27dd14;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd1cu: goto label_27dd1c;
        case 0x27dd20u: goto label_27dd20;
        case 0x27dd24u: goto label_27dd24;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd2cu: goto label_27dd2c;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd34u: goto label_27dd34;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd3cu: goto label_27dd3c;
        case 0x27dd40u: goto label_27dd40;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd4cu: goto label_27dd4c;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd54u: goto label_27dd54;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd60u: goto label_27dd60;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd6cu: goto label_27dd6c;
        case 0x27dd70u: goto label_27dd70;
        case 0x27dd74u: goto label_27dd74;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd7cu: goto label_27dd7c;
        case 0x27dd80u: goto label_27dd80;
        case 0x27dd84u: goto label_27dd84;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd8cu: goto label_27dd8c;
        case 0x27dd90u: goto label_27dd90;
        case 0x27dd94u: goto label_27dd94;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27dda0u: goto label_27dda0;
        case 0x27dda4u: goto label_27dda4;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddacu: goto label_27ddac;
        case 0x27ddb0u: goto label_27ddb0;
        case 0x27ddb4u: goto label_27ddb4;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddbcu: goto label_27ddbc;
        case 0x27ddc0u: goto label_27ddc0;
        case 0x27ddc4u: goto label_27ddc4;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddccu: goto label_27ddcc;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27ddd4u: goto label_27ddd4;
        case 0x27ddd8u: goto label_27ddd8;
        case 0x27dddcu: goto label_27dddc;
        case 0x27dde0u: goto label_27dde0;
        case 0x27dde4u: goto label_27dde4;
        case 0x27dde8u: goto label_27dde8;
        case 0x27ddecu: goto label_27ddec;
        case 0x27ddf0u: goto label_27ddf0;
        case 0x27ddf4u: goto label_27ddf4;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27ddfcu: goto label_27ddfc;
        case 0x27de00u: goto label_27de00;
        case 0x27de04u: goto label_27de04;
        case 0x27de08u: goto label_27de08;
        case 0x27de0cu: goto label_27de0c;
        case 0x27de10u: goto label_27de10;
        case 0x27de14u: goto label_27de14;
        case 0x27de18u: goto label_27de18;
        case 0x27de1cu: goto label_27de1c;
        case 0x27de20u: goto label_27de20;
        case 0x27de24u: goto label_27de24;
        case 0x27de28u: goto label_27de28;
        case 0x27de2cu: goto label_27de2c;
        case 0x27de30u: goto label_27de30;
        case 0x27de34u: goto label_27de34;
        case 0x27de38u: goto label_27de38;
        case 0x27de3cu: goto label_27de3c;
        case 0x27de40u: goto label_27de40;
        case 0x27de44u: goto label_27de44;
        case 0x27de48u: goto label_27de48;
        case 0x27de4cu: goto label_27de4c;
        case 0x27de50u: goto label_27de50;
        case 0x27de54u: goto label_27de54;
        case 0x27de58u: goto label_27de58;
        case 0x27de5cu: goto label_27de5c;
        case 0x27de60u: goto label_27de60;
        case 0x27de64u: goto label_27de64;
        case 0x27de68u: goto label_27de68;
        case 0x27de6cu: goto label_27de6c;
        case 0x27de70u: goto label_27de70;
        case 0x27de74u: goto label_27de74;
        case 0x27de78u: goto label_27de78;
        case 0x27de7cu: goto label_27de7c;
        case 0x27de80u: goto label_27de80;
        case 0x27de84u: goto label_27de84;
        case 0x27de88u: goto label_27de88;
        case 0x27de8cu: goto label_27de8c;
        case 0x27de90u: goto label_27de90;
        case 0x27de94u: goto label_27de94;
        case 0x27de98u: goto label_27de98;
        case 0x27de9cu: goto label_27de9c;
        case 0x27dea0u: goto label_27dea0;
        case 0x27dea4u: goto label_27dea4;
        case 0x27dea8u: goto label_27dea8;
        case 0x27deacu: goto label_27deac;
        case 0x27deb0u: goto label_27deb0;
        case 0x27deb4u: goto label_27deb4;
        case 0x27deb8u: goto label_27deb8;
        case 0x27debcu: goto label_27debc;
        case 0x27dec0u: goto label_27dec0;
        case 0x27dec4u: goto label_27dec4;
        case 0x27dec8u: goto label_27dec8;
        case 0x27deccu: goto label_27decc;
        case 0x27ded0u: goto label_27ded0;
        case 0x27ded4u: goto label_27ded4;
        case 0x27ded8u: goto label_27ded8;
        case 0x27dedcu: goto label_27dedc;
        case 0x27dee0u: goto label_27dee0;
        case 0x27dee4u: goto label_27dee4;
        case 0x27dee8u: goto label_27dee8;
        case 0x27deecu: goto label_27deec;
        case 0x27def0u: goto label_27def0;
        case 0x27def4u: goto label_27def4;
        case 0x27def8u: goto label_27def8;
        case 0x27defcu: goto label_27defc;
        case 0x27df00u: goto label_27df00;
        case 0x27df04u: goto label_27df04;
        case 0x27df08u: goto label_27df08;
        case 0x27df0cu: goto label_27df0c;
        case 0x27df10u: goto label_27df10;
        case 0x27df14u: goto label_27df14;
        case 0x27df18u: goto label_27df18;
        case 0x27df1cu: goto label_27df1c;
        case 0x27df20u: goto label_27df20;
        case 0x27df24u: goto label_27df24;
        case 0x27df28u: goto label_27df28;
        case 0x27df2cu: goto label_27df2c;
        case 0x27df30u: goto label_27df30;
        case 0x27df34u: goto label_27df34;
        case 0x27df38u: goto label_27df38;
        case 0x27df3cu: goto label_27df3c;
        case 0x27df40u: goto label_27df40;
        case 0x27df44u: goto label_27df44;
        case 0x27df48u: goto label_27df48;
        case 0x27df4cu: goto label_27df4c;
        default: break;
    }

    ctx->pc = 0x27dbf0u;

label_27dbf0:
    // 0x27dbf0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x27dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_27dbf4:
    // 0x27dbf4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x27dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_27dbf8:
    // 0x27dbf8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27dbfc:
    // 0x27dbfc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x27dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_27dc00:
    // 0x27dc00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27dc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27dc04:
    // 0x27dc04: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27dc04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27dc08:
    // 0x27dc08: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x27dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_27dc0c:
    // 0x27dc0c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x27dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_27dc10:
    // 0x27dc10: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x27dc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_27dc14:
    // 0x27dc14: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x27dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_27dc18:
    // 0x27dc18: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x27dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_27dc1c:
    // 0x27dc1c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x27dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_27dc20:
    // 0x27dc20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27dc24:
    // 0x27dc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27dc28:
    // 0x27dc28: 0xc0927be  jal         func_249EF8
label_27dc2c:
    if (ctx->pc == 0x27DC2Cu) {
        ctx->pc = 0x27DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC28u;
        // 0x27dc2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC30u;
        goto label_27dc30;
    }
    ctx->pc = 0x27DC28u;
    SET_GPR_U32(ctx, 31, 0x27DC30u);
    ctx->pc = 0x27DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC28u;
    // 0x27dc2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27DC28u, 0x27DC30u)) {
        return;
    }
    ctx->pc = 0x27DC30u;
label_27dc30:
    // 0x27dc30: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_27dc34:
    if (ctx->pc == 0x27DC34u) {
        ctx->pc = 0x27DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC30u;
        // 0x27dc34: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC38u;
        goto label_27dc38;
    }
    ctx->pc = 0x27DC30u;
    {
        const bool branch_taken_0x27dc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC30u;
        // 0x27dc34: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc30) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DC38u;
label_27dc38:
    // 0x27dc38: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27dc3c:
    // 0x27dc3c: 0xc09f87c  jal         func_27E1F0
label_27dc40:
    if (ctx->pc == 0x27DC40u) {
        ctx->pc = 0x27DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC3Cu;
        // 0x27dc40: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC44u;
        goto label_27dc44;
    }
    ctx->pc = 0x27DC3Cu;
    SET_GPR_U32(ctx, 31, 0x27DC44u);
    ctx->pc = 0x27DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC3Cu;
    // 0x27dc40: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E1F0u, 0x27DC3Cu, 0x27DC44u)) {
        return;
    }
    ctx->pc = 0x27DC44u;
label_27dc44:
    // 0x27dc44: 0x8f8387f0  lw          $v1, -0x7810($gp)
    ctx->pc = 0x27dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27dc48:
    // 0x27dc48: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x27dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_27dc4c:
    // 0x27dc4c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x27dc4cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27dc50:
    // 0x27dc50: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27dc54:
    // 0x27dc54: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_27dc58:
    if (ctx->pc == 0x27DC58u) {
        ctx->pc = 0x27DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC54u;
        // 0x27dc58: 0x24150122  addiu       $s5, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC5Cu;
        goto label_27dc5c;
    }
    ctx->pc = 0x27DC54u;
    {
        const bool branch_taken_0x27dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC54u;
        // 0x27dc58: 0x24150122  addiu       $s5, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc54) {
            ctx->pc = 0x27DF18u;
            goto label_27df18;
        }
    }
    ctx->pc = 0x27DC5Cu;
label_27dc5c:
    // 0x27dc5c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x27dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_27dc60:
    // 0x27dc60: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_27dc64:
    // 0x27dc64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27dc68:
    // 0x27dc68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x27dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_27dc6c:
    // 0x27dc6c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x27dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_27dc70:
    // 0x27dc70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27dc74:
    // 0x27dc74: 0xc0927be  jal         func_249EF8
label_27dc78:
    if (ctx->pc == 0x27DC78u) {
        ctx->pc = 0x27DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC74u;
        // 0x27dc78: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC7Cu;
        goto label_27dc7c;
    }
    ctx->pc = 0x27DC74u;
    SET_GPR_U32(ctx, 31, 0x27DC7Cu);
    ctx->pc = 0x27DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC74u;
    // 0x27dc78: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27DC74u, 0x27DC7Cu)) {
        return;
    }
    ctx->pc = 0x27DC7Cu;
label_27dc7c:
    // 0x27dc7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_27dc80:
    if (ctx->pc == 0x27DC80u) {
        ctx->pc = 0x27DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC7Cu;
        // 0x27dc80: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC84u;
        goto label_27dc84;
    }
    ctx->pc = 0x27DC7Cu;
    {
        const bool branch_taken_0x27dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC7Cu;
        // 0x27dc80: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc7c) {
            ctx->pc = 0x27DCE0u;
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DC84u;
label_27dc84:
    // 0x27dc84: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_27dc88:
    if (ctx->pc == 0x27DC88u) {
        ctx->pc = 0x27DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC84u;
        // 0x27dc88: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC8Cu;
        goto label_27dc8c;
    }
    ctx->pc = 0x27DC84u;
    {
        const bool branch_taken_0x27dc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC84u;
        // 0x27dc88: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc84) {
            ctx->pc = 0x27DCE8u;
            goto label_27dce8;
        }
    }
    ctx->pc = 0x27DC8Cu;
label_27dc8c:
    // 0x27dc8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27dc90:
    // 0x27dc90: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x27dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_27dc94:
    // 0x27dc94: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x27dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_27dc98:
    // 0x27dc98: 0x40f809  jalr        $v0
label_27dc9c:
    if (ctx->pc == 0x27DC9Cu) {
        ctx->pc = 0x27DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC98u;
        // 0x27dc9c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCA0u;
        goto label_27dca0;
    }
    ctx->pc = 0x27DC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DCA0u);
        ctx->pc = 0x27DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC98u;
        // 0x27dc9c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC98u, 0x27DCA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DCA0u;
label_27dca0:
    // 0x27dca0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27dca4:
    if (ctx->pc == 0x27DCA4u) {
        ctx->pc = 0x27DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCA0u;
        // 0x27dca4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCA8u;
        goto label_27dca8;
    }
    ctx->pc = 0x27DCA0u;
    {
        const bool branch_taken_0x27dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCA0u;
        // 0x27dca4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dca0) {
            ctx->pc = 0x27DCC8u;
            goto label_27dcc8;
        }
    }
    ctx->pc = 0x27DCA8u;
label_27dca8:
    // 0x27dca8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x27dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_27dcac:
    // 0x27dcac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27dcb0:
    // 0x27dcb0: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x27dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_27dcb4:
    // 0x27dcb4: 0xc092848  jal         func_24A120
label_27dcb8:
    if (ctx->pc == 0x27DCB8u) {
        ctx->pc = 0x27DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB4u;
        // 0x27dcb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCBCu;
        goto label_27dcbc;
    }
    ctx->pc = 0x27DCB4u;
    SET_GPR_U32(ctx, 31, 0x27DCBCu);
    ctx->pc = 0x27DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCB4u;
    // 0x27dcb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27DCB4u, 0x27DCBCu)) {
        return;
    }
    ctx->pc = 0x27DCBCu;
label_27dcbc:
    // 0x27dcbc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x27dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_27dcc0:
    // 0x27dcc0: 0x10000051  b           . + 4 + (0x51 << 2)
label_27dcc4:
    if (ctx->pc == 0x27DCC4u) {
        ctx->pc = 0x27DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCC0u;
        // 0x27dcc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCC8u;
        goto label_27dcc8;
    }
    ctx->pc = 0x27DCC0u;
    {
        const bool branch_taken_0x27dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCC0u;
        // 0x27dcc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcc0) {
            ctx->pc = 0x27DE08u;
            goto label_27de08;
        }
    }
    ctx->pc = 0x27DCC8u;
label_27dcc8:
    // 0x27dcc8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_27dccc:
    // 0x27dccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dcd0:
    // 0x27dcd0: 0xc093546  jal         func_24D518
label_27dcd4:
    if (ctx->pc == 0x27DCD4u) {
        ctx->pc = 0x27DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD0u;
        // 0x27dcd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCD8u;
        goto label_27dcd8;
    }
    ctx->pc = 0x27DCD0u;
    SET_GPR_U32(ctx, 31, 0x27DCD8u);
    ctx->pc = 0x27DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCD0u;
    // 0x27dcd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x27DCD0u, 0x27DCD8u)) {
        return;
    }
    ctx->pc = 0x27DCD8u;
label_27dcd8:
    // 0x27dcd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27dcdc:
    if (ctx->pc == 0x27DCDCu) {
        ctx->pc = 0x27DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD8u;
        // 0x27dcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCE0u;
        goto label_27dce0;
    }
    ctx->pc = 0x27DCD8u;
    {
        const bool branch_taken_0x27dcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD8u;
        // 0x27dcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcd8) {
            ctx->pc = 0x27DCF0u;
            goto label_27dcf0;
        }
    }
    ctx->pc = 0x27DCE0u;
label_27dce0:
    // 0x27dce0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_27dce4:
    if (ctx->pc == 0x27DCE4u) {
        ctx->pc = 0x27DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCE0u;
        // 0x27dce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCE8u;
        goto label_27dce8;
    }
    ctx->pc = 0x27DCE0u;
    {
        const bool branch_taken_0x27dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCE0u;
        // 0x27dce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dce0) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DCE8u;
label_27dce8:
    // 0x27dce8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x27dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_27dcec:
    // 0x27dcec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27dcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27dcf0:
    // 0x27dcf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27dcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27dcf4:
    // 0x27dcf4: 0xc0927be  jal         func_249EF8
label_27dcf8:
    if (ctx->pc == 0x27DCF8u) {
        ctx->pc = 0x27DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCF4u;
        // 0x27dcf8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCFCu;
        goto label_27dcfc;
    }
    ctx->pc = 0x27DCF4u;
    SET_GPR_U32(ctx, 31, 0x27DCFCu);
    ctx->pc = 0x27DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCF4u;
    // 0x27dcf8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27DCF4u, 0x27DCFCu)) {
        return;
    }
    ctx->pc = 0x27DCFCu;
label_27dcfc:
    // 0x27dcfc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_27dd00:
    if (ctx->pc == 0x27DD00u) {
        ctx->pc = 0x27DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCFCu;
        // 0x27dd00: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD04u;
        goto label_27dd04;
    }
    ctx->pc = 0x27DCFCu;
    {
        const bool branch_taken_0x27dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCFCu;
        // 0x27dd00: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcfc) {
            ctx->pc = 0x27DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DD04u;
label_27dd04:
    // 0x27dd04: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x27dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_27dd08:
    // 0x27dd08: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x27dd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27dd0c:
    // 0x27dd0c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27dd10:
    // 0x27dd10: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x27dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_27dd14:
    // 0x27dd14: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x27dd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_27dd18:
    // 0x27dd18: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x27dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_27dd1c:
    // 0x27dd1c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x27dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27dd20:
    // 0x27dd20: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x27dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_27dd24:
    // 0x27dd24: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x27dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27dd28:
    // 0x27dd28: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x27dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_27dd2c:
    // 0x27dd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27dd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27dd30:
    // 0x27dd30: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x27dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_27dd34:
    // 0x27dd34: 0x40f809  jalr        $v0
label_27dd38:
    if (ctx->pc == 0x27DD38u) {
        ctx->pc = 0x27DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD34u;
        // 0x27dd38: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD3Cu;
        goto label_27dd3c;
    }
    ctx->pc = 0x27DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DD3Cu);
        ctx->pc = 0x27DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD34u;
        // 0x27dd38: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD34u, 0x27DD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DD3Cu;
label_27dd3c:
    // 0x27dd3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27dd40:
    if (ctx->pc == 0x27DD40u) {
        ctx->pc = 0x27DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD3Cu;
        // 0x27dd40: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD44u;
        goto label_27dd44;
    }
    ctx->pc = 0x27DD3Cu;
    {
        const bool branch_taken_0x27dd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD3Cu;
        // 0x27dd40: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd3c) {
            ctx->pc = 0x27DD68u;
            goto label_27dd68;
        }
    }
    ctx->pc = 0x27DD44u;
label_27dd44:
    // 0x27dd44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27dd48:
    // 0x27dd48: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x27dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_27dd4c:
    // 0x27dd4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dd50:
    // 0x27dd50: 0xc092848  jal         func_24A120
label_27dd54:
    if (ctx->pc == 0x27DD54u) {
        ctx->pc = 0x27DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD50u;
        // 0x27dd54: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD58u;
        goto label_27dd58;
    }
    ctx->pc = 0x27DD50u;
    SET_GPR_U32(ctx, 31, 0x27DD58u);
    ctx->pc = 0x27DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD50u;
    // 0x27dd54: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27DD50u, 0x27DD58u)) {
        return;
    }
    ctx->pc = 0x27DD58u;
label_27dd58:
    // 0x27dd58: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_27dd5c:
    // 0x27dd5c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_27dd60:
    if (ctx->pc == 0x27DD60u) {
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD64u;
        goto label_27dd64;
    }
    ctx->pc = 0x27DD5Cu;
    {
        const bool branch_taken_0x27dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd5c) {
            ctx->pc = 0x27DE08u;
            goto label_27de08;
        }
    }
    ctx->pc = 0x27DD64u;
label_27dd64:
    // 0x27dd64: 0x0  nop
    ctx->pc = 0x27dd64u;
    // NOP
label_27dd68:
    // 0x27dd68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27dd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dd6c:
    // 0x27dd6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27dd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dd70:
    // 0x27dd70: 0xc093546  jal         func_24D518
label_27dd74:
    if (ctx->pc == 0x27DD74u) {
        ctx->pc = 0x27DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD70u;
        // 0x27dd74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD78u;
        goto label_27dd78;
    }
    ctx->pc = 0x27DD70u;
    SET_GPR_U32(ctx, 31, 0x27DD78u);
    ctx->pc = 0x27DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD70u;
    // 0x27dd74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x27DD70u, 0x27DD78u)) {
        return;
    }
    ctx->pc = 0x27DD78u;
label_27dd78:
    // 0x27dd78: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_27dd7c:
    if (ctx->pc == 0x27DD7Cu) {
        ctx->pc = 0x27DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD78u;
        // 0x27dd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD80u;
        goto label_27dd80;
    }
    ctx->pc = 0x27DD78u;
    {
        const bool branch_taken_0x27dd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD78u;
        // 0x27dd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd78) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DD80u;
label_27dd80:
    // 0x27dd80: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x27dd80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27dd84:
    // 0x27dd84: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
label_27dd88:
    if (ctx->pc == 0x27DD88u) {
        ctx->pc = 0x27DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD84u;
        // 0x27dd88: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD8Cu;
        goto label_27dd8c;
    }
    ctx->pc = 0x27DD84u;
    {
        const bool branch_taken_0x27dd84 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dd84) {
            ctx->pc = 0x27DD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DD84u;
            // 0x27dd88: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DD94u;
            goto label_27dd94;
        }
    }
    ctx->pc = 0x27DD8Cu;
label_27dd8c:
    // 0x27dd8c: 0x10000055  b           . + 4 + (0x55 << 2)
label_27dd90:
    if (ctx->pc == 0x27DD90u) {
        ctx->pc = 0x27DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD8Cu;
        // 0x27dd90: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD94u;
        goto label_27dd94;
    }
    ctx->pc = 0x27DD8Cu;
    {
        const bool branch_taken_0x27dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD8Cu;
        // 0x27dd90: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd8c) {
            ctx->pc = 0x27DEE4u;
            goto label_27dee4;
        }
    }
    ctx->pc = 0x27DD94u;
label_27dd94:
    // 0x27dd94: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x27dd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27dd98:
    // 0x27dd98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27dd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27dd9c:
    // 0x27dd9c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x27dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_27dda0:
    // 0x27dda0: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x27dda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_27dda4:
    // 0x27dda4: 0x30c70010  andi        $a3, $a2, 0x10
    ctx->pc = 0x27dda4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_27dda8:
    // 0x27dda8: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x27dda8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_27ddac:
    // 0x27ddac: 0x30c80008  andi        $t0, $a2, 0x8
    ctx->pc = 0x27ddacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_27ddb0:
    // 0x27ddb0: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x27ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27ddb4:
    // 0x27ddb4: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x27ddb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_27ddb8:
    // 0x27ddb8: 0xa7200a  movz        $a0, $a1, $a3
    ctx->pc = 0x27ddb8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_27ddbc:
    // 0x27ddbc: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x27ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_27ddc0:
    // 0x27ddc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27ddc4:
    // 0x27ddc4: 0x88800a  movz        $s0, $a0, $t0
    ctx->pc = 0x27ddc4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
label_27ddc8:
    // 0x27ddc8: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x27ddc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_27ddcc:
    // 0x27ddcc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x27ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_27ddd0:
    // 0x27ddd0: 0x66800b  movn        $s0, $v1, $a2
    ctx->pc = 0x27ddd0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_27ddd4:
    // 0x27ddd4: 0x2098018  mult        $s0, $s0, $t1
    ctx->pc = 0x27ddd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_27ddd8:
    // 0x27ddd8: 0x40f809  jalr        $v0
label_27dddc:
    if (ctx->pc == 0x27DDDCu) {
        ctx->pc = 0x27DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDD8u;
        // 0x27dddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDE0u;
        goto label_27dde0;
    }
    ctx->pc = 0x27DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DDE0u);
        ctx->pc = 0x27DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDD8u;
        // 0x27dddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DDD8u, 0x27DDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DDE0u;
label_27dde0:
    // 0x27dde0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dde4:
    // 0x27dde4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_27dde8:
    if (ctx->pc == 0x27DDE8u) {
        ctx->pc = 0x27DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDE4u;
        // 0x27dde8: 0xae45001c  sw          $a1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDECu;
        goto label_27ddec;
    }
    ctx->pc = 0x27DDE4u;
    {
        const bool branch_taken_0x27dde4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDE4u;
        // 0x27dde8: 0xae45001c  sw          $a1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dde4) {
            ctx->pc = 0x27DE18u;
            goto label_27de18;
        }
    }
    ctx->pc = 0x27DDECu;
label_27ddec:
    // 0x27ddec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27ddf0:
    // 0x27ddf0: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x27ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
label_27ddf4:
    // 0x27ddf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ddf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ddf8:
    // 0x27ddf8: 0xc092848  jal         func_24A120
label_27ddfc:
    if (ctx->pc == 0x27DDFCu) {
        ctx->pc = 0x27DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDF8u;
        // 0x27ddfc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE00u;
        goto label_27de00;
    }
    ctx->pc = 0x27DDF8u;
    SET_GPR_U32(ctx, 31, 0x27DE00u);
    ctx->pc = 0x27DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDF8u;
    // 0x27ddfc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27DDF8u, 0x27DE00u)) {
        return;
    }
    ctx->pc = 0x27DE00u;
label_27de00:
    // 0x27de00: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x27de00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_27de04:
    // 0x27de04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27de08:
    // 0x27de08: 0xc09281a  jal         func_24A068
label_27de0c:
    if (ctx->pc == 0x27DE0Cu) {
        ctx->pc = 0x27DE10u;
        goto label_27de10;
    }
    ctx->pc = 0x27DE08u;
    SET_GPR_U32(ctx, 31, 0x27DE10u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27DE08u, 0x27DE10u)) {
        return;
    }
    ctx->pc = 0x27DE10u;
label_27de10:
    // 0x27de10: 0x10000042  b           . + 4 + (0x42 << 2)
label_27de14:
    if (ctx->pc == 0x27DE14u) {
        ctx->pc = 0x27DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE10u;
        // 0x27de14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE18u;
        goto label_27de18;
    }
    ctx->pc = 0x27DE10u;
    {
        const bool branch_taken_0x27de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE10u;
        // 0x27de14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de10) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DE18u;
label_27de18:
    // 0x27de18: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27de1c:
    // 0x27de1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27de1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27de20:
    // 0x27de20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27de24:
    if (ctx->pc == 0x27DE24u) {
        ctx->pc = 0x27DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE20u;
        // 0x27de24: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE28u;
        goto label_27de28;
    }
    ctx->pc = 0x27DE20u;
    {
        const bool branch_taken_0x27de20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE20u;
        // 0x27de24: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de20) {
            ctx->pc = 0x27DE4Cu;
            goto label_27de4c;
        }
    }
    ctx->pc = 0x27DE28u;
label_27de28:
    // 0x27de28: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x27de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27de2c:
    // 0x27de2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27de30:
    // 0x27de30: 0x548018  mult        $s0, $v0, $s4
    ctx->pc = 0x27de30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_27de34:
    // 0x27de34: 0xc0927aa  jal         func_249EA8
label_27de38:
    if (ctx->pc == 0x27DE38u) {
        ctx->pc = 0x27DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE34u;
        // 0x27de38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE3Cu;
        goto label_27de3c;
    }
    ctx->pc = 0x27DE34u;
    SET_GPR_U32(ctx, 31, 0x27DE3Cu);
    ctx->pc = 0x27DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE34u;
    // 0x27de38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27DE34u, 0x27DE3Cu)) {
        return;
    }
    ctx->pc = 0x27DE3Cu;
label_27de3c:
    // 0x27de3c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_27de40:
    if (ctx->pc == 0x27DE40u) {
        ctx->pc = 0x27DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE3Cu;
        // 0x27de40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE44u;
        goto label_27de44;
    }
    ctx->pc = 0x27DE3Cu;
    {
        const bool branch_taken_0x27de3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE3Cu;
        // 0x27de40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de3c) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DE44u;
label_27de44:
    // 0x27de44: 0xae510020  sw          $s1, 0x20($s2)
    ctx->pc = 0x27de44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 17));
label_27de48:
    // 0x27de48: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x27de48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_27de4c:
    // 0x27de4c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27de50:
    // 0x27de50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_27de54:
    // 0x27de54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27de58:
    if (ctx->pc == 0x27DE58u) {
        ctx->pc = 0x27DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE54u;
        // 0x27de58: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE5Cu;
        goto label_27de5c;
    }
    ctx->pc = 0x27DE54u;
    {
        const bool branch_taken_0x27de54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE54u;
        // 0x27de58: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de54) {
            ctx->pc = 0x27DE84u;
            goto label_27de84;
        }
    }
    ctx->pc = 0x27DE5Cu;
label_27de5c:
    // 0x27de5c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x27de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27de60:
    // 0x27de60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27de64:
    // 0x27de64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27de64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27de68:
    // 0x27de68: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x27de68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_27de6c:
    // 0x27de6c: 0xc0927aa  jal         func_249EA8
label_27de70:
    if (ctx->pc == 0x27DE70u) {
        ctx->pc = 0x27DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE6Cu;
        // 0x27de70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE74u;
        goto label_27de74;
    }
    ctx->pc = 0x27DE6Cu;
    SET_GPR_U32(ctx, 31, 0x27DE74u);
    ctx->pc = 0x27DE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE6Cu;
    // 0x27de70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27DE6Cu, 0x27DE74u)) {
        return;
    }
    ctx->pc = 0x27DE74u;
label_27de74:
    // 0x27de74: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_27de78:
    if (ctx->pc == 0x27DE78u) {
        ctx->pc = 0x27DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE74u;
        // 0x27de78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE7Cu;
        goto label_27de7c;
    }
    ctx->pc = 0x27DE74u;
    {
        const bool branch_taken_0x27de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE74u;
        // 0x27de78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de74) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DE7Cu;
label_27de7c:
    // 0x27de7c: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x27de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
label_27de80:
    // 0x27de80: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_27de84:
    // 0x27de84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27de88:
    // 0x27de88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_27de8c:
    // 0x27de8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27de90:
    if (ctx->pc == 0x27DE90u) {
        ctx->pc = 0x27DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE8Cu;
        // 0x27de90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE94u;
        goto label_27de94;
    }
    ctx->pc = 0x27DE8Cu;
    {
        const bool branch_taken_0x27de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE8Cu;
        // 0x27de90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de8c) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DE94u;
label_27de94:
    // 0x27de94: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x27de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27de98:
    // 0x27de98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27de9c:
    // 0x27de9c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x27de9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27dea0:
    // 0x27dea0: 0xc093546  jal         func_24D518
label_27dea4:
    if (ctx->pc == 0x27DEA4u) {
        ctx->pc = 0x27DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEA0u;
        // 0x27dea4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEA8u;
        goto label_27dea8;
    }
    ctx->pc = 0x27DEA0u;
    SET_GPR_U32(ctx, 31, 0x27DEA8u);
    ctx->pc = 0x27DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEA0u;
    // 0x27dea4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x27DEA0u, 0x27DEA8u)) {
        return;
    }
    ctx->pc = 0x27DEA8u;
label_27dea8:
    // 0x27dea8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_27deac:
    if (ctx->pc == 0x27DEACu) {
        ctx->pc = 0x27DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEA8u;
        // 0x27deac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEB0u;
        goto label_27deb0;
    }
    ctx->pc = 0x27DEA8u;
    {
        const bool branch_taken_0x27dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEA8u;
        // 0x27deac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dea8) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DEB0u;
label_27deb0:
    // 0x27deb0: 0xae510028  sw          $s1, 0x28($s2)
    ctx->pc = 0x27deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 17));
label_27deb4:
    // 0x27deb4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x27deb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_27deb8:
    // 0x27deb8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_27debc:
    // 0x27debc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_27dec0:
    // 0x27dec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27dec4:
    if (ctx->pc == 0x27DEC4u) {
        ctx->pc = 0x27DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEC0u;
        // 0x27dec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEC8u;
        goto label_27dec8;
    }
    ctx->pc = 0x27DEC0u;
    {
        const bool branch_taken_0x27dec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEC0u;
        // 0x27dec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dec0) {
            ctx->pc = 0x27DEE4u;
            goto label_27dee4;
        }
    }
    ctx->pc = 0x27DEC8u;
label_27dec8:
    // 0x27dec8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x27dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27decc:
    // 0x27decc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ded0:
    // 0x27ded0: 0xc0927aa  jal         func_249EA8
label_27ded4:
    if (ctx->pc == 0x27DED4u) {
        ctx->pc = 0x27DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED0u;
        // 0x27ded4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DED8u;
        goto label_27ded8;
    }
    ctx->pc = 0x27DED0u;
    SET_GPR_U32(ctx, 31, 0x27DED8u);
    ctx->pc = 0x27DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DED0u;
    // 0x27ded4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27DED0u, 0x27DED8u)) {
        return;
    }
    ctx->pc = 0x27DED8u;
label_27ded8:
    // 0x27ded8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_27dedc:
    if (ctx->pc == 0x27DEDCu) {
        ctx->pc = 0x27DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED8u;
        // 0x27dedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEE0u;
        goto label_27dee0;
    }
    ctx->pc = 0x27DED8u;
    {
        const bool branch_taken_0x27ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED8u;
        // 0x27dedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ded8) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DEE0u;
label_27dee0:
    // 0x27dee0: 0xae51002c  sw          $s1, 0x2C($s2)
    ctx->pc = 0x27dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 17));
label_27dee4:
    // 0x27dee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27dee8:
    // 0x27dee8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_27deec:
    // 0x27deec: 0xc0927aa  jal         func_249EA8
label_27def0:
    if (ctx->pc == 0x27DEF0u) {
        ctx->pc = 0x27DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEECu;
        // 0x27def0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEF4u;
        goto label_27def4;
    }
    ctx->pc = 0x27DEECu;
    SET_GPR_U32(ctx, 31, 0x27DEF4u);
    ctx->pc = 0x27DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEECu;
    // 0x27def0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27DEECu, 0x27DEF4u)) {
        return;
    }
    ctx->pc = 0x27DEF4u;
label_27def4:
    // 0x27def4: 0x1040ff7a  beqz        $v0, . + 4 + (-0x86 << 2)
label_27def8:
    if (ctx->pc == 0x27DEF8u) {
        ctx->pc = 0x27DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF4u;
        // 0x27def8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEFCu;
        goto label_27defc;
    }
    ctx->pc = 0x27DEF4u;
    {
        const bool branch_taken_0x27def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF4u;
        // 0x27def8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27def4) {
            ctx->pc = 0x27DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dce0;
        }
    }
    ctx->pc = 0x27DEFCu;
label_27defc:
    // 0x27defc: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x27defcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
label_27df00:
    // 0x27df00: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x27df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27df04:
    // 0x27df04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x27df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_27df08:
    // 0x27df08: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x27df08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27df0c:
    // 0x27df0c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x27df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_27df10:
    // 0x27df10: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
label_27df14:
    if (ctx->pc == 0x27DF14u) {
        ctx->pc = 0x27DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF10u;
        // 0x27df14: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DF18u;
        goto label_27df18;
    }
    ctx->pc = 0x27DF10u;
    {
        const bool branch_taken_0x27df10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF10u;
        // 0x27df14: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df10) {
            ctx->pc = 0x27DC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dc60;
        }
    }
    ctx->pc = 0x27DF18u;
label_27df18:
    // 0x27df18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27df18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27df1c:
    // 0x27df1c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x27df1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_27df20:
    // 0x27df20: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x27df20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27df24:
    // 0x27df24: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x27df24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27df28:
    // 0x27df28: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x27df28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27df2c:
    // 0x27df2c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x27df2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27df30:
    // 0x27df30: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x27df30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27df34:
    // 0x27df34: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x27df34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27df38:
    // 0x27df38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27df38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27df3c:
    // 0x27df3c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x27df3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27df40:
    // 0x27df40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27df44:
    // 0x27df44: 0x3e00008  jr          $ra
label_27df48:
    if (ctx->pc == 0x27DF48u) {
        ctx->pc = 0x27DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF44u;
        // 0x27df48: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DF4Cu;
        goto label_27df4c;
    }
    ctx->pc = 0x27DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF44u;
        // 0x27df48: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DF4Cu;
label_27df4c:
    // 0x27df4c: 0x0  nop
    ctx->pc = 0x27df4cu;
    // NOP
    ctx->pc = 0x27df50u;
}

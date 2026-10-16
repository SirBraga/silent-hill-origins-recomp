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

// Function: sub_0020DC68
// Address: 0x20dc68 - 0x20de80
void sub_0020DC68_0x20dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC68_0x20dc68");
#endif

    switch (ctx->pc) {
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        case 0x20ddf0u: goto label_20ddf0;
        case 0x20ddf4u: goto label_20ddf4;
        case 0x20ddf8u: goto label_20ddf8;
        case 0x20ddfcu: goto label_20ddfc;
        case 0x20de00u: goto label_20de00;
        case 0x20de04u: goto label_20de04;
        case 0x20de08u: goto label_20de08;
        case 0x20de0cu: goto label_20de0c;
        case 0x20de10u: goto label_20de10;
        case 0x20de14u: goto label_20de14;
        case 0x20de18u: goto label_20de18;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de24u: goto label_20de24;
        case 0x20de28u: goto label_20de28;
        case 0x20de2cu: goto label_20de2c;
        case 0x20de30u: goto label_20de30;
        case 0x20de34u: goto label_20de34;
        case 0x20de38u: goto label_20de38;
        case 0x20de3cu: goto label_20de3c;
        case 0x20de40u: goto label_20de40;
        case 0x20de44u: goto label_20de44;
        case 0x20de48u: goto label_20de48;
        case 0x20de4cu: goto label_20de4c;
        case 0x20de50u: goto label_20de50;
        case 0x20de54u: goto label_20de54;
        case 0x20de58u: goto label_20de58;
        case 0x20de5cu: goto label_20de5c;
        case 0x20de60u: goto label_20de60;
        case 0x20de64u: goto label_20de64;
        case 0x20de68u: goto label_20de68;
        case 0x20de6cu: goto label_20de6c;
        case 0x20de70u: goto label_20de70;
        case 0x20de74u: goto label_20de74;
        case 0x20de78u: goto label_20de78;
        case 0x20de7cu: goto label_20de7c;
        default: break;
    }

    ctx->pc = 0x20dc68u;

label_20dc68:
    // 0x20dc68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20dc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20dc6c:
    // 0x20dc6c: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x20dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
label_20dc70:
    // 0x20dc70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_20dc74:
    // 0x20dc74: 0x3442c9f0  ori         $v0, $v0, 0xC9F0
    ctx->pc = 0x20dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51696);
label_20dc78:
    // 0x20dc78: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_20dc7c:
    // 0x20dc7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20dc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20dc80:
    // 0x20dc80: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_20dc84:
    // 0x20dc84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20dc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20dc88:
    // 0x20dc88: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_20dc8c:
    // 0x20dc8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20dc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20dc90:
    // 0x20dc90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20dc94:
    // 0x20dc94: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_20dc98:
    // 0x20dc98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_20dc9c:
    // 0x20dc9c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x20dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_20dca0:
    // 0x20dca0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x20dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_20dca4:
    // 0x20dca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20dca8:
    // 0x20dca8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x20dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_20dcac:
    // 0x20dcac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20dcb0:
    if (ctx->pc == 0x20DCB0u) {
        ctx->pc = 0x20DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCACu;
        // 0x20dcb0: 0x8e370004  lw          $s7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCB4u;
        goto label_20dcb4;
    }
    ctx->pc = 0x20DCACu;
    {
        const bool branch_taken_0x20dcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCACu;
        // 0x20dcb0: 0x8e370004  lw          $s7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcac) {
            ctx->pc = 0x20DCDCu;
            goto label_20dcdc;
        }
    }
    ctx->pc = 0x20DCB4u;
label_20dcb4:
    // 0x20dcb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dcb8:
    // 0x20dcb8: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x20dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20dcbc:
    // 0x20dcbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dcc0:
    // 0x20dcc0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20dcc4:
    // 0x20dcc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dcc8:
    // 0x20dcc8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20dccc:
    // 0x20dccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dcd0:
    // 0x20dcd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20dcd4:
    // 0x20dcd4: 0x40f809  jalr        $v0
label_20dcd8:
    if (ctx->pc == 0x20DCD8u) {
        ctx->pc = 0x20DCDCu;
        goto label_20dcdc;
    }
    ctx->pc = 0x20DCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DCDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DCD4u, 0x20DCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DCDCu;
label_20dcdc:
    // 0x20dcdc: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x20dcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_20dce0:
    // 0x20dce0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20dce4:
    if (ctx->pc == 0x20DCE4u) {
        ctx->pc = 0x20DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE0u;
        // 0x20dce4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCE8u;
        goto label_20dce8;
    }
    ctx->pc = 0x20DCE0u;
    {
        const bool branch_taken_0x20dce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE0u;
        // 0x20dce4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dce0) {
            ctx->pc = 0x20DCECu;
            goto label_20dcec;
        }
    }
    ctx->pc = 0x20DCE8u;
label_20dce8:
    // 0x20dce8: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x20dce8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dcec:
    // 0x20dcec: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x20dcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20dcf0:
    // 0x20dcf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20dcf4:
    if (ctx->pc == 0x20DCF4u) {
        ctx->pc = 0x20DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF0u;
        // 0x20dcf4: 0x26e20040  addiu       $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCF8u;
        goto label_20dcf8;
    }
    ctx->pc = 0x20DCF0u;
    {
        const bool branch_taken_0x20dcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF0u;
        // 0x20dcf4: 0x26e20040  addiu       $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcf0) {
            ctx->pc = 0x20DD20u;
            goto label_20dd20;
        }
    }
    ctx->pc = 0x20DCF8u;
label_20dcf8:
    // 0x20dcf8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dcfc:
    // 0x20dcfc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20dd00:
    // 0x20dd00: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20dd04:
    // 0x20dd04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dd08:
    // 0x20dd08: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x20dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_20dd0c:
    // 0x20dd0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dd10:
    // 0x20dd10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20dd14:
    // 0x20dd14: 0x40f809  jalr        $v0
label_20dd18:
    if (ctx->pc == 0x20DD18u) {
        ctx->pc = 0x20DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD14u;
        // 0x20dd18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD1Cu;
        goto label_20dd1c;
    }
    ctx->pc = 0x20DD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DD1Cu);
        ctx->pc = 0x20DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD14u;
        // 0x20dd18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD14u, 0x20DD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DD1Cu;
label_20dd1c:
    // 0x20dd1c: 0x26e20040  addiu       $v0, $s7, 0x40
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_20dd20:
    // 0x20dd20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20dd24:
    // 0x20dd24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x20dd24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dd28:
    // 0x20dd28: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x20dd28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20dd2c:
    // 0x20dd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd30:
    // 0x20dd30: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20dd30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd34:
    // 0x20dd34: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dd38:
    if (ctx->pc == 0x20DD38u) {
        ctx->pc = 0x20DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD34u;
        // 0x20dd38: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD3Cu;
        goto label_20dd3c;
    }
    ctx->pc = 0x20DD34u;
    {
        const bool branch_taken_0x20dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD34u;
        // 0x20dd38: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd34) {
            ctx->pc = 0x20DD44u;
            goto label_20dd44;
        }
    }
    ctx->pc = 0x20DD3Cu;
label_20dd3c:
    // 0x20dd3c: 0x0  nop
    ctx->pc = 0x20dd3cu;
    // NOP
label_20dd40:
    // 0x20dd40: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20dd44:
    // 0x20dd44: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_20dd48:
    if (ctx->pc == 0x20DD48u) {
        ctx->pc = 0x20DD4Cu;
        goto label_20dd4c;
    }
    ctx->pc = 0x20DD44u;
    {
        const bool branch_taken_0x20dd44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd44) {
            ctx->pc = 0x20DD64u;
            goto label_20dd64;
        }
    }
    ctx->pc = 0x20DD4Cu;
label_20dd4c:
    // 0x20dd4c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_20dd50:
    // 0x20dd50: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20dd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_20dd54:
    // 0x20dd54: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_20dd58:
    if (ctx->pc == 0x20DD58u) {
        ctx->pc = 0x20DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD54u;
        // 0x20dd58: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD5Cu;
        goto label_20dd5c;
    }
    ctx->pc = 0x20DD54u;
    {
        const bool branch_taken_0x20dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd54) {
            ctx->pc = 0x20DD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD54u;
            // 0x20dd58: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dd40;
        }
    }
    ctx->pc = 0x20DD5Cu;
label_20dd5c:
    // 0x20dd5c: 0x54e00035  bnel        $a3, $zero, . + 4 + (0x35 << 2)
label_20dd60:
    if (ctx->pc == 0x20DD60u) {
        ctx->pc = 0x20DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD5Cu;
        // 0x20dd60: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD64u;
        goto label_20dd64;
    }
    ctx->pc = 0x20DD5Cu;
    {
        const bool branch_taken_0x20dd5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd5c) {
            ctx->pc = 0x20DD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD5Cu;
            // 0x20dd60: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE34u;
            goto label_20de34;
        }
    }
    ctx->pc = 0x20DD64u;
label_20dd64:
    // 0x20dd64: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_20dd68:
    if (ctx->pc == 0x20DD68u) {
        ctx->pc = 0x20DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD64u;
        // 0x20dd68: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD6Cu;
        goto label_20dd6c;
    }
    ctx->pc = 0x20DD64u;
    {
        const bool branch_taken_0x20dd64 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD64u;
        // 0x20dd68: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd64) {
            ctx->pc = 0x20DD78u;
            goto label_20dd78;
        }
    }
    ctx->pc = 0x20DD6Cu;
label_20dd6c:
    // 0x20dd6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20dd70:
    // 0x20dd70: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dd74:
    if (ctx->pc == 0x20DD74u) {
        ctx->pc = 0x20DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD70u;
        // 0x20dd74: 0x24425588  addiu       $v0, $v0, 0x5588 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DD78u;
        goto label_20dd78;
    }
    ctx->pc = 0x20DD70u;
    {
        const bool branch_taken_0x20dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD70u;
        // 0x20dd74: 0x24425588  addiu       $v0, $v0, 0x5588 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd70) {
            ctx->pc = 0x20DD80u;
            goto label_20dd80;
        }
    }
    ctx->pc = 0x20DD78u;
label_20dd78:
    // 0x20dd78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20dd7c:
    // 0x20dd7c: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x20dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_20dd80:
    // 0x20dd80: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20dd84:
    // 0x20dd84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20dd88:
    // 0x20dd88: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x20dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
label_20dd8c:
    // 0x20dd8c: 0x3442ca00  ori         $v0, $v0, 0xCA00
    ctx->pc = 0x20dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51712);
label_20dd90:
    // 0x20dd90: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x20dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20dd94:
    // 0x20dd94: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x20dd94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20dd98:
    // 0x20dd98: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x20dd98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_20dd9c:
    // 0x20dd9c: 0x1000000f  b           . + 4 + (0xF << 2)
label_20dda0:
    if (ctx->pc == 0x20DDA0u) {
        ctx->pc = 0x20DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD9Cu;
        // 0x20dda0: 0x13a03c  dsll32      $s4, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDA4u;
        goto label_20dda4;
    }
    ctx->pc = 0x20DD9Cu;
    {
        const bool branch_taken_0x20dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD9Cu;
        // 0x20dda0: 0x13a03c  dsll32      $s4, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd9c) {
            ctx->pc = 0x20DDDCu;
            goto label_20dddc;
        }
    }
    ctx->pc = 0x20DDA4u;
label_20dda4:
    // 0x20dda4: 0x0  nop
    ctx->pc = 0x20dda4u;
    // NOP
label_20dda8:
    // 0x20dda8: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_20ddac:
    // 0x20ddac: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x20ddacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_20ddb0:
    // 0x20ddb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20ddb4:
    if (ctx->pc == 0x20DDB4u) {
        ctx->pc = 0x20DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDB0u;
        // 0x20ddb4: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDB8u;
        goto label_20ddb8;
    }
    ctx->pc = 0x20DDB0u;
    {
        const bool branch_taken_0x20ddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDB0u;
        // 0x20ddb4: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddb0) {
            ctx->pc = 0x20DDDCu;
            goto label_20dddc;
        }
    }
    ctx->pc = 0x20DDB8u;
label_20ddb8:
    // 0x20ddb8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ddbc:
    // 0x20ddbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ddc0:
    // 0x20ddc0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ddc4:
    // 0x20ddc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ddc8:
    // 0x20ddc8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20ddcc:
    // 0x20ddcc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ddd0:
    // 0x20ddd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ddd4:
    // 0x20ddd4: 0x40f809  jalr        $v0
label_20ddd8:
    if (ctx->pc == 0x20DDD8u) {
        ctx->pc = 0x20DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDD4u;
        // 0x20ddd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDDCu;
        goto label_20dddc;
    }
    ctx->pc = 0x20DDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DDDCu);
        ctx->pc = 0x20DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDD4u;
        // 0x20ddd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DDD4u, 0x20DDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DDDCu;
label_20dddc:
    // 0x20dddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dde0:
    // 0x20dde0: 0xc083cfa  jal         func_20F3E8
label_20dde4:
    if (ctx->pc == 0x20DDE4u) {
        ctx->pc = 0x20DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE0u;
        // 0x20dde4: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDE8u;
        goto label_20dde8;
    }
    ctx->pc = 0x20DDE0u;
    SET_GPR_U32(ctx, 31, 0x20DDE8u);
    ctx->pc = 0x20DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDE0u;
    // 0x20dde4: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F3E8u, 0x20DDE0u, 0x20DDE8u)) {
        return;
    }
    ctx->pc = 0x20DDE8u;
label_20dde8:
    // 0x20dde8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20dde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ddec:
    // 0x20ddec: 0x10e0ffee  beqz        $a3, . + 4 + (-0x12 << 2)
label_20ddf0:
    if (ctx->pc == 0x20DDF0u) {
        ctx->pc = 0x20DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDECu;
        // 0x20ddf0: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDF4u;
        goto label_20ddf4;
    }
    ctx->pc = 0x20DDECu;
    {
        const bool branch_taken_0x20ddec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDECu;
        // 0x20ddf0: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddec) {
            ctx->pc = 0x20DDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dda8;
        }
    }
    ctx->pc = 0x20DDF4u;
label_20ddf4:
    // 0x20ddf4: 0xdee30058  ld          $v1, 0x58($s7)
    ctx->pc = 0x20ddf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 88)));
label_20ddf8:
    // 0x20ddf8: 0x14203e  dsrl32      $a0, $s4, 0
    ctx->pc = 0x20ddf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) >> (32 + 0));
label_20ddfc:
    // 0x20ddfc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20de00:
    // 0x20de00: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x20de00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_20de04:
    // 0x20de04: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_20de08:
    // 0x20de08: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x20de08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_20de0c:
    // 0x20de0c: 0xfee30058  sd          $v1, 0x58($s7)
    ctx->pc = 0x20de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 88), GPR_U64(ctx, 3));
label_20de10:
    // 0x20de10: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x20de10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_20de14:
    // 0x20de14: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x20de14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_20de18:
    // 0x20de18: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_20de1c:
    if (ctx->pc == 0x20DE1Cu) {
        ctx->pc = 0x20DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE18u;
        // 0x20de1c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE20u;
        goto label_20de20;
    }
    ctx->pc = 0x20DE18u;
    {
        const bool branch_taken_0x20de18 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE18u;
        // 0x20de1c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de18) {
            ctx->pc = 0x20DE2Cu;
            goto label_20de2c;
        }
    }
    ctx->pc = 0x20DE20u;
label_20de20:
    // 0x20de20: 0x3d51021  addu        $v0, $fp, $s5
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
label_20de24:
    // 0x20de24: 0x10000002  b           . + 4 + (0x2 << 2)
label_20de28:
    if (ctx->pc == 0x20DE28u) {
        ctx->pc = 0x20DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE24u;
        // 0x20de28: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE2Cu;
        goto label_20de2c;
    }
    ctx->pc = 0x20DE24u;
    {
        const bool branch_taken_0x20de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE24u;
        // 0x20de28: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de24) {
            ctx->pc = 0x20DE30u;
            goto label_20de30;
        }
    }
    ctx->pc = 0x20DE2Cu;
label_20de2c:
    // 0x20de2c: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x20de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
label_20de30:
    // 0x20de30: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x20de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_20de34:
    // 0x20de34: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_20de38:
    // 0x20de38: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x20de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_20de3c:
    // 0x20de3c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20de40:
    // 0x20de40: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20de40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20de44:
    // 0x20de44: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20de48:
    // 0x20de48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20de48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20de4c:
    // 0x20de4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20de4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20de50:
    // 0x20de50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20de54:
    // 0x20de54: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20de54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20de58:
    // 0x20de58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20de58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20de5c:
    // 0x20de5c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20de5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20de60:
    // 0x20de60: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x20de60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20de64:
    // 0x20de64: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x20de64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20de68:
    // 0x20de68: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x20de68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20de6c:
    // 0x20de6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20de70:
    // 0x20de70: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x20de70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_20de74:
    // 0x20de74: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x20de74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_20de78:
    // 0x20de78: 0x3e00008  jr          $ra
label_20de7c:
    if (ctx->pc == 0x20DE7Cu) {
        ctx->pc = 0x20DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE78u;
        // 0x20de7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DE80u;
        goto label_fallthrough_0x20de78;
    }
    ctx->pc = 0x20DE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE78u;
        // 0x20de7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20de78:
    ctx->pc = 0x20DE80u;
}

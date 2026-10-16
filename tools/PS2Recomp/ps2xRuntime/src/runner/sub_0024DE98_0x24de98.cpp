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

// Function: sub_0024DE98
// Address: 0x24de98 - 0x24dfa0
void sub_0024DE98_0x24de98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DE98_0x24de98");
#endif

    switch (ctx->pc) {
        case 0x24de98u: goto label_24de98;
        case 0x24de9cu: goto label_24de9c;
        case 0x24dea0u: goto label_24dea0;
        case 0x24dea4u: goto label_24dea4;
        case 0x24dea8u: goto label_24dea8;
        case 0x24deacu: goto label_24deac;
        case 0x24deb0u: goto label_24deb0;
        case 0x24deb4u: goto label_24deb4;
        case 0x24deb8u: goto label_24deb8;
        case 0x24debcu: goto label_24debc;
        case 0x24dec0u: goto label_24dec0;
        case 0x24dec4u: goto label_24dec4;
        case 0x24dec8u: goto label_24dec8;
        case 0x24deccu: goto label_24decc;
        case 0x24ded0u: goto label_24ded0;
        case 0x24ded4u: goto label_24ded4;
        case 0x24ded8u: goto label_24ded8;
        case 0x24dedcu: goto label_24dedc;
        case 0x24dee0u: goto label_24dee0;
        case 0x24dee4u: goto label_24dee4;
        case 0x24dee8u: goto label_24dee8;
        case 0x24deecu: goto label_24deec;
        case 0x24def0u: goto label_24def0;
        case 0x24def4u: goto label_24def4;
        case 0x24def8u: goto label_24def8;
        case 0x24defcu: goto label_24defc;
        case 0x24df00u: goto label_24df00;
        case 0x24df04u: goto label_24df04;
        case 0x24df08u: goto label_24df08;
        case 0x24df0cu: goto label_24df0c;
        case 0x24df10u: goto label_24df10;
        case 0x24df14u: goto label_24df14;
        case 0x24df18u: goto label_24df18;
        case 0x24df1cu: goto label_24df1c;
        case 0x24df20u: goto label_24df20;
        case 0x24df24u: goto label_24df24;
        case 0x24df28u: goto label_24df28;
        case 0x24df2cu: goto label_24df2c;
        case 0x24df30u: goto label_24df30;
        case 0x24df34u: goto label_24df34;
        case 0x24df38u: goto label_24df38;
        case 0x24df3cu: goto label_24df3c;
        case 0x24df40u: goto label_24df40;
        case 0x24df44u: goto label_24df44;
        case 0x24df48u: goto label_24df48;
        case 0x24df4cu: goto label_24df4c;
        case 0x24df50u: goto label_24df50;
        case 0x24df54u: goto label_24df54;
        case 0x24df58u: goto label_24df58;
        case 0x24df5cu: goto label_24df5c;
        case 0x24df60u: goto label_24df60;
        case 0x24df64u: goto label_24df64;
        case 0x24df68u: goto label_24df68;
        case 0x24df6cu: goto label_24df6c;
        case 0x24df70u: goto label_24df70;
        case 0x24df74u: goto label_24df74;
        case 0x24df78u: goto label_24df78;
        case 0x24df7cu: goto label_24df7c;
        case 0x24df80u: goto label_24df80;
        case 0x24df84u: goto label_24df84;
        case 0x24df88u: goto label_24df88;
        case 0x24df8cu: goto label_24df8c;
        case 0x24df90u: goto label_24df90;
        case 0x24df94u: goto label_24df94;
        case 0x24df98u: goto label_24df98;
        case 0x24df9cu: goto label_24df9c;
        default: break;
    }

    ctx->pc = 0x24de98u;

label_24de98:
    // 0x24de98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24de98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24de9c:
    // 0x24de9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24dea0:
    // 0x24dea0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_24dea4:
    // 0x24dea4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24dea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24dea8:
    // 0x24dea8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_24deac:
    // 0x24deac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24deacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24deb0:
    // 0x24deb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24deb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24deb4:
    // 0x24deb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_24deb8:
    // 0x24deb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_24debc:
    // 0x24debc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24dec0:
    // 0x24dec0: 0xc093788  jal         func_24DE20
label_24dec4:
    if (ctx->pc == 0x24DEC4u) {
        ctx->pc = 0x24DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEC0u;
        // 0x24dec4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEC8u;
        goto label_24dec8;
    }
    ctx->pc = 0x24DEC0u;
    SET_GPR_U32(ctx, 31, 0x24DEC8u);
    ctx->pc = 0x24DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DEC0u;
    // 0x24dec4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DE20u, 0x24DEC0u, 0x24DEC8u)) {
        return;
    }
    ctx->pc = 0x24DEC8u;
label_24dec8:
    // 0x24dec8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x24dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_24decc:
    // 0x24decc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24deccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ded0:
    // 0x24ded0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ded4:
    // 0x24ded4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24ded8:
    // 0x24ded8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x24ded8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_24dedc:
    // 0x24dedc: 0xc0926f4  jal         func_249BD0
label_24dee0:
    if (ctx->pc == 0x24DEE0u) {
        ctx->pc = 0x24DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEDCu;
        // 0x24dee0: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEE4u;
        goto label_24dee4;
    }
    ctx->pc = 0x24DEDCu;
    SET_GPR_U32(ctx, 31, 0x24DEE4u);
    ctx->pc = 0x24DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DEDCu;
    // 0x24dee0: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x24DEDCu, 0x24DEE4u)) {
        return;
    }
    ctx->pc = 0x24DEE4u;
label_24dee4:
    // 0x24dee4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_24dee8:
    if (ctx->pc == 0x24DEE8u) {
        ctx->pc = 0x24DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEE4u;
        // 0x24dee8: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEECu;
        goto label_24deec;
    }
    ctx->pc = 0x24DEE4u;
    {
        const bool branch_taken_0x24dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dee4) {
            ctx->pc = 0x24DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DEE4u;
            // 0x24dee8: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DEF4u;
            goto label_24def4;
        }
    }
    ctx->pc = 0x24DEECu;
label_24deec:
    // 0x24deec: 0x10000023  b           . + 4 + (0x23 << 2)
label_24def0:
    if (ctx->pc == 0x24DEF0u) {
        ctx->pc = 0x24DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEECu;
        // 0x24def0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEF4u;
        goto label_24def4;
    }
    ctx->pc = 0x24DEECu;
    {
        const bool branch_taken_0x24deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEECu;
        // 0x24def0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24deec) {
            ctx->pc = 0x24DF7Cu;
            goto label_24df7c;
        }
    }
    ctx->pc = 0x24DEF4u;
label_24def4:
    // 0x24def4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_24def8:
    if (ctx->pc == 0x24DEF8u) {
        ctx->pc = 0x24DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEF4u;
        // 0x24def8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEFCu;
        goto label_24defc;
    }
    ctx->pc = 0x24DEF4u;
    {
        const bool branch_taken_0x24def4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEF4u;
        // 0x24def8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24def4) {
            ctx->pc = 0x24DF7Cu;
            goto label_24df7c;
        }
    }
    ctx->pc = 0x24DEFCu;
label_24defc:
    // 0x24defc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24df00:
    // 0x24df00: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_24df04:
    if (ctx->pc == 0x24DF04u) {
        ctx->pc = 0x24DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF00u;
        // 0x24df04: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF08u;
        goto label_24df08;
    }
    ctx->pc = 0x24DF00u;
    {
        const bool branch_taken_0x24df00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24df00) {
            ctx->pc = 0x24DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF00u;
            // 0x24df04: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF70u;
            goto label_24df70;
        }
    }
    ctx->pc = 0x24DF08u;
label_24df08:
    // 0x24df08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24df0c:
    // 0x24df0c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_24df10:
    if (ctx->pc == 0x24DF10u) {
        ctx->pc = 0x24DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF0Cu;
        // 0x24df10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF14u;
        goto label_24df14;
    }
    ctx->pc = 0x24DF0Cu;
    {
        const bool branch_taken_0x24df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF0Cu;
        // 0x24df10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df0c) {
            ctx->pc = 0x24DF6Cu;
            goto label_24df6c;
        }
    }
    ctx->pc = 0x24DF14u;
label_24df14:
    // 0x24df14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24df14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24df18:
    // 0x24df18: 0x60f809  jalr        $v1
label_24df1c:
    if (ctx->pc == 0x24DF1Cu) {
        ctx->pc = 0x24DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF18u;
        // 0x24df1c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF20u;
        goto label_24df20;
    }
    ctx->pc = 0x24DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24DF20u);
        ctx->pc = 0x24DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF18u;
        // 0x24df1c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF18u, 0x24DF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DF20u;
label_24df20:
    // 0x24df20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24df20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24df24:
    // 0x24df24: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_24df28:
    if (ctx->pc == 0x24DF28u) {
        ctx->pc = 0x24DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF24u;
        // 0x24df28: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF2Cu;
        goto label_24df2c;
    }
    ctx->pc = 0x24DF24u;
    {
        const bool branch_taken_0x24df24 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x24DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF24u;
        // 0x24df28: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df24) {
            ctx->pc = 0x24DF6Cu;
            goto label_24df6c;
        }
    }
    ctx->pc = 0x24DF2Cu;
label_24df2c:
    // 0x24df2c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24df30:
    // 0x24df30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24df34:
    // 0x24df34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24df34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24df38:
    // 0x24df38: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x24df38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_24df3c:
    // 0x24df3c: 0xc0926f4  jal         func_249BD0
label_24df40:
    if (ctx->pc == 0x24DF40u) {
        ctx->pc = 0x24DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF3Cu;
        // 0x24df40: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF44u;
        goto label_24df44;
    }
    ctx->pc = 0x24DF3Cu;
    SET_GPR_U32(ctx, 31, 0x24DF44u);
    ctx->pc = 0x24DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF3Cu;
    // 0x24df40: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x24DF3Cu, 0x24DF44u)) {
        return;
    }
    ctx->pc = 0x24DF44u;
label_24df44:
    // 0x24df44: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_24df48:
    if (ctx->pc == 0x24DF48u) {
        ctx->pc = 0x24DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF44u;
        // 0x24df48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF4Cu;
        goto label_24df4c;
    }
    ctx->pc = 0x24DF44u;
    {
        const bool branch_taken_0x24df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF44u;
        // 0x24df48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df44) {
            ctx->pc = 0x24DEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24deec;
        }
    }
    ctx->pc = 0x24DF4Cu;
label_24df4c:
    // 0x24df4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24df50:
    // 0x24df50: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24df50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24df54:
    // 0x24df54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24df58:
    // 0x24df58: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24df5c:
    // 0x24df5c: 0x40f809  jalr        $v0
label_24df60:
    if (ctx->pc == 0x24DF60u) {
        ctx->pc = 0x24DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF5Cu;
        // 0x24df60: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF64u;
        goto label_24df64;
    }
    ctx->pc = 0x24DF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DF64u);
        ctx->pc = 0x24DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF5Cu;
        // 0x24df60: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF5Cu, 0x24DF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DF64u;
label_24df64:
    // 0x24df64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24df68:
    if (ctx->pc == 0x24DF68u) {
        ctx->pc = 0x24DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF64u;
        // 0x24df68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF6Cu;
        goto label_24df6c;
    }
    ctx->pc = 0x24DF64u;
    {
        const bool branch_taken_0x24df64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF64u;
        // 0x24df68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df64) {
            ctx->pc = 0x24DF7Cu;
            goto label_24df7c;
        }
    }
    ctx->pc = 0x24DF6Cu;
label_24df6c:
    // 0x24df6c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24df70:
    // 0x24df70: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
label_24df74:
    if (ctx->pc == 0x24DF74u) {
        ctx->pc = 0x24DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF70u;
        // 0x24df74: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF78u;
        goto label_24df78;
    }
    ctx->pc = 0x24DF70u;
    {
        const bool branch_taken_0x24df70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24df70) {
            ctx->pc = 0x24DF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF70u;
            // 0x24df74: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24df00;
        }
    }
    ctx->pc = 0x24DF78u;
label_24df78:
    // 0x24df78: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x24df78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24df7c:
    // 0x24df7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24df7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24df80:
    // 0x24df80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24df80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24df84:
    // 0x24df84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24df84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24df88:
    // 0x24df88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24df88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24df8c:
    // 0x24df8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24df8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24df90:
    // 0x24df90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24df94:
    // 0x24df94: 0x3e00008  jr          $ra
label_24df98:
    if (ctx->pc == 0x24DF98u) {
        ctx->pc = 0x24DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF94u;
        // 0x24df98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF9Cu;
        goto label_24df9c;
    }
    ctx->pc = 0x24DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF94u;
        // 0x24df98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF9Cu;
label_24df9c:
    // 0x24df9c: 0x0  nop
    ctx->pc = 0x24df9cu;
    // NOP
    ctx->pc = 0x24dfa0u;
}

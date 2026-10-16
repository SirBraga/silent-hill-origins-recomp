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

// Function: sub_00226EC8
// Address: 0x226ec8 - 0x226fd8
void sub_00226EC8_0x226ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226EC8_0x226ec8");
#endif

    switch (ctx->pc) {
        case 0x226ec8u: goto label_226ec8;
        case 0x226eccu: goto label_226ecc;
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed4u: goto label_226ed4;
        case 0x226ed8u: goto label_226ed8;
        case 0x226edcu: goto label_226edc;
        case 0x226ee0u: goto label_226ee0;
        case 0x226ee4u: goto label_226ee4;
        case 0x226ee8u: goto label_226ee8;
        case 0x226eecu: goto label_226eec;
        case 0x226ef0u: goto label_226ef0;
        case 0x226ef4u: goto label_226ef4;
        case 0x226ef8u: goto label_226ef8;
        case 0x226efcu: goto label_226efc;
        case 0x226f00u: goto label_226f00;
        case 0x226f04u: goto label_226f04;
        case 0x226f08u: goto label_226f08;
        case 0x226f0cu: goto label_226f0c;
        case 0x226f10u: goto label_226f10;
        case 0x226f14u: goto label_226f14;
        case 0x226f18u: goto label_226f18;
        case 0x226f1cu: goto label_226f1c;
        case 0x226f20u: goto label_226f20;
        case 0x226f24u: goto label_226f24;
        case 0x226f28u: goto label_226f28;
        case 0x226f2cu: goto label_226f2c;
        case 0x226f30u: goto label_226f30;
        case 0x226f34u: goto label_226f34;
        case 0x226f38u: goto label_226f38;
        case 0x226f3cu: goto label_226f3c;
        case 0x226f40u: goto label_226f40;
        case 0x226f44u: goto label_226f44;
        case 0x226f48u: goto label_226f48;
        case 0x226f4cu: goto label_226f4c;
        case 0x226f50u: goto label_226f50;
        case 0x226f54u: goto label_226f54;
        case 0x226f58u: goto label_226f58;
        case 0x226f5cu: goto label_226f5c;
        case 0x226f60u: goto label_226f60;
        case 0x226f64u: goto label_226f64;
        case 0x226f68u: goto label_226f68;
        case 0x226f6cu: goto label_226f6c;
        case 0x226f70u: goto label_226f70;
        case 0x226f74u: goto label_226f74;
        case 0x226f78u: goto label_226f78;
        case 0x226f7cu: goto label_226f7c;
        case 0x226f80u: goto label_226f80;
        case 0x226f84u: goto label_226f84;
        case 0x226f88u: goto label_226f88;
        case 0x226f8cu: goto label_226f8c;
        case 0x226f90u: goto label_226f90;
        case 0x226f94u: goto label_226f94;
        case 0x226f98u: goto label_226f98;
        case 0x226f9cu: goto label_226f9c;
        case 0x226fa0u: goto label_226fa0;
        case 0x226fa4u: goto label_226fa4;
        case 0x226fa8u: goto label_226fa8;
        case 0x226facu: goto label_226fac;
        case 0x226fb0u: goto label_226fb0;
        case 0x226fb4u: goto label_226fb4;
        case 0x226fb8u: goto label_226fb8;
        case 0x226fbcu: goto label_226fbc;
        case 0x226fc0u: goto label_226fc0;
        case 0x226fc4u: goto label_226fc4;
        case 0x226fc8u: goto label_226fc8;
        case 0x226fccu: goto label_226fcc;
        case 0x226fd0u: goto label_226fd0;
        case 0x226fd4u: goto label_226fd4;
        default: break;
    }

    ctx->pc = 0x226ec8u;

label_226ec8:
    // 0x226ec8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_226ecc:
    // 0x226ecc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_226ed0:
    // 0x226ed0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x226ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_226ed4:
    // 0x226ed4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x226ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_226ed8:
    // 0x226ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226edc:
    // 0x226edc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x226edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_226ee0:
    // 0x226ee0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x226ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_226ee4:
    // 0x226ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_226ee8:
    // 0x226ee8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_226eec:
    // 0x226eec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_226ef0:
    if (ctx->pc == 0x226EF0u) {
        ctx->pc = 0x226EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EECu;
        // 0x226ef0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EF4u;
        goto label_226ef4;
    }
    ctx->pc = 0x226EECu;
    {
        const bool branch_taken_0x226eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EECu;
        // 0x226ef0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226eec) {
            ctx->pc = 0x226F00u;
            goto label_226f00;
        }
    }
    ctx->pc = 0x226EF4u;
label_226ef4:
    // 0x226ef4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_226ef8:
    // 0x226ef8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_226efc:
    if (ctx->pc == 0x226EFCu) {
        ctx->pc = 0x226F00u;
        goto label_226f00;
    }
    ctx->pc = 0x226EF8u;
    {
        const bool branch_taken_0x226ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226ef8) {
            ctx->pc = 0x226F04u;
            goto label_226f04;
        }
    }
    ctx->pc = 0x226F00u;
label_226f00:
    // 0x226f00: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226f04:
    // 0x226f04: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_226f08:
    if (ctx->pc == 0x226F08u) {
        ctx->pc = 0x226F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F04u;
        // 0x226f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F0Cu;
        goto label_226f0c;
    }
    ctx->pc = 0x226F04u;
    {
        const bool branch_taken_0x226f04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F04u;
        // 0x226f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f04) {
            ctx->pc = 0x226F20u;
            goto label_226f20;
        }
    }
    ctx->pc = 0x226F0Cu;
label_226f0c:
    // 0x226f0c: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x226f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_226f10:
    // 0x226f10: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x226f10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_226f14:
    // 0x226f14: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x226f14u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_226f18:
    // 0x226f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_226f1c:
    if (ctx->pc == 0x226F1Cu) {
        ctx->pc = 0x226F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F18u;
        // 0x226f1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F20u;
        goto label_226f20;
    }
    ctx->pc = 0x226F18u;
    {
        const bool branch_taken_0x226f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F18u;
        // 0x226f1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f18) {
            ctx->pc = 0x226F28u;
            goto label_226f28;
        }
    }
    ctx->pc = 0x226F20u;
label_226f20:
    // 0x226f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x226f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226f24:
    // 0x226f24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_226f28:
    // 0x226f28: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_226f2c:
    // 0x226f2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_226f30:
    // 0x226f30: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_226f34:
    // 0x226f34: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x226f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_226f38:
    // 0x226f38: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_226f3c:
    // 0x226f3c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_226f40:
    // 0x226f40: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_226f44:
    // 0x226f44: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x226f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_226f48:
    // 0x226f48: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x226f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_226f4c:
    // 0x226f4c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x226f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_226f50:
    // 0x226f50: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x226f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_226f54:
    // 0x226f54: 0x449018  mult        $s2, $v0, $a0
    ctx->pc = 0x226f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_226f58:
    // 0x226f58: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x226f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_226f5c:
    // 0x226f5c: 0x8ce210d0  lw          $v0, 0x10D0($a3)
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4304)));
label_226f60:
    // 0x226f60: 0x2488021  addu        $s0, $s2, $t0
    ctx->pc = 0x226f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_226f64:
    // 0x226f64: 0x40f809  jalr        $v0
label_226f68:
    if (ctx->pc == 0x226F68u) {
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F6Cu;
        goto label_226f6c;
    }
    ctx->pc = 0x226F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226F6Cu);
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F64u, 0x226F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226F6Cu;
label_226f6c:
    // 0x226f6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_226f70:
    if (ctx->pc == 0x226F70u) {
        ctx->pc = 0x226F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F6Cu;
        // 0x226f70: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F74u;
        goto label_226f74;
    }
    ctx->pc = 0x226F6Cu;
    {
        const bool branch_taken_0x226f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F6Cu;
        // 0x226f70: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f6c) {
            ctx->pc = 0x226FA0u;
            goto label_226fa0;
        }
    }
    ctx->pc = 0x226F74u;
label_226f74:
    // 0x226f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226f78:
    // 0x226f78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x226f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_226f7c:
    // 0x226f7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x226f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_226f80:
    // 0x226f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f84:
    // 0x226f84: 0xc092848  jal         func_24A120
label_226f88:
    if (ctx->pc == 0x226F88u) {
        ctx->pc = 0x226F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F84u;
        // 0x226f88: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F8Cu;
        goto label_226f8c;
    }
    ctx->pc = 0x226F84u;
    SET_GPR_U32(ctx, 31, 0x226F8Cu);
    ctx->pc = 0x226F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F84u;
    // 0x226f88: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x226F84u, 0x226F8Cu)) {
        return;
    }
    ctx->pc = 0x226F8Cu;
label_226f8c:
    // 0x226f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_226f90:
    // 0x226f90: 0xc09281a  jal         func_24A068
label_226f94:
    if (ctx->pc == 0x226F94u) {
        ctx->pc = 0x226F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F90u;
        // 0x226f94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F98u;
        goto label_226f98;
    }
    ctx->pc = 0x226F90u;
    SET_GPR_U32(ctx, 31, 0x226F98u);
    ctx->pc = 0x226F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F90u;
    // 0x226f94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x226F90u, 0x226F98u)) {
        return;
    }
    ctx->pc = 0x226F98u;
label_226f98:
    // 0x226f98: 0x10000008  b           . + 4 + (0x8 << 2)
label_226f9c:
    if (ctx->pc == 0x226F9Cu) {
        ctx->pc = 0x226F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F98u;
        // 0x226f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FA0u;
        goto label_226fa0;
    }
    ctx->pc = 0x226F98u;
    {
        const bool branch_taken_0x226f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F98u;
        // 0x226f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f98) {
            ctx->pc = 0x226FBCu;
            goto label_226fbc;
        }
    }
    ctx->pc = 0x226FA0u;
label_226fa0:
    // 0x226fa0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x226fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_226fa4:
    // 0x226fa4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x226fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_226fa8:
    // 0x226fa8: 0x13180a  movz        $v1, $zero, $s3
    ctx->pc = 0x226fa8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_226fac:
    // 0x226fac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226fb0:
    // 0x226fb0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x226fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_226fb4:
    // 0x226fb4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x226fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_226fb8:
    // 0x226fb8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x226fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_226fbc:
    // 0x226fbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x226fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_226fc0:
    // 0x226fc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x226fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_226fc4:
    // 0x226fc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x226fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226fc8:
    // 0x226fc8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x226fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226fcc:
    // 0x226fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226fd0:
    // 0x226fd0: 0x3e00008  jr          $ra
label_226fd4:
    if (ctx->pc == 0x226FD4u) {
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD0u;
        // 0x226fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FD8u;
        goto label_fallthrough_0x226fd0;
    }
    ctx->pc = 0x226FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD0u;
        // 0x226fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226fd0:
    ctx->pc = 0x226FD8u;
}

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

// Function: sub_0022AAC8
// Address: 0x22aac8 - 0x22abb0
void sub_0022AAC8_0x22aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AAC8_0x22aac8");
#endif

    switch (ctx->pc) {
        case 0x22aac8u: goto label_22aac8;
        case 0x22aaccu: goto label_22aacc;
        case 0x22aad0u: goto label_22aad0;
        case 0x22aad4u: goto label_22aad4;
        case 0x22aad8u: goto label_22aad8;
        case 0x22aadcu: goto label_22aadc;
        case 0x22aae0u: goto label_22aae0;
        case 0x22aae4u: goto label_22aae4;
        case 0x22aae8u: goto label_22aae8;
        case 0x22aaecu: goto label_22aaec;
        case 0x22aaf0u: goto label_22aaf0;
        case 0x22aaf4u: goto label_22aaf4;
        case 0x22aaf8u: goto label_22aaf8;
        case 0x22aafcu: goto label_22aafc;
        case 0x22ab00u: goto label_22ab00;
        case 0x22ab04u: goto label_22ab04;
        case 0x22ab08u: goto label_22ab08;
        case 0x22ab0cu: goto label_22ab0c;
        case 0x22ab10u: goto label_22ab10;
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab18u: goto label_22ab18;
        case 0x22ab1cu: goto label_22ab1c;
        case 0x22ab20u: goto label_22ab20;
        case 0x22ab24u: goto label_22ab24;
        case 0x22ab28u: goto label_22ab28;
        case 0x22ab2cu: goto label_22ab2c;
        case 0x22ab30u: goto label_22ab30;
        case 0x22ab34u: goto label_22ab34;
        case 0x22ab38u: goto label_22ab38;
        case 0x22ab3cu: goto label_22ab3c;
        case 0x22ab40u: goto label_22ab40;
        case 0x22ab44u: goto label_22ab44;
        case 0x22ab48u: goto label_22ab48;
        case 0x22ab4cu: goto label_22ab4c;
        case 0x22ab50u: goto label_22ab50;
        case 0x22ab54u: goto label_22ab54;
        case 0x22ab58u: goto label_22ab58;
        case 0x22ab5cu: goto label_22ab5c;
        case 0x22ab60u: goto label_22ab60;
        case 0x22ab64u: goto label_22ab64;
        case 0x22ab68u: goto label_22ab68;
        case 0x22ab6cu: goto label_22ab6c;
        case 0x22ab70u: goto label_22ab70;
        case 0x22ab74u: goto label_22ab74;
        case 0x22ab78u: goto label_22ab78;
        case 0x22ab7cu: goto label_22ab7c;
        case 0x22ab80u: goto label_22ab80;
        case 0x22ab84u: goto label_22ab84;
        case 0x22ab88u: goto label_22ab88;
        case 0x22ab8cu: goto label_22ab8c;
        case 0x22ab90u: goto label_22ab90;
        case 0x22ab94u: goto label_22ab94;
        case 0x22ab98u: goto label_22ab98;
        case 0x22ab9cu: goto label_22ab9c;
        case 0x22aba0u: goto label_22aba0;
        case 0x22aba4u: goto label_22aba4;
        case 0x22aba8u: goto label_22aba8;
        case 0x22abacu: goto label_22abac;
        default: break;
    }

    ctx->pc = 0x22aac8u;

label_22aac8:
    // 0x22aac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22aacc:
    // 0x22aacc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22aad0:
    // 0x22aad0: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22aad4:
    // 0x22aad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22aad8:
    // 0x22aad8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22aadc:
    // 0x22aadc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22aae0:
    // 0x22aae0: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22aae4:
    // 0x22aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22aae8:
    // 0x22aae8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22aaec:
    // 0x22aaec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x22aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_22aaf0:
    // 0x22aaf0: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x22aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_22aaf4:
    // 0x22aaf4: 0x34a50016  ori         $a1, $a1, 0x16
    ctx->pc = 0x22aaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
label_22aaf8:
    // 0x22aaf8: 0x40f809  jalr        $v0
label_22aafc:
    if (ctx->pc == 0x22AAFCu) {
        ctx->pc = 0x22AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF8u;
        // 0x22aafc: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB00u;
        goto label_22ab00;
    }
    ctx->pc = 0x22AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AB00u);
        ctx->pc = 0x22AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF8u;
        // 0x22aafc: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AAF8u, 0x22AB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AB00u;
label_22ab00:
    // 0x22ab00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ab04:
    // 0x22ab04: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_22ab08:
    if (ctx->pc == 0x22AB08u) {
        ctx->pc = 0x22AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB04u;
        // 0x22ab08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB0Cu;
        goto label_22ab0c;
    }
    ctx->pc = 0x22AB04u;
    {
        const bool branch_taken_0x22ab04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB04u;
        // 0x22ab08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab04) {
            ctx->pc = 0x22AB90u;
            goto label_22ab90;
        }
    }
    ctx->pc = 0x22AB0Cu;
label_22ab0c:
    // 0x22ab0c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x22ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_22ab10:
    // 0x22ab10: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_22ab14:
    // 0x22ab14: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_22ab18:
    // 0x22ab18: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x22ab18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_22ab1c:
    // 0x22ab1c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x22ab1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_22ab20:
    // 0x22ab20: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x22ab20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_22ab24:
    // 0x22ab24: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_22ab28:
    // 0x22ab28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_22ab2c:
    // 0x22ab2c: 0x24840460  addiu       $a0, $a0, 0x460
    ctx->pc = 0x22ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
label_22ab30:
    // 0x22ab30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ab34:
    // 0x22ab34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22ab38:
    // 0x22ab38: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22ab3c:
    // 0x22ab3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22ab40:
    // 0x22ab40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22ab44:
    // 0x22ab44: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x22ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_22ab48:
    // 0x22ab48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22ab4c:
    // 0x22ab4c: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22ab50:
    // 0x22ab50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22ab54:
    // 0x22ab54: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x22ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_22ab58:
    // 0x22ab58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22ab5c:
    // 0x22ab5c: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22ab60:
    // 0x22ab60: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ab64:
    // 0x22ab64: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ab68:
    // 0x22ab68: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x22ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_22ab6c:
    // 0x22ab6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22ab70:
    // 0x22ab70: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22ab74:
    // 0x22ab74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22ab78:
    // 0x22ab78: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_22ab7c:
    // 0x22ab7c: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x22ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_22ab80:
    // 0x22ab80: 0xc093958  jal         func_24E560
label_22ab84:
    if (ctx->pc == 0x22AB84u) {
        ctx->pc = 0x22AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB80u;
        // 0x22ab84: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB88u;
        goto label_22ab88;
    }
    ctx->pc = 0x22AB80u;
    SET_GPR_U32(ctx, 31, 0x22AB88u);
    ctx->pc = 0x22AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB80u;
    // 0x22ab84: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x22AB80u, 0x22AB88u)) {
        return;
    }
    ctx->pc = 0x22AB88u;
label_22ab88:
    // 0x22ab88: 0x10000003  b           . + 4 + (0x3 << 2)
label_22ab8c:
    if (ctx->pc == 0x22AB8Cu) {
        ctx->pc = 0x22AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB88u;
        // 0x22ab8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB90u;
        goto label_22ab90;
    }
    ctx->pc = 0x22AB88u;
    {
        const bool branch_taken_0x22ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB88u;
        // 0x22ab8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab88) {
            ctx->pc = 0x22AB98u;
            goto label_22ab98;
        }
    }
    ctx->pc = 0x22AB90u;
label_22ab90:
    // 0x22ab90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ab90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ab94:
    // 0x22ab94: 0x0  nop
    ctx->pc = 0x22ab94u;
    // NOP
label_22ab98:
    // 0x22ab98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22ab98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ab9c:
    // 0x22ab9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ab9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22aba0:
    // 0x22aba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22aba4:
    // 0x22aba4: 0x3e00008  jr          $ra
label_22aba8:
    if (ctx->pc == 0x22ABA8u) {
        ctx->pc = 0x22ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABA4u;
        // 0x22aba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ABACu;
        goto label_22abac;
    }
    ctx->pc = 0x22ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABA4u;
        // 0x22aba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ABA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ABACu;
label_22abac:
    // 0x22abac: 0x0  nop
    ctx->pc = 0x22abacu;
    // NOP
    ctx->pc = 0x22abb0u;
}

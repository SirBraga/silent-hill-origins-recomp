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

// Function: sub_0013EEA8
// Address: 0x13eea8 - 0x13efc0
void sub_0013EEA8_0x13eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EEA8_0x13eea8");
#endif

    switch (ctx->pc) {
        case 0x13eee4u: goto label_13eee4;
        case 0x13eefcu: goto label_13eefc;
        case 0x13ef04u: goto label_13ef04;
        case 0x13ef10u: goto label_13ef10;
        case 0x13ef38u: goto label_13ef38;
        case 0x13ef60u: goto label_13ef60;
        case 0x13ef70u: goto label_13ef70;
        case 0x13ef88u: goto label_13ef88;
        case 0x13ef98u: goto label_13ef98;
        default: break;
    }

    ctx->pc = 0x13eea8u;

    // 0x13eea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13eeac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13eeb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13eeb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13eeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eeb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13eebc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13eec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eec4: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x13eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x13eec8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x13EEC8u;
    {
        const bool branch_taken_0x13eec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEC8u;
        // 0x13eecc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eec8) {
            ctx->pc = 0x13EFA4u;
            goto label_13efa4;
        }
    }
    ctx->pc = 0x13EED0u;
    // 0x13eed0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13eed4: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x13eed8: 0x8c528bc4  lw          $s2, -0x743C($v0)
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338BC4u));
    // 0x13eedc: 0xc0b5bec  jal         func_2D6FB0
    ctx->pc = 0x13EEDCu;
    SET_GPR_U32(ctx, 31, 0x13EEE4u);
    ctx->pc = 0x13EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEDCu;
    // 0x13eee0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6FB0u, 0x13EEDCu, 0x13EEE4u)) {
        return;
    }
    ctx->pc = 0x13EEE4u;
label_13eee4:
    // 0x13eee4: 0xae220324  sw          $v0, 0x324($s1)
    ctx->pc = 0x13eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 2));
    // 0x13eee8: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x13eeec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eef0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eef4: 0xc0aa07e  jal         func_2A81F8
    ctx->pc = 0x13EEF4u;
    SET_GPR_U32(ctx, 31, 0x13EEFCu);
    ctx->pc = 0x13EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEF4u;
    // 0x13eef8: 0xae230320  sw          $v1, 0x320($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x13EEF4u, 0x13EEFCu)) {
        return;
    }
    ctx->pc = 0x13EEFCu;
label_13eefc:
    // 0x13eefc: 0xc0b5b70  jal         func_2D6DC0
    ctx->pc = 0x13EEFCu;
    SET_GPR_U32(ctx, 31, 0x13EF04u);
    ctx->pc = 0x13EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEFCu;
    // 0x13ef00: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x13EEFCu, 0x13EF04u)) {
        return;
    }
    ctx->pc = 0x13EF04u;
label_13ef04:
    // 0x13ef04: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x13ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x13ef08: 0xc0b5c00  jal         func_2D7000
    ctx->pc = 0x13EF08u;
    SET_GPR_U32(ctx, 31, 0x13EF10u);
    ctx->pc = 0x13EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF08u;
    // 0x13ef0c: 0xae220328  sw          $v0, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x13EF08u, 0x13EF10u)) {
        return;
    }
    ctx->pc = 0x13EF10u;
label_13ef10:
    // 0x13ef10: 0x8e230328  lw          $v1, 0x328($s1)
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x13ef14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef18: 0xae23032c  sw          $v1, 0x32C($s1)
    ctx->pc = 0x13ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 3));
    // 0x13ef1c: 0xac700028  sw          $s0, 0x28($v1)
    ctx->pc = 0x13ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 16));
    // 0x13ef20: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x13ef24: 0x8e230330  lw          $v1, 0x330($s1)
    ctx->pc = 0x13ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x13ef28: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13ef2c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13ef30: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x13EF30u;
    SET_GPR_U32(ctx, 31, 0x13EF38u);
    ctx->pc = 0x13EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF30u;
    // 0x13ef34: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x13EF30u, 0x13EF38u)) {
        return;
    }
    ctx->pc = 0x13EF38u;
label_13ef38:
    // 0x13ef38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13ef3c: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x13ef40: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13EF40u;
    {
        const bool branch_taken_0x13ef40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef40) {
            ctx->pc = 0x13EF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF40u;
            // 0x13ef44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF4Cu;
            goto label_13ef4c;
        }
    }
    ctx->pc = 0x13EF48u;
    // 0x13ef48: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13ef4c:
    // 0x13ef4c: 0x8e26032c  lw          $a2, 0x32C($s1)
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13ef50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef54: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ef58: 0xc06657a  jal         func_1995E8
    ctx->pc = 0x13EF58u;
    SET_GPR_U32(ctx, 31, 0x13EF60u);
    ctx->pc = 0x13EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF58u;
    // 0x13ef5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1995E8u, 0x13EF58u, 0x13EF60u)) {
        return;
    }
    ctx->pc = 0x13EF60u;
label_13ef60:
    // 0x13ef60: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13ef64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef68: 0xc066318  jal         func_198C60
    ctx->pc = 0x13EF68u;
    SET_GPR_U32(ctx, 31, 0x13EF70u);
    ctx->pc = 0x13EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF68u;
    // 0x13ef6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x13EF68u, 0x13EF70u)) {
        return;
    }
    ctx->pc = 0x13EF70u;
label_13ef70:
    // 0x13ef70: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x13ef74: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x13ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13ef78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EF78u;
    {
        const bool branch_taken_0x13ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef78) {
            ctx->pc = 0x13EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF78u;
            // 0x13ef7c: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF8Cu;
            goto label_13ef8c;
        }
    }
    ctx->pc = 0x13EF80u;
    // 0x13ef80: 0xc0b5b00  jal         func_2D6C00
    ctx->pc = 0x13EF80u;
    SET_GPR_U32(ctx, 31, 0x13EF88u);
    ctx->pc = 0x2D6C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C00u, 0x13EF80u, 0x13EF88u)) {
        return;
    }
    ctx->pc = 0x13EF88u;
label_13ef88:
    // 0x13ef88: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x13ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_13ef8c:
    // 0x13ef8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef90: 0xc04fc8c  jal         func_13F230
    ctx->pc = 0x13EF90u;
    SET_GPR_U32(ctx, 31, 0x13EF98u);
    ctx->pc = 0x13EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF90u;
    // 0x13ef94: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13F230u, 0x13EF90u, 0x13EF98u)) {
        return;
    }
    ctx->pc = 0x13EF98u;
label_13ef98:
    // 0x13ef98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef9c: 0xae220380  sw          $v0, 0x380($s1)
    ctx->pc = 0x13ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
    // 0x13efa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13efa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13efa4:
    // 0x13efa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13efa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13efa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13efac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13efacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13efb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13efb4: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFB4u;
        // 0x13efb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EFBCu;
    // 0x13efbc: 0x0  nop
    ctx->pc = 0x13efbcu;
    // NOP
    ctx->pc = 0x13efc0u;
}

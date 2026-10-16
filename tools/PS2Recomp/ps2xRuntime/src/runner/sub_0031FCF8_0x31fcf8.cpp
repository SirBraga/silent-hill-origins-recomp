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

// Function: sub_0031FCF8
// Address: 0x31fcf8 - 0x31fde0
void sub_0031FCF8_0x31fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FCF8_0x31fcf8");
#endif

    switch (ctx->pc) {
        case 0x31fd3cu: goto label_31fd3c;
        case 0x31fd98u: goto label_31fd98;
        default: break;
    }

    ctx->pc = 0x31fcf8u;

    // 0x31fcf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31fcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31fcfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31fd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31fd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd08: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31fd0c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FD0Cu;
    {
        const bool branch_taken_0x31fd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd0c) {
            ctx->pc = 0x31FD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FD0Cu;
            // 0x31fd10: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD28u;
            goto label_31fd28;
        }
    }
    ctx->pc = 0x31FD14u;
    // 0x31fd14: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31fd18: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x31fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31fd1c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x31fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x31fd20: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31fd24: 0x0  nop
    ctx->pc = 0x31fd24u;
    // NOP
label_31fd28:
    // 0x31fd28: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x31fd2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FD2Cu;
    {
        const bool branch_taken_0x31fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd2c) {
            ctx->pc = 0x31FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FD2Cu;
            // 0x31fd30: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD40u;
            goto label_31fd40;
        }
    }
    ctx->pc = 0x31FD34u;
    // 0x31fd34: 0xc0c4cfe  jal         func_3133F8
    ctx->pc = 0x31FD34u;
    SET_GPR_U32(ctx, 31, 0x31FD3Cu);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x31FD34u, 0x31FD3Cu)) {
        return;
    }
    ctx->pc = 0x31FD3Cu;
label_31fd3c:
    // 0x31fd3c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x31fd3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_31fd40:
    // 0x31fd40: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x31fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x31fd44: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FD44u;
    {
        const bool branch_taken_0x31fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd44) {
            ctx->pc = 0x31FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FD44u;
            // 0x31fd48: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD88u;
            goto label_31fd88;
        }
    }
    ctx->pc = 0x31FD4Cu;
    // 0x31fd4c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x31fd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x31fd50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FD50u;
    {
        const bool branch_taken_0x31fd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD50u;
        // 0x31fd54: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd50) {
            ctx->pc = 0x31FD60u;
            goto label_31fd60;
        }
    }
    ctx->pc = 0x31FD58u;
    // 0x31fd58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x31FD58u;
    {
        const bool branch_taken_0x31fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD58u;
        // 0x31fd5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd58) {
            ctx->pc = 0x31FDD0u;
            goto label_31fdd0;
        }
    }
    ctx->pc = 0x31FD60u;
label_31fd60:
    // 0x31fd60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FD60u;
    {
        const bool branch_taken_0x31fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD60u;
        // 0x31fd64: 0x3082ffdb  andi        $v0, $a0, 0xFFDB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65499);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd60) {
            ctx->pc = 0x31FD78u;
            goto label_31fd78;
        }
    }
    ctx->pc = 0x31FD68u;
    // 0x31fd68: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31fd6c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x31fd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x31fd70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x31fd74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31fd78:
    // 0x31fd78: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x31fd78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31fd7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31fd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31fd80: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x31fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x31fd84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x31fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31fd88:
    // 0x31fd88: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FD88u;
    {
        const bool branch_taken_0x31fd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fd88) {
            ctx->pc = 0x31FD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FD88u;
            // 0x31fd8c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD9Cu;
            goto label_31fd9c;
        }
    }
    ctx->pc = 0x31FD90u;
    // 0x31fd90: 0xc0c4ed6  jal         func_313B58
    ctx->pc = 0x31FD90u;
    SET_GPR_U32(ctx, 31, 0x31FD98u);
    ctx->pc = 0x31FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD90u;
    // 0x31fd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313B58u, 0x31FD90u, 0x31FD98u)) {
        return;
    }
    ctx->pc = 0x31FD98u;
label_31fd98:
    // 0x31fd98: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x31fd98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_31fd9c:
    // 0x31fd9c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31fd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31fda0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDA0u;
    {
        const bool branch_taken_0x31fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDA0u;
        // 0x31fda4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fda0) {
            ctx->pc = 0x31FDBCu;
            goto label_31fdbc;
        }
    }
    ctx->pc = 0x31FDA8u;
    // 0x31fda8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31fdac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x31fdb0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x31fdb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FDB4u;
    {
        const bool branch_taken_0x31fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDB4u;
        // 0x31fdb8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdb4) {
            ctx->pc = 0x31FDCCu;
            goto label_31fdcc;
        }
    }
    ctx->pc = 0x31FDBCu;
label_31fdbc:
    // 0x31fdbc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FDBCu;
    {
        const bool branch_taken_0x31fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDBCu;
        // 0x31fdc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdbc) {
            ctx->pc = 0x31FDC8u;
            goto label_31fdc8;
        }
    }
    ctx->pc = 0x31FDC4u;
    // 0x31fdc4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x31fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31fdc8:
    // 0x31fdc8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x31fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_31fdcc:
    // 0x31fdcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fdd0:
    // 0x31fdd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31fdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x31FDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD8u;
        // 0x31fddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FDE0u;
}

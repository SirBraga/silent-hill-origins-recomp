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

// Function: sub_002EE1F0
// Address: 0x2ee1f0 - 0x2ee2f0
void sub_002EE1F0_0x2ee1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE1F0_0x2ee1f0");
#endif

    switch (ctx->pc) {
        case 0x2ee238u: goto label_2ee238;
        case 0x2ee288u: goto label_2ee288;
        default: break;
    }

    ctx->pc = 0x2ee1f0u;

    // 0x2ee1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee1f4: 0x578c2  srl         $t7, $a1, 3
    ctx->pc = 0x2ee1f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2ee1f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ee1fc: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x2ee1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee200: 0x30b00007  andi        $s0, $a1, 0x7
    ctx->pc = 0x2ee200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2ee204: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2ee204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2ee208: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ee208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ee20c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2ee20cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee210: 0x570c2  srl         $t6, $a1, 3
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2ee214: 0x30b90007  andi        $t9, $a1, 0x7
    ctx->pc = 0x2ee214u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2ee218: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x2ee218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ee21c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2EE21Cu;
    {
        const bool branch_taken_0x2ee21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE21Cu;
        // 0x2ee220: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee21c) {
            ctx->pc = 0x2EE2D8u;
            goto label_2ee2d8;
        }
    }
    ctx->pc = 0x2EE224u;
    // 0x2ee224: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2ee224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ee228: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x2ee228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee22c: 0x2c027  nor         $t8, $zero, $v0
    ctx->pc = 0x2ee22cu;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ee230: 0x12f1026  xor         $v0, $t1, $t7
    ctx->pc = 0x2ee230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x2ee234: 0x0  nop
    ctx->pc = 0x2ee234u;
    // NOP
label_2ee238:
    // 0x2ee238: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee23c: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x2ee23cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x2ee240: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2ee240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee244: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ee244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee248: 0x12e1826  xor         $v1, $t1, $t6
    ctx->pc = 0x2ee248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 14));
    // 0x2ee24c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE24Cu;
    {
        const bool branch_taken_0x2ee24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE24Cu;
        // 0x2ee250: 0x323500a  movz        $t2, $t9, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee24c) {
            ctx->pc = 0x2EE270u;
            goto label_2ee270;
        }
    }
    ctx->pc = 0x2EE254u;
    // 0x2ee254: 0x15510007  bne         $t2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE254u;
    {
        const bool branch_taken_0x2ee254 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE254u;
        // 0x2ee258: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee254) {
            ctx->pc = 0x2EE274u;
            goto label_2ee274;
        }
    }
    ctx->pc = 0x2EE25Cu;
    // 0x2ee25c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee260: 0x252c0001  addiu       $t4, $t1, 0x1
    ctx->pc = 0x2ee260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ee264: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ee264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ee268: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE268u;
    {
        const bool branch_taken_0x2ee268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE268u;
        // 0x2ee26c: 0xa0580000  sb          $t8, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee268) {
            ctx->pc = 0x2EE2C8u;
            goto label_2ee2c8;
        }
    }
    ctx->pc = 0x2EE270u;
label_2ee270:
    // 0x2ee270: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ee270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee274:
    // 0x2ee274: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2ee274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ee278: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE278u;
    {
        const bool branch_taken_0x2ee278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE278u;
        // 0x2ee27c: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee278) {
            ctx->pc = 0x2EE2C8u;
            goto label_2ee2c8;
        }
    }
    ctx->pc = 0x2EE280u;
    // 0x2ee280: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2ee280u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee284: 0x0  nop
    ctx->pc = 0x2ee284u;
    // NOP
label_2ee288:
    // 0x2ee288: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2ee288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee28c: 0x10d1804  sllv        $v1, $t5, $t0
    ctx->pc = 0x2ee28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ee290: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2ee290u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2ee294: 0x1073004  sllv        $a2, $a3, $t0
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ee298: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2ee298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2ee29c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ee29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ee2a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ee2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee2a4: 0x10a282b  sltu        $a1, $t0, $t2
    ctx->pc = 0x2ee2a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ee2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee2ac: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2ee2acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ee2b0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2ee2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee2b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ee2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ee2b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ee2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee2bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ee2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ee2c0: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2EE2C0u;
    {
        const bool branch_taken_0x2ee2c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2C0u;
        // 0x2ee2c4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2c0) {
            ctx->pc = 0x2EE288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee288;
        }
    }
    ctx->pc = 0x2EE2C8u;
label_2ee2c8:
    // 0x2ee2c8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2ee2c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee2cc: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x2ee2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ee2d0: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2EE2D0u;
    {
        const bool branch_taken_0x2ee2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2D0u;
        // 0x2ee2d4: 0x12f1026  xor         $v0, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2d0) {
            ctx->pc = 0x2EE238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee238;
        }
    }
    ctx->pc = 0x2EE2D8u;
label_2ee2d8:
    // 0x2ee2d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee2dc: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x2ee2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2E0u;
        // 0x2ee2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE2E8u;
    // 0x2ee2e8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2ee2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2ee2ec: 0x0  nop
    ctx->pc = 0x2ee2ecu;
    // NOP
    ctx->pc = 0x2ee2f0u;
}

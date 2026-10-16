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

// Function: sub_0025E908
// Address: 0x25e908 - 0x25ea08
void sub_0025E908_0x25e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E908_0x25e908");
#endif

    switch (ctx->pc) {
        case 0x25e948u: goto label_25e948;
        case 0x25e970u: goto label_25e970;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e998u: goto label_25e998;
        default: break;
    }

    ctx->pc = 0x25e908u;

    // 0x25e908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25e910: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x25e914: 0x24930038  addiu       $s3, $a0, 0x38
    ctx->pc = 0x25e914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x25e918: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x25e91c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x25e920: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x25e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x25e924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e928: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x25e92c: 0x8c910038  lw          $s1, 0x38($a0)
    ctx->pc = 0x25e92cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x25e930: 0x1233002c  beq         $s1, $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x25E930u;
    {
        const bool branch_taken_0x25e930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x25E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E930u;
        // 0x25e934: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e930) {
            ctx->pc = 0x25E9E4u;
            goto label_25e9e4;
        }
    }
    ctx->pc = 0x25E938u;
    // 0x25e938: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x25e938u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
    // 0x25e93c: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x25e93cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25e940: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x25e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25e944: 0x0  nop
    ctx->pc = 0x25e944u;
    // NOP
label_25e948:
    // 0x25e948: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25e948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25e94c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e950: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x25E950u;
    {
        const bool branch_taken_0x25e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e950) {
            ctx->pc = 0x25E954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E950u;
            // 0x25e954: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E9DCu;
            goto label_25e9dc;
        }
    }
    ctx->pc = 0x25E958u;
    // 0x25e958: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x25e958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x25e95c: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x25e95cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x25e960: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25E960u;
    {
        const bool branch_taken_0x25e960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E960u;
        // 0x25e964: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e960) {
            ctx->pc = 0x25E9D8u;
            goto label_25e9d8;
        }
    }
    ctx->pc = 0x25E968u;
    // 0x25e968: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x25E968u;
    SET_GPR_U32(ctx, 31, 0x25E970u);
    ctx->pc = 0x25E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E968u;
    // 0x25e96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x25E968u, 0x25E970u)) {
        return;
    }
    ctx->pc = 0x25E970u;
label_25e970:
    // 0x25e970: 0x8e440fc8  lw          $a0, 0xFC8($s2)
    ctx->pc = 0x25e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
    // 0x25e974: 0xc0893dc  jal         func_224F70
    ctx->pc = 0x25E974u;
    SET_GPR_U32(ctx, 31, 0x25E97Cu);
    ctx->pc = 0x25E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E974u;
    // 0x25e978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F70u, 0x25E974u, 0x25E97Cu)) {
        return;
    }
    ctx->pc = 0x25E97Cu;
label_25e97c:
    // 0x25e97c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x25E97Cu;
    {
        const bool branch_taken_0x25e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e97c) {
            ctx->pc = 0x25E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E97Cu;
            // 0x25e980: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E9D4u;
            goto label_25e9d4;
        }
    }
    ctx->pc = 0x25E984u;
    // 0x25e984: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x25e984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x25e988: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x25e988u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25e98c: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25E98Cu;
    {
        const bool branch_taken_0x25e98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e98c) {
            ctx->pc = 0x25E990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E98Cu;
            // 0x25e990: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E9D4u;
            goto label_25e9d4;
        }
    }
    ctx->pc = 0x25E994u;
    // 0x25e994: 0x26a643b0  addiu       $a2, $s5, 0x43B0
    ctx->pc = 0x25e994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 17328));
label_25e998:
    // 0x25e998: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25e99c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25E99Cu;
    {
        const bool branch_taken_0x25e99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E99Cu;
        // 0x25e9a0: 0x8f828644  lw          $v0, -0x79BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e99c) {
            ctx->pc = 0x25E9C4u;
            goto label_25e9c4;
        }
    }
    ctx->pc = 0x25E9A4u;
    // 0x25e9a4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x25e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x25e9a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25e9ac: 0x8f848644  lw          $a0, -0x79BC($gp)
    ctx->pc = 0x25e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
    // 0x25e9b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x25e9b4: 0x8f828644  lw          $v0, -0x79BC($gp)
    ctx->pc = 0x25e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
    // 0x25e9b8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x25e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25e9bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x25e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x25e9c0: 0xaf838644  sw          $v1, -0x79BC($gp)
    ctx->pc = 0x25e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 3));
label_25e9c4:
    // 0x25e9c4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x25e9c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x25e9c8: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x25E9C8u;
    {
        const bool branch_taken_0x25e9c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9C8u;
        // 0x25e9cc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9c8) {
            ctx->pc = 0x25E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e998;
        }
    }
    ctx->pc = 0x25E9D0u;
    // 0x25e9d0: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x25e9d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_25e9d4:
    // 0x25e9d4: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x25e9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_25e9d8:
    // 0x25e9d8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x25e9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e9dc:
    // 0x25e9dc: 0x5633ffda  bnel        $s1, $s3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x25E9DCu;
    {
        const bool branch_taken_0x25e9dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x25e9dc) {
            ctx->pc = 0x25E9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E9DCu;
            // 0x25e9e0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e948;
        }
    }
    ctx->pc = 0x25E9E4u;
label_25e9e4:
    // 0x25e9e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25e9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e9e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25e9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e9ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25e9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e9f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25e9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e9f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25e9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e9f8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25e9f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x25EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA00u;
        // 0x25ea04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA08u;
}

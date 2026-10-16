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

// Function: sub_00299ED0
// Address: 0x299ed0 - 0x299ff0
void sub_00299ED0_0x299ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299ED0_0x299ed0");
#endif

    ctx->pc = 0x299ed0u;

    // 0x299ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299ed4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x299ed4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ed8: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x299ED8u;
    {
        const bool branch_taken_0x299ed8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299ED8u;
        // 0x299edc: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ed8) {
            ctx->pc = 0x299F2Cu;
            goto label_299f2c;
        }
    }
    ctx->pc = 0x299EE0u;
    // 0x299ee0: 0x25620010  addiu       $v0, $t3, 0x10
    ctx->pc = 0x299ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x299ee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x299ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299ee8: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x299ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x299eec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x299eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x299ef0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x299ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x299ef4: 0x2463da40  addiu       $v1, $v1, -0x25C0
    ctx->pc = 0x299ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957632));
    // 0x299ef8: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x299ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x299efc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x299efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299f00: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x299f00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x299f04: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x299f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x299f08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x299f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299f0c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x299f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x299f10: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x299f10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x299f14: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x299f14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x299f18: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x299f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x299f1c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x299f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x299f20: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x299f20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x299f24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x299f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x299f28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x299f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_299f2c:
    // 0x299f2c: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x299f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x299f30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x299f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x299f34: 0x2462d868  addiu       $v0, $v1, -0x2798
    ctx->pc = 0x299f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957160));
    // 0x299f38: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x299f38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x299f3c: 0xad820028  sw          $v0, 0x28($t4)
    ctx->pc = 0x299f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 2));
    // 0x299f40: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x299f40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x299f44: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x299f44u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x6AD870u));
    // 0x299f48: 0x2547d878  addiu       $a3, $t2, -0x2788
    ctx->pc = 0x299f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957176));
    // 0x299f4c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x299f4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AD870u));
    // 0x299f50: 0x1693023  subu        $a2, $t3, $t1
    ctx->pc = 0x299f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x299f54: 0xdc64d868  ld          $a0, -0x2798($v1)
    ctx->pc = 0x299f54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294957160)));
    // 0x299f58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x299f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x299f5c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x299f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x299f60: 0x2583fff8  addiu       $v1, $t4, -0x8
    ctx->pc = 0x299f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x299f64: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x299f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x299f68: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x299f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x299f6c: 0xad9d0028  sw          $sp, 0x28($t4)
    ctx->pc = 0x299f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 29));
    // 0x299f70: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x299f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x299f74: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x299f74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x299f78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x299f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299f7c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x299f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x299f80: 0x3c0e006b  lui         $t6, 0x6B
    ctx->pc = 0x299f80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)107 << 16));
    // 0x299f84: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x299f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299f88: 0x25cdd858  addiu       $t5, $t6, -0x27A8
    ctx->pc = 0x299f88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957144));
    // 0x299f8c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x299f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x299f90: 0xdd44d878  ld          $a0, -0x2788($t2)
    ctx->pc = 0x299f90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 4294957176)));
    // 0x299f94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x299f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x299f98: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x299f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x299f9c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x299f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x299fa0: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x299fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x299fa4: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x299fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x299fa8: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x299fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x299fac: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x299FACu;
    {
        const bool branch_taken_0x299fac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x299FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FACu;
        // 0x299fb0: 0xad8d0028  sw          $t5, 0x28($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fac) {
            ctx->pc = 0x299FE0u;
            goto label_299fe0;
        }
    }
    ctx->pc = 0x299FB4u;
    // 0x299fb4: 0xddc6d858  ld          $a2, -0x27A8($t6)
    ctx->pc = 0x299fb4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 4294957144)));
    // 0x299fb8: 0x2582fff0  addiu       $v0, $t4, -0x10
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x299fbc: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x299fbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x299fc0: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x299fc4: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x299fc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x299fc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x299fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299fcc: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x299fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x299fd0: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x299fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x299fd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299fd8: 0xad850028  sw          $a1, 0x28($t4)
    ctx->pc = 0x299fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 5));
    // 0x299fdc: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x299fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_299fe0:
    // 0x299fe0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x299fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x299FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FE4u;
        // 0x299fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FECu;
    // 0x299fec: 0x0  nop
    ctx->pc = 0x299fecu;
    // NOP
    ctx->pc = 0x299ff0u;
}

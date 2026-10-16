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

// Function: sub_00322948
// Address: 0x322948 - 0x3229f8
void sub_00322948_0x322948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322948_0x322948");
#endif

    switch (ctx->pc) {
        case 0x322988u: goto label_322988;
        default: break;
    }

    ctx->pc = 0x322948u;

    // 0x322948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32294c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x32294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x322950: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x322950u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x322954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322958: 0x8e25754c  lw          $a1, 0x754C($s1)
    ctx->pc = 0x322958u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x68754Cu));
    // 0x32295c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322960: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x322960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x322964: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x322964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x322968: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x322968u;
    {
        const bool branch_taken_0x322968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322968u;
        // 0x32296c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322968) {
            ctx->pc = 0x322990u;
            goto label_322990;
        }
    }
    ctx->pc = 0x322970u;
    // 0x322970: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x322970u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x322974: 0xae20754c  sw          $zero, 0x754C($s1)
    ctx->pc = 0x322974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30028), GPR_U32(ctx, 0));
    // 0x322978: 0x26429ec0  addiu       $v0, $s2, -0x6140
    ctx->pc = 0x322978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942400));
    // 0x32297c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322980: 0xc0ca16c  jal         func_3285B0
    ctx->pc = 0x322980u;
    SET_GPR_U32(ctx, 31, 0x322988u);
    ctx->pc = 0x322984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322980u;
    // 0x322984: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3285B0u, 0x322980u, 0x322988u)) {
        return;
    }
    ctx->pc = 0x322988u;
label_322988:
    // 0x322988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x322988u;
    {
        const bool branch_taken_0x322988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322988u;
        // 0x32298c: 0x8e25754c  lw          $a1, 0x754C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322988) {
            ctx->pc = 0x322994u;
            goto label_322994;
        }
    }
    ctx->pc = 0x322990u;
label_322990:
    // 0x322990: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x322990u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_322994:
    // 0x322994: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x322994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x322998: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x322998u;
    {
        const bool branch_taken_0x322998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x32299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322998u;
        // 0x32299c: 0x26429ec0  addiu       $v0, $s2, -0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322998) {
            ctx->pc = 0x3229D0u;
            goto label_3229d0;
        }
    }
    ctx->pc = 0x3229A0u;
    // 0x3229a0: 0x26449ec0  addiu       $a0, $s2, -0x6140
    ctx->pc = 0x3229a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942400));
    // 0x3229a4: 0xae20754c  sw          $zero, 0x754C($s1)
    ctx->pc = 0x3229a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30028), GPR_U32(ctx, 0));
    // 0x3229a8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3229a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3229ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3229acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3229b0: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3229b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3229b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3229b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3229b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3229bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3229bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3229c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3229c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3229c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3229c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3229c8: 0x80ca16c  j           func_3285B0
    ctx->pc = 0x3229C8u;
    ctx->pc = 0x3229CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3229C8u;
    // 0x3229cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285B0u;
    sub_003285B0_0x3285b0(rdram, ctx, runtime); return;
    ctx->pc = 0x3229D0u;
label_3229d0:
    // 0x3229d0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3229d4: 0xae23754c  sw          $v1, 0x754C($s1)
    ctx->pc = 0x3229d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30028), GPR_U32(ctx, 3));
    // 0x3229d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3229d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3229dc: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3229dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3229e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3229e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3229e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3229e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3229e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3229e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3229ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3229ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3229f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3229F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3229F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229F0u;
        // 0x3229f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3229F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229F8u;
}

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

// Function: sub_001F4A90
// Address: 0x1f4a90 - 0x1f4b28
void sub_001F4A90_0x1f4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4A90_0x1f4a90");
#endif

    switch (ctx->pc) {
        case 0x1f4af4u: goto label_1f4af4;
        case 0x1f4b08u: goto label_1f4b08;
        default: break;
    }

    ctx->pc = 0x1f4a90u;

    // 0x1f4a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4a94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4a98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f4a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f4a9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f4aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4aa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f4aac: 0x24632820  addiu       $v1, $v1, 0x2820
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10272));
    // 0x1f4ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4ab4: 0x24422808  addiu       $v0, $v0, 0x2808
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x1f4ab8: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x1f4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x1f4abc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f4abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ac0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f4ac4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1f4ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ac8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f4acc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f4accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ad0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1f4ad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4ad8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f4adc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1f4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1f4ae0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1f4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1f4ae4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x1f4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x1f4ae8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1f4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1f4aec: 0xc065c40  jal         func_197100
    ctx->pc = 0x1F4AECu;
    SET_GPR_U32(ctx, 31, 0x1F4AF4u);
    ctx->pc = 0x1F4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AECu;
    // 0x1f4af0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1F4AECu, 0x1F4AF4u)) {
        return;
    }
    ctx->pc = 0x1F4AF4u;
label_1f4af4:
    // 0x1f4af4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1f4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1f4af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4afc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f4afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b00: 0xc07d492  jal         func_1F5248
    ctx->pc = 0x1F4B00u;
    SET_GPR_U32(ctx, 31, 0x1F4B08u);
    ctx->pc = 0x1F4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B00u;
    // 0x1f4b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5248u, 0x1F4B00u, 0x1F4B08u)) {
        return;
    }
    ctx->pc = 0x1F4B08u;
label_1f4b08:
    // 0x1f4b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f4b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f4b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4b14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f4b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B1Cu;
        // 0x1f4b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4B24u;
    // 0x1f4b24: 0x0  nop
    ctx->pc = 0x1f4b24u;
    // NOP
    ctx->pc = 0x1f4b28u;
}

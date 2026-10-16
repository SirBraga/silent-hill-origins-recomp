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

// Function: sub_001FE238
// Address: 0x1fe238 - 0x1fe2a8
void sub_001FE238_0x1fe238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE238_0x1fe238");
#endif

    switch (ctx->pc) {
        case 0x1fe268u: goto label_1fe268;
        case 0x1fe270u: goto label_1fe270;
        default: break;
    }

    ctx->pc = 0x1fe238u;

label_1fe238:
    // 0x1fe238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe23c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe240: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe244: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe248: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe24c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe250: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE250u;
    {
        const bool branch_taken_0x1fe250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE250u;
        // 0x1fe254: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe250) {
            ctx->pc = 0x1FE28Cu;
            goto label_1fe28c;
        }
    }
    ctx->pc = 0x1FE258u;
    // 0x1fe258: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1fe258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1fe25c: 0x24518290  addiu       $s1, $v0, -0x7D70
    ctx->pc = 0x1fe25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1fe260: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe264: 0x0  nop
    ctx->pc = 0x1fe264u;
    // NOP
label_1fe268:
    // 0x1fe268: 0xc07f88e  jal         func_1FE238
    ctx->pc = 0x1FE268u;
    SET_GPR_U32(ctx, 31, 0x1FE270u);
    ctx->pc = 0x1FE26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE268u;
    // 0x1fe26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE238u;
    goto label_1fe238;
    ctx->pc = 0x1FE270u;
label_1fe270:
    // 0x1fe270: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe274: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fe274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fe278: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fe278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fe27c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1fe27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1fe280: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1fe280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe284: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE284u;
    {
        const bool branch_taken_0x1fe284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe284) {
            ctx->pc = 0x1FE288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE284u;
            // 0x1fe288: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe268;
        }
    }
    ctx->pc = 0x1FE28Cu;
label_1fe28c:
    // 0x1fe28c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe290: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe294: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE29Cu;
        // 0x1fe2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2A4u;
    // 0x1fe2a4: 0x0  nop
    ctx->pc = 0x1fe2a4u;
    // NOP
    ctx->pc = 0x1fe2a8u;
}

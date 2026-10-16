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

// Function: sub_002812F8
// Address: 0x2812f8 - 0x281398
void sub_002812F8_0x2812f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812F8_0x2812f8");
#endif

    switch (ctx->pc) {
        case 0x281348u: goto label_281348;
        case 0x281358u: goto label_281358;
        default: break;
    }

    ctx->pc = 0x2812f8u;

    // 0x2812f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2812f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2812fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x281300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x281300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x281304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x281304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x281308: 0x2470e690  addiu       $s0, $v1, -0x1970
    ctx->pc = 0x281308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960784));
    // 0x28130c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x281310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281318: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x281318u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E694u));
    // 0x28131c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28131Cu;
    {
        const bool branch_taken_0x28131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28131Cu;
        // 0x281320: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28131c) {
            ctx->pc = 0x281368u;
            goto label_281368;
        }
    }
    ctx->pc = 0x281324u;
    // 0x281324: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x281324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x281328: 0x8f858824  lw          $a1, -0x77DC($gp)
    ctx->pc = 0x281328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x28132c: 0x8f878828  lw          $a3, -0x77D8($gp)
    ctx->pc = 0x28132cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x281330: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x281330u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x281334: 0x25085968  addiu       $t0, $t0, 0x5968
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22888));
    // 0x281338: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x281338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x28133c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281340: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x281340u;
    SET_GPR_U32(ctx, 31, 0x281348u);
    ctx->pc = 0x281344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281340u;
    // 0x281344: 0x35290120  ori         $t1, $t1, 0x120 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x281340u, 0x281348u)) {
        return;
    }
    ctx->pc = 0x281348u;
label_281348:
    // 0x281348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281348u;
    {
        const bool branch_taken_0x281348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281348u;
        // 0x28134c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281348) {
            ctx->pc = 0x281360u;
            goto label_281360;
        }
    }
    ctx->pc = 0x281350u;
    // 0x281350: 0xc0a060c  jal         func_281830
    ctx->pc = 0x281350u;
    SET_GPR_U32(ctx, 31, 0x281358u);
    ctx->pc = 0x281830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281830u, 0x281350u, 0x281358u)) {
        return;
    }
    ctx->pc = 0x281358u;
label_281358:
    // 0x281358: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281358u;
    {
        const bool branch_taken_0x281358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281358u;
        // 0x28135c: 0x2644e690  addiu       $a0, $s2, -0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281358) {
            ctx->pc = 0x28136Cu;
            goto label_28136c;
        }
    }
    ctx->pc = 0x281360u;
label_281360:
    // 0x281360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281360u;
    {
        const bool branch_taken_0x281360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281360u;
        // 0x281364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281360) {
            ctx->pc = 0x28137Cu;
            goto label_28137c;
        }
    }
    ctx->pc = 0x281368u;
label_281368:
    // 0x281368: 0x2644e690  addiu       $a0, $s2, -0x1970
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960784));
label_28136c:
    // 0x28136c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28136cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281370: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x281374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x281374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x281378: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x281378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_28137c:
    // 0x28137c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28137cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x281380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281384: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x281384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28138c: 0x3e00008  jr          $ra
    ctx->pc = 0x28138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28138Cu;
        // 0x281390: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28138Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281394u;
    // 0x281394: 0x0  nop
    ctx->pc = 0x281394u;
    // NOP
    ctx->pc = 0x281398u;
}

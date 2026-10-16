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

// Function: sub_001C12B8
// Address: 0x1c12b8 - 0x1c1348
void sub_001C12B8_0x1c12b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C12B8_0x1c12b8");
#endif

    switch (ctx->pc) {
        case 0x1c12e0u: goto label_1c12e0;
        case 0x1c12f4u: goto label_1c12f4;
        case 0x1c1304u: goto label_1c1304;
        case 0x1c1318u: goto label_1c1318;
        case 0x1c132cu: goto label_1c132c;
        default: break;
    }

    ctx->pc = 0x1c12b8u;

    // 0x1c12b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c12b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c12bc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c12bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c12c0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1c12c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1c12c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c12c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12cc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1c12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1c12d0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1c12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1c12d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c12d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C12D8u;
    SET_GPR_U32(ctx, 31, 0x1C12E0u);
    ctx->pc = 0x1C12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12D8u;
    // 0x1c12dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C12D8u, 0x1C12E0u)) {
        return;
    }
    ctx->pc = 0x1C12E0u;
label_1c12e0:
    // 0x1c12e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c12e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c12e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e8: 0x24a5dbe8  addiu       $a1, $a1, -0x2418
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958056));
    // 0x1c12ec: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1C12ECu;
    SET_GPR_U32(ctx, 31, 0x1C12F4u);
    ctx->pc = 0x1C12F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12ECu;
    // 0x1c12f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1C12ECu, 0x1C12F4u)) {
        return;
    }
    ctx->pc = 0x1C12F4u;
label_1c12f4:
    // 0x1c12f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c12f8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c12f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c12fc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C12FCu;
    SET_GPR_U32(ctx, 31, 0x1C1304u);
    ctx->pc = 0x1C1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12FCu;
    // 0x1c1300: 0x8c509428  lw          $s0, -0x6BD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C12FCu, 0x1C1304u)) {
        return;
    }
    ctx->pc = 0x1C1304u;
label_1c1304:
    // 0x1c1304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1304u;
    {
        const bool branch_taken_0x1c1304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1304u;
        // 0x1c1308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1304) {
            ctx->pc = 0x1C132Cu;
            goto label_1c132c;
        }
    }
    ctx->pc = 0x1C130Cu;
    // 0x1c130c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1310: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C1310u;
    SET_GPR_U32(ctx, 31, 0x1C1318u);
    ctx->pc = 0x1C1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1310u;
    // 0x1c1314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C1310u, 0x1C1318u)) {
        return;
    }
    ctx->pc = 0x1C1318u;
label_1c1318:
    // 0x1c1318: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1318u;
    {
        const bool branch_taken_0x1c1318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1318u;
        // 0x1c131c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1318) {
            ctx->pc = 0x1C132Cu;
            goto label_1c132c;
        }
    }
    ctx->pc = 0x1C1320u;
    // 0x1c1320: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c1320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1324: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1C1324u;
    SET_GPR_U32(ctx, 31, 0x1C132Cu);
    ctx->pc = 0x1C1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1324u;
    // 0x1c1328: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C1324u, 0x1C132Cu)) {
        return;
    }
    ctx->pc = 0x1C132Cu;
label_1c132c:
    // 0x1c132c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1330: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1c1330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c1334: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1c1334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1338: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c1338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c133c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C133Cu;
        // 0x1c1340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1344u;
    // 0x1c1344: 0x0  nop
    ctx->pc = 0x1c1344u;
    // NOP
    ctx->pc = 0x1c1348u;
}

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

// Function: sub_002052A8
// Address: 0x2052a8 - 0x2053e8
void sub_002052A8_0x2052a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002052A8_0x2052a8");
#endif

    switch (ctx->pc) {
        case 0x2052dcu: goto label_2052dc;
        case 0x2052f0u: goto label_2052f0;
        case 0x205304u: goto label_205304;
        case 0x20531cu: goto label_20531c;
        case 0x205334u: goto label_205334;
        case 0x205344u: goto label_205344;
        case 0x205354u: goto label_205354;
        case 0x205368u: goto label_205368;
        case 0x20539cu: goto label_20539c;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053acu: goto label_2053ac;
        case 0x2053c0u: goto label_2053c0;
        default: break;
    }

    ctx->pc = 0x2052a8u;

    // 0x2052a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2052ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2052acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2052b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2052b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2052b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2052b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2052b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2052bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2052bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2052c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2052c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2052c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2052c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2052cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2052ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2052d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2052d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052d4: 0xc081444  jal         func_205110
    ctx->pc = 0x2052D4u;
    SET_GPR_U32(ctx, 31, 0x2052DCu);
    ctx->pc = 0x2052D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052D4u;
    // 0x2052d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x2052D4u, 0x2052DCu)) {
        return;
    }
    ctx->pc = 0x2052DCu;
label_2052dc:
    // 0x2052dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2052dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052e0: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2052E0u;
    {
        const bool branch_taken_0x2052e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052E0u;
        // 0x2052e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052e0) {
            ctx->pc = 0x2053C4u;
            goto label_2053c4;
        }
    }
    ctx->pc = 0x2052E8u;
    // 0x2052e8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x2052E8u;
    SET_GPR_U32(ctx, 31, 0x2052F0u);
    ctx->pc = 0x2052ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052E8u;
    // 0x2052ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x2052E8u, 0x2052F0u)) {
        return;
    }
    ctx->pc = 0x2052F0u;
label_2052f0:
    // 0x2052f0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2052f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2052f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2052f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052f8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2052f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052fc: 0xc0c5cb6  jal         func_3172D8
    ctx->pc = 0x2052FCu;
    SET_GPR_U32(ctx, 31, 0x205304u);
    ctx->pc = 0x205300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052FCu;
    // 0x205300: 0xac620294  sw          $v0, 0x294($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3172D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3172D8u, 0x2052FCu, 0x205304u)) {
        return;
    }
    ctx->pc = 0x205304u;
label_205304:
    // 0x205304: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x205304u;
    {
        const bool branch_taken_0x205304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x205304) {
            ctx->pc = 0x205308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205304u;
            // 0x205308: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x20530Cu;
label_20530c:
    // 0x20530c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x205310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205314: 0xc07fe60  jal         func_1FF980
    ctx->pc = 0x205314u;
    SET_GPR_U32(ctx, 31, 0x20531Cu);
    ctx->pc = 0x205318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205314u;
    // 0x205318: 0xae130290  sw          $s3, 0x290($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF980u, 0x205314u, 0x20531Cu)) {
        return;
    }
    ctx->pc = 0x20531Cu;
label_20531c:
    // 0x20531c: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x20531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x205320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205324: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205324u;
    {
        const bool branch_taken_0x205324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205324u;
        // 0x205328: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205324) {
            ctx->pc = 0x205344u;
            goto label_205344;
        }
    }
    ctx->pc = 0x20532Cu;
    // 0x20532c: 0xc08121a  jal         func_204868
    ctx->pc = 0x20532Cu;
    SET_GPR_U32(ctx, 31, 0x205334u);
    ctx->pc = 0x205330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20532Cu;
    // 0x205330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204868u, 0x20532Cu, 0x205334u)) {
        return;
    }
    ctx->pc = 0x205334u;
label_205334:
    // 0x205334: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x205334u;
    {
        const bool branch_taken_0x205334 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x205334) {
            ctx->pc = 0x205344u;
            goto label_205344;
        }
    }
    ctx->pc = 0x20533Cu;
    // 0x20533c: 0xc08125c  jal         func_204970
    ctx->pc = 0x20533Cu;
    SET_GPR_U32(ctx, 31, 0x205344u);
    ctx->pc = 0x205340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20533Cu;
    // 0x205340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204970u, 0x20533Cu, 0x205344u)) {
        return;
    }
    ctx->pc = 0x205344u;
label_205344:
    // 0x205344: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x205344u;
    {
        const bool branch_taken_0x205344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x205344) {
            ctx->pc = 0x20539Cu;
            goto label_20539c;
        }
    }
    ctx->pc = 0x20534Cu;
    // 0x20534c: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x20534Cu;
    SET_GPR_U32(ctx, 31, 0x205354u);
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x20534Cu, 0x205354u)) {
        return;
    }
    ctx->pc = 0x205354u;
label_205354:
    // 0x205354: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x205354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x205358: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x205358u;
    {
        const bool branch_taken_0x205358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205358u;
        // 0x20535c: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205358) {
            ctx->pc = 0x205388u;
            goto label_205388;
        }
    }
    ctx->pc = 0x205360u;
    // 0x205360: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205364: 0x0  nop
    ctx->pc = 0x205364u;
    // NOP
label_205368:
    // 0x205368: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x20536c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x205370: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205370u;
    {
        const bool branch_taken_0x205370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x205370) {
            ctx->pc = 0x205374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205370u;
            // 0x205374: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205380u;
            goto label_205380;
        }
    }
    ctx->pc = 0x205378u;
    // 0x205378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205378u;
    {
        const bool branch_taken_0x205378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205378u;
        // 0x20537c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205378) {
            ctx->pc = 0x20538Cu;
            goto label_20538c;
        }
    }
    ctx->pc = 0x205380u;
label_205380:
    // 0x205380: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205380u;
    {
        const bool branch_taken_0x205380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205380) {
            ctx->pc = 0x205384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205380u;
            // 0x205384: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205368;
        }
    }
    ctx->pc = 0x205388u;
label_205388:
    // 0x205388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20538c:
    // 0x20538c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20538Cu;
    {
        const bool branch_taken_0x20538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20538Cu;
        // 0x205390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20538c) {
            ctx->pc = 0x20539Cu;
            goto label_20539c;
        }
    }
    ctx->pc = 0x205394u;
    // 0x205394: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x205394u;
    SET_GPR_U32(ctx, 31, 0x20539Cu);
    ctx->pc = 0x205398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205394u;
    // 0x205398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x205394u, 0x20539Cu)) {
        return;
    }
    ctx->pc = 0x20539Cu;
label_20539c:
    // 0x20539c: 0xc067c34  jal         func_19F0D0
    ctx->pc = 0x20539Cu;
    SET_GPR_U32(ctx, 31, 0x2053A4u);
    ctx->pc = 0x19F0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0D0u, 0x20539Cu, 0x2053A4u)) {
        return;
    }
    ctx->pc = 0x2053A4u;
label_2053a4:
    // 0x2053a4: 0xc081536  jal         func_2054D8
    ctx->pc = 0x2053A4u;
    SET_GPR_U32(ctx, 31, 0x2053ACu);
    ctx->pc = 0x2054D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2054D8u, 0x2053A4u, 0x2053ACu)) {
        return;
    }
    ctx->pc = 0x2053ACu;
label_2053ac:
    // 0x2053ac: 0x8e840294  lw          $a0, 0x294($s4)
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 660)));
    // 0x2053b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2053B0u;
    {
        const bool branch_taken_0x2053b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2053b0) {
            ctx->pc = 0x2053B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2053B0u;
            // 0x2053b4: 0xae800294  sw          $zero, 0x294($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2053C4u;
            goto label_2053c4;
        }
    }
    ctx->pc = 0x2053B8u;
    // 0x2053b8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x2053B8u;
    SET_GPR_U32(ctx, 31, 0x2053C0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x2053B8u, 0x2053C0u)) {
        return;
    }
    ctx->pc = 0x2053C0u;
label_2053c0:
    // 0x2053c0: 0xae800294  sw          $zero, 0x294($s4)
    ctx->pc = 0x2053c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 0));
label_2053c4:
    // 0x2053c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2053c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2053cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2053ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2053d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2053d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2053d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2053d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2053d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2053d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2053dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2053dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2053e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2053E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2053E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E0u;
        // 0x2053e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2053E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2053E8u;
}

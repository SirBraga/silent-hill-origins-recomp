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

// Function: sub_001750A8
// Address: 0x1750a8 - 0x175228
void sub_001750A8_0x1750a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001750A8_0x1750a8");
#endif

    switch (ctx->pc) {
        case 0x1750c4u: goto label_1750c4;
        case 0x1750d8u: goto label_1750d8;
        case 0x1750f0u: goto label_1750f0;
        case 0x175124u: goto label_175124;
        case 0x17513cu: goto label_17513c;
        case 0x175154u: goto label_175154;
        case 0x17516cu: goto label_17516c;
        case 0x175184u: goto label_175184;
        case 0x17519cu: goto label_17519c;
        case 0x1751b4u: goto label_1751b4;
        case 0x1751ccu: goto label_1751cc;
        case 0x1751e4u: goto label_1751e4;
        case 0x175204u: goto label_175204;
        default: break;
    }

    ctx->pc = 0x1750a8u;

    // 0x1750a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1750ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1750acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1750b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1750b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1750b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1750b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1750b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1750bc: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x1750BCu;
    SET_GPR_U32(ctx, 31, 0x1750C4u);
    ctx->pc = 0x1750C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750BCu;
    // 0x1750c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x1750BCu, 0x1750C4u)) {
        return;
    }
    ctx->pc = 0x1750C4u;
label_1750c4:
    // 0x1750c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1750c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1750c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1750c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750cc: 0x8c46f800  lw          $a2, -0x800($v0)
    ctx->pc = 0x1750ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF800u));
    // 0x1750d0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1750D0u;
    SET_GPR_U32(ctx, 31, 0x1750D8u);
    ctx->pc = 0x1750D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750D0u;
    // 0x1750d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1750D0u, 0x1750D8u)) {
        return;
    }
    ctx->pc = 0x1750D8u;
label_1750d8:
    // 0x1750d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1750d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1750e0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1750E0u;
    {
        const bool branch_taken_0x1750e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750E0u;
        // 0x1750e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750e0) {
            ctx->pc = 0x175218u;
            goto label_175218;
        }
    }
    ctx->pc = 0x1750E8u;
    // 0x1750e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1750e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1750f0:
    // 0x1750f0: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x1750f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1750f4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1750F4u;
    {
        const bool branch_taken_0x1750f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750F4u;
        // 0x1750f8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750f4) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x1750FCu;
    // 0x1750fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1750fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x175100: 0x24426030  addiu       $v0, $v0, 0x6030
    ctx->pc = 0x175100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24624));
    // 0x175104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17510c: 0x800008  jr          $a0
    ctx->pc = 0x17510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175114u: goto label_175114;
            case 0x17512Cu: goto label_17512c;
            case 0x175144u: goto label_175144;
            case 0x17515Cu: goto label_17515c;
            case 0x175174u: goto label_175174;
            case 0x17518Cu: goto label_17518c;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751BCu: goto label_1751bc;
            case 0x1751D4u: goto label_1751d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17510Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175114u;
label_175114:
    // 0x175114: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17511c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17511Cu;
    SET_GPR_U32(ctx, 31, 0x175124u);
    ctx->pc = 0x175120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17511Cu;
    // 0x175120: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17511Cu, 0x175124u)) {
        return;
    }
    ctx->pc = 0x175124u;
label_175124:
    // 0x175124: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x175124u;
    {
        const bool branch_taken_0x175124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175124u;
        // 0x175128: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175124) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x17512Cu;
label_17512c:
    // 0x17512c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175134: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175134u;
    SET_GPR_U32(ctx, 31, 0x17513Cu);
    ctx->pc = 0x175138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175134u;
    // 0x175138: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175134u, 0x17513Cu)) {
        return;
    }
    ctx->pc = 0x17513Cu;
label_17513c:
    // 0x17513c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17513Cu;
    {
        const bool branch_taken_0x17513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17513Cu;
        // 0x175140: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17513c) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x175144u;
label_175144:
    // 0x175144: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17514c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17514Cu;
    SET_GPR_U32(ctx, 31, 0x175154u);
    ctx->pc = 0x175150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17514Cu;
    // 0x175150: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17514Cu, 0x175154u)) {
        return;
    }
    ctx->pc = 0x175154u;
label_175154:
    // 0x175154: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x175154u;
    {
        const bool branch_taken_0x175154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175154u;
        // 0x175158: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175154) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x17515Cu;
label_17515c:
    // 0x17515c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175164: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175164u;
    SET_GPR_U32(ctx, 31, 0x17516Cu);
    ctx->pc = 0x175168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175164u;
    // 0x175168: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175164u, 0x17516Cu)) {
        return;
    }
    ctx->pc = 0x17516Cu;
label_17516c:
    // 0x17516c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17516Cu;
    {
        const bool branch_taken_0x17516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17516Cu;
        // 0x175170: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17516c) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x175174u;
label_175174:
    // 0x175174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17517c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17517Cu;
    SET_GPR_U32(ctx, 31, 0x175184u);
    ctx->pc = 0x175180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17517Cu;
    // 0x175180: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17517Cu, 0x175184u)) {
        return;
    }
    ctx->pc = 0x175184u;
label_175184:
    // 0x175184: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x175184u;
    {
        const bool branch_taken_0x175184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175184u;
        // 0x175188: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175184) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x17518Cu;
label_17518c:
    // 0x17518c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175194: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175194u;
    SET_GPR_U32(ctx, 31, 0x17519Cu);
    ctx->pc = 0x175198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175194u;
    // 0x175198: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175194u, 0x17519Cu)) {
        return;
    }
    ctx->pc = 0x17519Cu;
label_17519c:
    // 0x17519c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17519Cu;
    {
        const bool branch_taken_0x17519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17519Cu;
        // 0x1751a0: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17519c) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x1751A4u;
label_1751a4:
    // 0x1751a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751ac: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1751ACu;
    SET_GPR_U32(ctx, 31, 0x1751B4u);
    ctx->pc = 0x1751B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751ACu;
    // 0x1751b0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1751ACu, 0x1751B4u)) {
        return;
    }
    ctx->pc = 0x1751B4u;
label_1751b4:
    // 0x1751b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1751B4u;
    {
        const bool branch_taken_0x1751b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751B4u;
        // 0x1751b8: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751b4) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x1751BCu;
label_1751bc:
    // 0x1751bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1751bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751c4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1751C4u;
    SET_GPR_U32(ctx, 31, 0x1751CCu);
    ctx->pc = 0x1751C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751C4u;
    // 0x1751c8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1751C4u, 0x1751CCu)) {
        return;
    }
    ctx->pc = 0x1751CCu;
label_1751cc:
    // 0x1751cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1751CCu;
    {
        const bool branch_taken_0x1751cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751CCu;
        // 0x1751d0: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751cc) {
            ctx->pc = 0x1751E8u;
            goto label_1751e8;
        }
    }
    ctx->pc = 0x1751D4u;
label_1751d4:
    // 0x1751d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1751d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751dc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1751DCu;
    SET_GPR_U32(ctx, 31, 0x1751E4u);
    ctx->pc = 0x1751E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751DCu;
    // 0x1751e0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1751DCu, 0x1751E4u)) {
        return;
    }
    ctx->pc = 0x1751E4u;
label_1751e4:
    // 0x1751e4: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1751e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1751e8:
    // 0x1751e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1751ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1751f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1751fc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1751FCu;
    SET_GPR_U32(ctx, 31, 0x175204u);
    ctx->pc = 0x175200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751FCu;
    // 0x175200: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1751FCu, 0x175204u)) {
        return;
    }
    ctx->pc = 0x175204u;
label_175204:
    // 0x175204: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175208: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17520c: 0x5460ffb8  bnel        $v1, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x17520Cu;
    {
        const bool branch_taken_0x17520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17520c) {
            ctx->pc = 0x175210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17520Cu;
            // 0x175210: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1750F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1750f0;
        }
    }
    ctx->pc = 0x175214u;
    // 0x175214: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175218:
    // 0x175218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17521c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175220: 0x3e00008  jr          $ra
    ctx->pc = 0x175220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175220u;
        // 0x175224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175228u;
}

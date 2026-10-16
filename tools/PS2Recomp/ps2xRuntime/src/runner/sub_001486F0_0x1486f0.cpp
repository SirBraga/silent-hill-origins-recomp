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

// Function: sub_001486F0
// Address: 0x1486f0 - 0x1488b0
void sub_001486F0_0x1486f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001486F0_0x1486f0");
#endif

    switch (ctx->pc) {
        case 0x14870cu: goto label_14870c;
        case 0x148720u: goto label_148720;
        case 0x148738u: goto label_148738;
        case 0x148798u: goto label_148798;
        case 0x1487ccu: goto label_1487cc;
        case 0x14888cu: goto label_14888c;
        default: break;
    }

    ctx->pc = 0x1486f0u;

    // 0x1486f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1486f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1486f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1486f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1486f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1486f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1486fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148704: 0xc051e1e  jal         func_147878
    ctx->pc = 0x148704u;
    SET_GPR_U32(ctx, 31, 0x14870Cu);
    ctx->pc = 0x148708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148704u;
    // 0x148708: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147878u, 0x148704u, 0x14870Cu)) {
        return;
    }
    ctx->pc = 0x14870Cu;
label_14870c:
    // 0x14870c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x148710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148714: 0x8c46ee78  lw          $a2, -0x1188($v0)
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE78u));
    // 0x148718: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x148718u;
    SET_GPR_U32(ctx, 31, 0x148720u);
    ctx->pc = 0x14871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148718u;
    // 0x14871c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x148718u, 0x148720u)) {
        return;
    }
    ctx->pc = 0x148720u;
label_148720:
    // 0x148720: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x148720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148728: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x148728u;
    {
        const bool branch_taken_0x148728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148728u;
        // 0x14872c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148728) {
            ctx->pc = 0x1488A0u;
            goto label_1488a0;
        }
    }
    ctx->pc = 0x148730u;
    // 0x148730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148734: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_148738:
    // 0x148738: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x148738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x14873c: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x14873Cu;
    {
        const bool branch_taken_0x14873c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14873Cu;
        // 0x148740: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14873c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148744u;
    // 0x148744: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x148744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x148748: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x148748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x14874c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148754: 0x800008  jr          $a0
    ctx->pc = 0x148754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14875Cu: goto label_14875c;
            case 0x148770u: goto label_148770;
            case 0x148780u: goto label_148780;
            case 0x1487A0u: goto label_1487a0;
            case 0x1487B4u: goto label_1487b4;
            case 0x1487D4u: goto label_1487d4;
            case 0x1487F4u: goto label_1487f4;
            case 0x148814u: goto label_148814;
            case 0x148834u: goto label_148834;
            case 0x148844u: goto label_148844;
            case 0x148854u: goto label_148854;
            case 0x148864u: goto label_148864;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14875Cu;
label_14875c:
    // 0x14875c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148760: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x148764: 0x24c615d0  addiu       $a2, $a2, 0x15D0
    ctx->pc = 0x148764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5584));
    // 0x148768: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x148768u;
    {
        const bool branch_taken_0x148768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148768u;
        // 0x14876c: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148768) {
            ctx->pc = 0x1487C4u;
            goto label_1487c4;
        }
    }
    ctx->pc = 0x148770u;
label_148770:
    // 0x148770: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x148770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148774: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x148778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x148778u;
    {
        const bool branch_taken_0x148778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148778u;
        // 0x14877c: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148778) {
            ctx->pc = 0x14878Cu;
            goto label_14878c;
        }
    }
    ctx->pc = 0x148780u;
label_148780:
    // 0x148780: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x148780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148784: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x148788: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_14878c:
    // 0x14878c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14878cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148790: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 31, 0x148798u);
    ctx->pc = 0x148794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148790u;
    // 0x148794: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x148790u, 0x148798u)) {
        return;
    }
    ctx->pc = 0x148798u;
label_148798:
    // 0x148798: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x148798u;
    {
        const bool branch_taken_0x148798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148798u;
        // 0x14879c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148798) {
            ctx->pc = 0x148874u;
            goto label_148874;
        }
    }
    ctx->pc = 0x1487A0u;
label_1487a0:
    // 0x1487a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1487a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1487a4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1487a8: 0x24c615e0  addiu       $a2, $a2, 0x15E0
    ctx->pc = 0x1487a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5600));
    // 0x1487ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1487ACu;
    {
        const bool branch_taken_0x1487ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487ACu;
        // 0x1487b0: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487ac) {
            ctx->pc = 0x1487C4u;
            goto label_1487c4;
        }
    }
    ctx->pc = 0x1487B4u;
label_1487b4:
    // 0x1487b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1487b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1487b8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1487b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1487bc: 0x24c615e0  addiu       $a2, $a2, 0x15E0
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5600));
    // 0x1487c0: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1487c4:
    // 0x1487c4: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1487C4u;
    SET_GPR_U32(ctx, 31, 0x1487CCu);
    ctx->pc = 0x1487C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487C4u;
    // 0x1487c8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1487C4u, 0x1487CCu)) {
        return;
    }
    ctx->pc = 0x1487CCu;
label_1487cc:
    // 0x1487cc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1487CCu;
    {
        const bool branch_taken_0x1487cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487CCu;
        // 0x1487d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487cc) {
            ctx->pc = 0x148874u;
            goto label_148874;
        }
    }
    ctx->pc = 0x1487D4u;
label_1487d4:
    // 0x1487d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1487d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1487d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1487d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1487dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1487DCu;
    {
        const bool branch_taken_0x1487dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487DCu;
        // 0x1487e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487dc) {
            ctx->pc = 0x1487ECu;
            goto label_1487ec;
        }
    }
    ctx->pc = 0x1487E4u;
    // 0x1487e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1487E4u;
    {
        const bool branch_taken_0x1487e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487E4u;
        // 0x1487e8: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487e4) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x1487ECu;
label_1487ec:
    // 0x1487ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1487ECu;
    {
        const bool branch_taken_0x1487ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487ECu;
        // 0x1487f0: 0xae200108  sw          $zero, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487ec) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x1487F4u;
label_1487f4:
    // 0x1487f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1487f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1487f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1487fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1487FCu;
    {
        const bool branch_taken_0x1487fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487FCu;
        // 0x148800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487fc) {
            ctx->pc = 0x14880Cu;
            goto label_14880c;
        }
    }
    ctx->pc = 0x148804u;
    // 0x148804: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x148804u;
    {
        const bool branch_taken_0x148804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148804u;
        // 0x148808: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148804) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x14880Cu;
label_14880c:
    // 0x14880c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14880Cu;
    {
        const bool branch_taken_0x14880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14880Cu;
        // 0x148810: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14880c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148814u;
label_148814:
    // 0x148814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148818: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x148818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14881c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14881Cu;
    {
        const bool branch_taken_0x14881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14881Cu;
        // 0x148820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14881c) {
            ctx->pc = 0x14882Cu;
            goto label_14882c;
        }
    }
    ctx->pc = 0x148824u;
    // 0x148824: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x148824u;
    {
        const bool branch_taken_0x148824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148824u;
        // 0x148828: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148824) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x14882Cu;
label_14882c:
    // 0x14882c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14882Cu;
    {
        const bool branch_taken_0x14882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14882Cu;
        // 0x148830: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14882c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148834u;
label_148834:
    // 0x148834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148838: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14883c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14883Cu;
    {
        const bool branch_taken_0x14883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14883Cu;
        // 0x148840: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14883c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148844u;
label_148844:
    // 0x148844: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148848: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14884c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14884Cu;
    {
        const bool branch_taken_0x14884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14884Cu;
        // 0x148850: 0xe6200118  swc1        $f0, 0x118($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14884c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148854u;
label_148854:
    // 0x148854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148858: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14885c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14885Cu;
    {
        const bool branch_taken_0x14885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14885Cu;
        // 0x148860: 0xe620011c  swc1        $f0, 0x11C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14885c) {
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148864u;
label_148864:
    // 0x148864: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148868: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14886c: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x14886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
label_148870:
    // 0x148870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_148874:
    // 0x148874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14887c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148880: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148884: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x148884u;
    SET_GPR_U32(ctx, 31, 0x14888Cu);
    ctx->pc = 0x148888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148884u;
    // 0x148888: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x148884u, 0x14888Cu)) {
        return;
    }
    ctx->pc = 0x14888Cu;
label_14888c:
    // 0x14888c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148894: 0x5460ffa8  bnel        $v1, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x148894u;
    {
        const bool branch_taken_0x148894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148894) {
            ctx->pc = 0x148898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148894u;
            // 0x148898: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148738;
        }
    }
    ctx->pc = 0x14889Cu;
    // 0x14889c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14889cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1488a0:
    // 0x1488a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1488a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1488a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1488a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1488a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1488A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488A8u;
        // 0x1488ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1488B0u;
}

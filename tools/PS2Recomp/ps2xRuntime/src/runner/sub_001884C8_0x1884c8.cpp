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

// Function: sub_001884C8
// Address: 0x1884c8 - 0x1885f8
void sub_001884C8_0x1884c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001884C8_0x1884c8");
#endif

    switch (ctx->pc) {
        case 0x1884f0u: goto label_1884f0;
        case 0x188570u: goto label_188570;
        case 0x188580u: goto label_188580;
        case 0x1885c0u: goto label_1885c0;
        default: break;
    }

    ctx->pc = 0x1884c8u;

    // 0x1884c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1884c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1884cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1884ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1884d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1884d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1884d4: 0x24040134  addiu       $a0, $zero, 0x134
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x1884d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1884d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1884dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1884dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1884e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1884e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1884e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1884e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1884e8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1884E8u;
    SET_GPR_U32(ctx, 31, 0x1884F0u);
    ctx->pc = 0x1884ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884E8u;
    // 0x1884ec: 0x24528ac0  addiu       $s2, $v0, -0x7540 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1884E8u, 0x1884F0u)) {
        return;
    }
    ctx->pc = 0x1884F0u;
label_1884f0:
    // 0x1884f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1884f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1884f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1884f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1884f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1884fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1884fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x188500: 0x26300110  addiu       $s0, $s1, 0x110
    ctx->pc = 0x188500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x188504: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x188504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x188508: 0x24428aa8  addiu       $v0, $v0, -0x7558
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937256));
    // 0x18850c: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x18850cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x188510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188514: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x188514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x188518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18851c: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x18851cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x188520: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x188520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x188524: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x188524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x188528: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x188528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x18852c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x18852cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x188530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188538: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x188538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18853c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18853cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x188540: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x188540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188544: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
    // 0x188548: 0x34211893  ori         $at, $at, 0x1893
    ctx->pc = 0x188548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6291);
    // 0x18854c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18854cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x188550: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x188550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x188554: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x188554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x188558: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x188558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x18855c: 0xe6210124  swc1        $f1, 0x124($s1)
    ctx->pc = 0x18855cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x188560: 0xe6220128  swc1        $f2, 0x128($s1)
    ctx->pc = 0x188560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x188564: 0xe623012c  swc1        $f3, 0x12C($s1)
    ctx->pc = 0x188564u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x188568: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x188568u;
    SET_GPR_U32(ctx, 31, 0x188570u);
    ctx->pc = 0x18856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188568u;
    // 0x18856c: 0xe6240130  swc1        $f4, 0x130($s1) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x188568u, 0x188570u)) {
        return;
    }
    ctx->pc = 0x188570u;
label_188570:
    // 0x188570: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x188570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x188574: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x188574u;
    {
        const bool branch_taken_0x188574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188574) {
            ctx->pc = 0x188578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188574u;
            // 0x188578: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1885DCu;
            goto label_1885dc;
        }
    }
    ctx->pc = 0x18857Cu;
    // 0x18857c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18857cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188580:
    // 0x188580: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x188580u;
    {
        const bool branch_taken_0x188580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188580) {
            ctx->pc = 0x188584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188580u;
            // 0x188584: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1885D0u;
            goto label_1885d0;
        }
    }
    ctx->pc = 0x188588u;
    // 0x188588: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x188588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18858c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18858Cu;
        // 0x188590: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18858c) {
            ctx->pc = 0x18859Cu;
            goto label_18859c;
        }
    }
    ctx->pc = 0x188594u;
    // 0x188594: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188594u;
    {
        const bool branch_taken_0x188594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188594u;
        // 0x188598: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188594) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x18859Cu;
label_18859c:
    // 0x18859c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18859cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1885a0:
    // 0x1885a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1885a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1885a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B4u;
            goto label_1885b4;
        }
    }
    ctx->pc = 0x1885ACu;
    // 0x1885ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1885ACu;
    {
        const bool branch_taken_0x1885ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885ACu;
        // 0x1885b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885ac) {
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885B4u;
label_1885b4:
    // 0x1885b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1885b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1885b8:
    // 0x1885b8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1885B8u;
    SET_GPR_U32(ctx, 31, 0x1885C0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1885B8u, 0x1885C0u)) {
        return;
    }
    ctx->pc = 0x1885C0u;
label_1885c0:
    // 0x1885c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1885c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1885c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1885c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1885c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1885c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1885cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1885ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1885d0:
    // 0x1885d0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1885D0u;
    {
        const bool branch_taken_0x1885d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1885d0) {
            ctx->pc = 0x1885D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1885D0u;
            // 0x1885d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188580;
        }
    }
    ctx->pc = 0x1885D8u;
    // 0x1885d8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1885d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1885dc:
    // 0x1885dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1885dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1885e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1885e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1885e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1885e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1885e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1885e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1885ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1885ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1885F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885ECu;
        // 0x1885f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1885ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1885F4u;
    // 0x1885f4: 0x0  nop
    ctx->pc = 0x1885f4u;
    // NOP
    ctx->pc = 0x1885f8u;
}

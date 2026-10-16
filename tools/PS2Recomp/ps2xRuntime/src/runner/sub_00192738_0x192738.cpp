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

// Function: sub_00192738
// Address: 0x192738 - 0x192870
void sub_00192738_0x192738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192738_0x192738");
#endif

    switch (ctx->pc) {
        case 0x192754u: goto label_192754;
        case 0x192774u: goto label_192774;
        case 0x192788u: goto label_192788;
        case 0x1927a4u: goto label_1927a4;
        case 0x1927ccu: goto label_1927cc;
        case 0x1927f0u: goto label_1927f0;
        case 0x192814u: goto label_192814;
        case 0x192850u: goto label_192850;
        default: break;
    }

    ctx->pc = 0x192738u;

    // 0x192738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19273c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x192740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19274c: 0xc076200  jal         func_1D8800
    ctx->pc = 0x19274Cu;
    SET_GPR_U32(ctx, 31, 0x192754u);
    ctx->pc = 0x192750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19274Cu;
    // 0x192750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8800u, 0x19274Cu, 0x192754u)) {
        return;
    }
    ctx->pc = 0x192754u;
label_192754:
    // 0x192754: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x192754u;
    {
        const bool branch_taken_0x192754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192754u;
        // 0x192758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192754) {
            ctx->pc = 0x1927C4u;
            goto label_1927c4;
        }
    }
    ctx->pc = 0x19275Cu;
    // 0x19275c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x19275cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x192760: 0x8e248b40  lw          $a0, -0x74C0($s1)
    ctx->pc = 0x192760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B40u));
    // 0x192764: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x192764u;
    {
        const bool branch_taken_0x192764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192764u;
        // 0x192768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192764) {
            ctx->pc = 0x1927B0u;
            goto label_1927b0;
        }
    }
    ctx->pc = 0x19276Cu;
    // 0x19276c: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x19276Cu;
    SET_GPR_U32(ctx, 31, 0x192774u);
    ctx->pc = 0x192770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19276Cu;
    // 0x192770: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE070u, 0x19276Cu, 0x192774u)) {
        return;
    }
    ctx->pc = 0x192774u;
label_192774:
    // 0x192774: 0x8e028b48  lw          $v0, -0x74B8($s0)
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937416)));
    // 0x192778: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x192778u;
    {
        const bool branch_taken_0x192778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192778) {
            ctx->pc = 0x19277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192778u;
            // 0x19277c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19278Cu;
            goto label_19278c;
        }
    }
    ctx->pc = 0x192780u;
    // 0x192780: 0xc0603b6  jal         func_180ED8
    ctx->pc = 0x192780u;
    SET_GPR_U32(ctx, 31, 0x192788u);
    ctx->pc = 0x180ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180ED8u, 0x192780u, 0x192788u)) {
        return;
    }
    ctx->pc = 0x192788u;
label_192788:
    // 0x192788: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_19278c:
    // 0x19278c: 0xae008b48  sw          $zero, -0x74B8($s0)
    ctx->pc = 0x19278cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937416), GPR_U32(ctx, 0));
    // 0x192790: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x192790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x192794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192798: 0xae208b40  sw          $zero, -0x74C0($s1)
    ctx->pc = 0x192798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937408), GPR_U32(ctx, 0));
    // 0x19279c: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x19279Cu;
    SET_GPR_U32(ctx, 31, 0x1927A4u);
    ctx->pc = 0x1927A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19279Cu;
    // 0x1927a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x19279Cu, 0x1927A4u)) {
        return;
    }
    ctx->pc = 0x1927A4u;
label_1927a4:
    // 0x1927a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1927a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1927a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1927ac: 0xac628b38  sw          $v0, -0x74C8($v1)
    ctx->pc = 0x1927acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B38u, _value); } while (0);
label_1927b0:
    // 0x1927b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1927b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1927b4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1927b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1927b8: 0xac628b44  sw          $v0, -0x74BC($v1)
    ctx->pc = 0x1927b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B44u, _value); } while (0);
    // 0x1927bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1927BCu;
    {
        const bool branch_taken_0x1927bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927BCu;
        // 0x1927c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927bc) {
            ctx->pc = 0x192858u;
            goto label_192858;
        }
    }
    ctx->pc = 0x1927C4u;
label_1927c4:
    // 0x1927c4: 0xc0a4fa4  jal         func_293E90
    ctx->pc = 0x1927C4u;
    SET_GPR_U32(ctx, 31, 0x1927CCu);
    ctx->pc = 0x1927C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927C4u;
    // 0x1927c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293E90u, 0x1927C4u, 0x1927CCu)) {
        return;
    }
    ctx->pc = 0x1927CCu;
label_1927cc:
    // 0x1927cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1927ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927d0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1927d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1927d4: 0x8c628b44  lw          $v0, -0x74BC($v1)
    ctx->pc = 0x1927d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338B44u));
    // 0x1927d8: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1927D8u;
    {
        const bool branch_taken_0x1927d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D8u;
        // 0x1927dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927d8) {
            ctx->pc = 0x1927F4u;
            goto label_1927f4;
        }
    }
    ctx->pc = 0x1927E0u;
    // 0x1927e0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1927E0u;
    {
        const bool branch_taken_0x1927e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1927E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927E0u;
        // 0x1927e4: 0xac708b44  sw          $s0, -0x74BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937412), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927e0) {
            ctx->pc = 0x1927F4u;
            goto label_1927f4;
        }
    }
    ctx->pc = 0x1927E8u;
    // 0x1927e8: 0xc064930  jal         func_1924C0
    ctx->pc = 0x1927E8u;
    SET_GPR_U32(ctx, 31, 0x1927F0u);
    ctx->pc = 0x1924C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1924C0u, 0x1927E8u, 0x1927F0u)) {
        return;
    }
    ctx->pc = 0x1927F0u;
label_1927f0:
    // 0x1927f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1927f4:
    // 0x1927f4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1927F4u;
    {
        const bool branch_taken_0x1927f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1927F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927F4u;
        // 0x1927f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927f4) {
            ctx->pc = 0x192808u;
            goto label_192808;
        }
    }
    ctx->pc = 0x1927FCu;
    // 0x1927fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192800: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192800u;
    {
        const bool branch_taken_0x192800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x192800) {
            ctx->pc = 0x19280Cu;
            goto label_19280c;
        }
    }
    ctx->pc = 0x192808u;
label_192808:
    // 0x192808: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19280c:
    // 0x19280c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x19280Cu;
    SET_GPR_U32(ctx, 31, 0x192814u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x19280Cu, 0x192814u)) {
        return;
    }
    ctx->pc = 0x192814u;
label_192814:
    // 0x192814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192818: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19281c: 0x8c438b38  lw          $v1, -0x74C8($v0)
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338B38u));
    // 0x192820: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x192820u;
    {
        const bool branch_taken_0x192820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192820) {
            ctx->pc = 0x192824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192820u;
            // 0x192824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192848u;
            goto label_192848;
        }
    }
    ctx->pc = 0x192828u;
    // 0x192828: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x192828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19282c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x192830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192834: 0x0  nop
    ctx->pc = 0x192834u;
    // NOP
    // 0x192838: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19283c: 0x0  nop
    ctx->pc = 0x19283cu;
    // NOP
    // 0x192840: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192840u;
    {
        const bool branch_taken_0x192840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192840u;
        // 0x192844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192840) {
            ctx->pc = 0x192854u;
            goto label_192854;
        }
    }
    ctx->pc = 0x192848u;
label_192848:
    // 0x192848: 0xc06497a  jal         func_1925E8
    ctx->pc = 0x192848u;
    SET_GPR_U32(ctx, 31, 0x192850u);
    ctx->pc = 0x19284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192848u;
    // 0x19284c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1925E8u, 0x192848u, 0x192850u)) {
        return;
    }
    ctx->pc = 0x192850u;
label_192850:
    // 0x192850: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x192850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192854:
    // 0x192854: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x192854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192858:
    // 0x192858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19285c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19285cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192864: 0x3e00008  jr          $ra
    ctx->pc = 0x192864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192864u;
        // 0x192868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19286Cu;
    // 0x19286c: 0x0  nop
    ctx->pc = 0x19286cu;
    // NOP
    ctx->pc = 0x192870u;
}

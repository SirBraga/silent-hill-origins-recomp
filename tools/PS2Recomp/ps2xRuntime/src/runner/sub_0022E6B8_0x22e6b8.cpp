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

// Function: sub_0022E6B8
// Address: 0x22e6b8 - 0x22e840
void sub_0022E6B8_0x22e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E6B8_0x22e6b8");
#endif

    switch (ctx->pc) {
        case 0x22e6dcu: goto label_22e6dc;
        case 0x22e750u: goto label_22e750;
        case 0x22e788u: goto label_22e788;
        case 0x22e7a8u: goto label_22e7a8;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7c0u: goto label_22e7c0;
        case 0x22e828u: goto label_22e828;
        default: break;
    }

    ctx->pc = 0x22e6b8u;

    // 0x22e6b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e6bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e6c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6c8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x22e6c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22e6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6d4: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x22E6D4u;
    SET_GPR_U32(ctx, 31, 0x22E6DCu);
    ctx->pc = 0x22E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6D4u;
    // 0x22e6d8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x22E6D4u, 0x22E6DCu)) {
        return;
    }
    ctx->pc = 0x22E6DCu;
label_22e6dc:
    // 0x22e6dc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22e6e0: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x22e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22e6e4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x22e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x22e6e8: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x22e6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x22e6ec: 0x34638440  ori         $v1, $v1, 0x8440
    ctx->pc = 0x22e6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33856);
    // 0x22e6f0: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x22e6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x22e6f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22e6f8: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x22e6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x22e6fc: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x22e6fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22e700: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x22e700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x22e704: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22e708: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22e70c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22e710: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x22e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x22e714: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x22e714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x22e718: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x22e718u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22e71c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x22e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x22e720: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22e724: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22e728: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22e728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e72c: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x22e72cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x22e730: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x22e730u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x22e734: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22e734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22e738: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x22e738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x22e73c: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x22e73cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x22e740: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x22e740u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x22e744: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22e744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22e748: 0x70632389  pcpyld      $a0, $v1, $v1
    ctx->pc = 0x22e748u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x22e74c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22e74cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e750:
    // 0x22e750: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x22e750u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x22e754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e758: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x22e758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x22e75c: 0x0  nop
    ctx->pc = 0x22e75cu;
    // NOP
    // 0x22e760: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22E760u;
    {
        const bool branch_taken_0x22e760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E760u;
        // 0x22e764: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e760) {
            ctx->pc = 0x22E750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E768u;
    // 0x22e768: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e76c: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x22e76cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22e770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e774: 0x90423f08  lbu         $v0, 0x3F08($v0)
    ctx->pc = 0x22e774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3F08u));
    // 0x22e778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E778u;
    {
        const bool branch_taken_0x22e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E778u;
        // 0x22e77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e778) {
            ctx->pc = 0x22E790u;
            goto label_22e790;
        }
    }
    ctx->pc = 0x22E780u;
    // 0x22e780: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22E780u;
    SET_GPR_U32(ctx, 31, 0x22E788u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22E780u, 0x22E788u)) {
        return;
    }
    ctx->pc = 0x22E788u;
label_22e788:
    // 0x22e788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e78c: 0x0  nop
    ctx->pc = 0x22e78cu;
    // NOP
label_22e790:
    // 0x22e790: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x22e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x22e794: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E794u;
    {
        const bool branch_taken_0x22e794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E794u;
        // 0x22e798: 0xa3828e98  sb          $v0, -0x7168($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e794) {
            ctx->pc = 0x22E7B0u;
            goto label_22e7b0;
        }
    }
    ctx->pc = 0x22E79Cu;
    // 0x22e79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7a0: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x22E7A0u;
    SET_GPR_U32(ctx, 31, 0x22E7A8u);
    ctx->pc = 0x22E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7A0u;
    // 0x22e7a4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x22E7A0u, 0x22E7A8u)) {
        return;
    }
    ctx->pc = 0x22E7A8u;
label_22e7a8:
    // 0x22e7a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22E7A8u;
    {
        const bool branch_taken_0x22e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7a8) {
            ctx->pc = 0x22E7C0u;
            goto label_22e7c0;
        }
    }
    ctx->pc = 0x22E7B0u;
label_22e7b0:
    // 0x22e7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7b4: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x22E7B4u;
    SET_GPR_U32(ctx, 31, 0x22E7BCu);
    ctx->pc = 0x22E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7B4u;
    // 0x22e7b8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x22E7B4u, 0x22E7BCu)) {
        return;
    }
    ctx->pc = 0x22E7BCu;
label_22e7bc:
    // 0x22e7bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_22e7c0:
    // 0x22e7c0: 0x42000039  di
    ctx->pc = 0x22e7c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x22e7c4: 0x40f  sync.p
    ctx->pc = 0x22e7c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22e7c8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x22e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x22e7cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22e7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e7d0: 0x0  nop
    ctx->pc = 0x22e7d0u;
    // NOP
    // 0x22e7d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22E7D4u;
    {
        const bool branch_taken_0x22e7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e7d4) {
            ctx->pc = 0x22E7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e7c0;
        }
    }
    ctx->pc = 0x22E7DCu;
    // 0x22e7dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e7e0: 0x9063415d  lbu         $v1, 0x415D($v1)
    ctx->pc = 0x22e7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B415Du));
    // 0x22e7e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e7e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e7ec: 0xa023415d  sb          $v1, 0x415D($at)
    ctx->pc = 0x22e7ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B415Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B415Du, _value); } while (0);
    // 0x22e7f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e7f4: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e7f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22E7F8u;
    {
        const bool branch_taken_0x22e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e7f8) {
            ctx->pc = 0x22E828u;
            goto label_22e828;
        }
    }
    ctx->pc = 0x22E800u;
    // 0x22e800: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e804: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22e804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x22e808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E808u;
    {
        const bool branch_taken_0x22e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e808) {
            ctx->pc = 0x22E828u;
            goto label_22e828;
        }
    }
    ctx->pc = 0x22E810u;
    // 0x22e810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e814: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E818u;
    {
        const bool branch_taken_0x22e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e818) {
            ctx->pc = 0x22E828u;
            goto label_22e828;
        }
    }
    ctx->pc = 0x22E820u;
    // 0x22e820: 0xc08b518  jal         func_22D460
    ctx->pc = 0x22E820u;
    SET_GPR_U32(ctx, 31, 0x22E828u);
    ctx->pc = 0x22E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E820u;
    // 0x22e824: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D460u, 0x22E820u, 0x22E828u)) {
        return;
    }
    ctx->pc = 0x22E828u;
label_22e828:
    // 0x22e828: 0x42000038  ei
    ctx->pc = 0x22e828u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x22e82c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e838: 0x3e00008  jr          $ra
    ctx->pc = 0x22E838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E838u;
        // 0x22e83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E840u;
}

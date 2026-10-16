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

// Function: sub_001798A8
// Address: 0x1798a8 - 0x179a18
void sub_001798A8_0x1798a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001798A8_0x1798a8");
#endif

    switch (ctx->pc) {
        case 0x1798d8u: goto label_1798d8;
        case 0x1798e8u: goto label_1798e8;
        case 0x1798f8u: goto label_1798f8;
        case 0x179908u: goto label_179908;
        case 0x179914u: goto label_179914;
        case 0x179920u: goto label_179920;
        case 0x17992cu: goto label_17992c;
        case 0x179938u: goto label_179938;
        case 0x179944u: goto label_179944;
        case 0x179950u: goto label_179950;
        case 0x17995cu: goto label_17995c;
        case 0x179968u: goto label_179968;
        case 0x179974u: goto label_179974;
        case 0x179980u: goto label_179980;
        case 0x17998cu: goto label_17998c;
        case 0x1799a8u: goto label_1799a8;
        case 0x179a04u: goto label_179a04;
        default: break;
    }

    ctx->pc = 0x1798a8u;

    // 0x1798a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1798a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1798ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1798acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1798b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1798b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1798b4: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x1798b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
    // 0x1798b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1798b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1798bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1798bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1798c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1798c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1798c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798c8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1798c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1798cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1798ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1798d0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1798D0u;
    SET_GPR_U32(ctx, 31, 0x1798D8u);
    ctx->pc = 0x1798D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798D0u;
    // 0x1798d4: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1798D0u, 0x1798D8u)) {
        return;
    }
    ctx->pc = 0x1798D8u;
label_1798d8:
    // 0x1798d8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1798d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1798dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1798dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1798E0u;
    SET_GPR_U32(ctx, 31, 0x1798E8u);
    ctx->pc = 0x1798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798E0u;
    // 0x1798e4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1798E0u, 0x1798E8u)) {
        return;
    }
    ctx->pc = 0x1798E8u;
label_1798e8:
    // 0x1798e8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1798e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1798ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1798ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798f0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1798F0u;
    SET_GPR_U32(ctx, 31, 0x1798F8u);
    ctx->pc = 0x1798F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798F0u;
    // 0x1798f4: 0x24a58908  addiu       $a1, $a1, -0x76F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1798F0u, 0x1798F8u)) {
        return;
    }
    ctx->pc = 0x1798F8u;
label_1798f8:
    // 0x1798f8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1798fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1798fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179900: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x179900u;
    SET_GPR_U32(ctx, 31, 0x179908u);
    ctx->pc = 0x179904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179900u;
    // 0x179904: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x179900u, 0x179908u)) {
        return;
    }
    ctx->pc = 0x179908u;
label_179908:
    // 0x179908: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17990c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17990Cu;
    SET_GPR_U32(ctx, 31, 0x179914u);
    ctx->pc = 0x179910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17990Cu;
    // 0x179910: 0x2484f880  addiu       $a0, $a0, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17990Cu, 0x179914u)) {
        return;
    }
    ctx->pc = 0x179914u;
label_179914:
    // 0x179914: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179918: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179918u;
    SET_GPR_U32(ctx, 31, 0x179920u);
    ctx->pc = 0x17991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179918u;
    // 0x17991c: 0x2484f888  addiu       $a0, $a0, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179918u, 0x179920u)) {
        return;
    }
    ctx->pc = 0x179920u;
label_179920:
    // 0x179920: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179924: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179924u;
    SET_GPR_U32(ctx, 31, 0x17992Cu);
    ctx->pc = 0x179928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179924u;
    // 0x179928: 0x2484f890  addiu       $a0, $a0, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179924u, 0x17992Cu)) {
        return;
    }
    ctx->pc = 0x17992Cu;
label_17992c:
    // 0x17992c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17992cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179930: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179930u;
    SET_GPR_U32(ctx, 31, 0x179938u);
    ctx->pc = 0x179934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179930u;
    // 0x179934: 0x2484f898  addiu       $a0, $a0, -0x768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179930u, 0x179938u)) {
        return;
    }
    ctx->pc = 0x179938u;
label_179938:
    // 0x179938: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17993c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17993Cu;
    SET_GPR_U32(ctx, 31, 0x179944u);
    ctx->pc = 0x179940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17993Cu;
    // 0x179940: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17993Cu, 0x179944u)) {
        return;
    }
    ctx->pc = 0x179944u;
label_179944:
    // 0x179944: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179948: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179948u;
    SET_GPR_U32(ctx, 31, 0x179950u);
    ctx->pc = 0x17994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179948u;
    // 0x17994c: 0x2484f8a8  addiu       $a0, $a0, -0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179948u, 0x179950u)) {
        return;
    }
    ctx->pc = 0x179950u;
label_179950:
    // 0x179950: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179954: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179954u;
    SET_GPR_U32(ctx, 31, 0x17995Cu);
    ctx->pc = 0x179958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179954u;
    // 0x179958: 0x2484f8b0  addiu       $a0, $a0, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179954u, 0x17995Cu)) {
        return;
    }
    ctx->pc = 0x17995Cu;
label_17995c:
    // 0x17995c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179960: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179960u;
    SET_GPR_U32(ctx, 31, 0x179968u);
    ctx->pc = 0x179964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179960u;
    // 0x179964: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179960u, 0x179968u)) {
        return;
    }
    ctx->pc = 0x179968u;
label_179968:
    // 0x179968: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17996c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17996Cu;
    SET_GPR_U32(ctx, 31, 0x179974u);
    ctx->pc = 0x179970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17996Cu;
    // 0x179970: 0x2484f8c0  addiu       $a0, $a0, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17996Cu, 0x179974u)) {
        return;
    }
    ctx->pc = 0x179974u;
label_179974:
    // 0x179974: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179978: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179978u;
    SET_GPR_U32(ctx, 31, 0x179980u);
    ctx->pc = 0x17997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179978u;
    // 0x17997c: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179978u, 0x179980u)) {
        return;
    }
    ctx->pc = 0x179980u;
label_179980:
    // 0x179980: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179984: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x179984u;
    SET_GPR_U32(ctx, 31, 0x17998Cu);
    ctx->pc = 0x179988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179984u;
    // 0x179988: 0x2484f8d0  addiu       $a0, $a0, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x179984u, 0x17998Cu)) {
        return;
    }
    ctx->pc = 0x17998Cu;
label_17998c:
    // 0x17998c: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x17998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x179990: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x179994: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x179994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
    // 0x179998: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x179998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17999c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17999Cu;
    {
        const bool branch_taken_0x17999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17999Cu;
        // 0x1799a0: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17999c) {
            ctx->pc = 0x1799F8u;
            goto label_1799f8;
        }
    }
    ctx->pc = 0x1799A4u;
    // 0x1799a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1799a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1799a8:
    // 0x1799a8: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1799A8u;
    {
        const bool branch_taken_0x1799a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1799a8) {
            ctx->pc = 0x1799ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799A8u;
            // 0x1799ac: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799F0u;
            goto label_1799f0;
        }
    }
    ctx->pc = 0x1799B0u;
    // 0x1799b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1799b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1799B4u;
    {
        const bool branch_taken_0x1799b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799B4u;
        // 0x1799b8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799b4) {
            ctx->pc = 0x1799C4u;
            goto label_1799c4;
        }
    }
    ctx->pc = 0x1799BCu;
    // 0x1799bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1799BCu;
    {
        const bool branch_taken_0x1799bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799BCu;
        // 0x1799c0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799bc) {
            ctx->pc = 0x1799C8u;
            goto label_1799c8;
        }
    }
    ctx->pc = 0x1799C4u;
label_1799c4:
    // 0x1799c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1799c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1799c8:
    // 0x1799c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1799c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1799cc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1799CCu;
    {
        const bool branch_taken_0x1799cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799CCu;
        // 0x1799d0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799cc) {
            ctx->pc = 0x1799DCu;
            goto label_1799dc;
        }
    }
    ctx->pc = 0x1799D4u;
    // 0x1799d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1799D4u;
    {
        const bool branch_taken_0x1799d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799D4u;
        // 0x1799d8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799d4) {
            ctx->pc = 0x1799E0u;
            goto label_1799e0;
        }
    }
    ctx->pc = 0x1799DCu;
label_1799dc:
    // 0x1799dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1799dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1799e0:
    // 0x1799e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1799e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1799e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1799e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1799e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1799e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1799ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1799ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1799f0:
    // 0x1799f0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1799F0u;
    {
        const bool branch_taken_0x1799f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1799f0) {
            ctx->pc = 0x1799F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799F0u;
            // 0x1799f4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1799a8;
        }
    }
    ctx->pc = 0x1799F8u;
label_1799f8:
    // 0x1799f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1799f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799fc: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1799FCu;
    SET_GPR_U32(ctx, 31, 0x179A04u);
    ctx->pc = 0x179A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799FCu;
    // 0x179a00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1799FCu, 0x179A04u)) {
        return;
    }
    ctx->pc = 0x179A04u;
label_179a04:
    // 0x179a04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x179a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179a10: 0x3e00008  jr          $ra
    ctx->pc = 0x179A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A10u;
        // 0x179a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A18u;
}

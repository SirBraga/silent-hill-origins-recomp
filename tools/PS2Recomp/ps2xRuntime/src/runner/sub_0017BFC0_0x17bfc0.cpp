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

// Function: sub_0017BFC0
// Address: 0x17bfc0 - 0x17c210
void sub_0017BFC0_0x17bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BFC0_0x17bfc0");
#endif

    switch (ctx->pc) {
        case 0x17bfdcu: goto label_17bfdc;
        case 0x17bff0u: goto label_17bff0;
        case 0x17c008u: goto label_17c008;
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0b8u: goto label_17c0b8;
        case 0x17c1ecu: goto label_17c1ec;
        default: break;
    }

    ctx->pc = 0x17bfc0u;

    // 0x17bfc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bfc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17bfc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17bfcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bfd4: 0xc05c6d2  jal         func_171B48
    ctx->pc = 0x17BFD4u;
    SET_GPR_U32(ctx, 31, 0x17BFDCu);
    ctx->pc = 0x17BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFD4u;
    // 0x17bfd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171B48u, 0x17BFD4u, 0x17BFDCu)) {
        return;
    }
    ctx->pc = 0x17BFDCu;
label_17bfdc:
    // 0x17bfdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17bfe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfe4: 0x8c46f8d8  lw          $a2, -0x728($v0)
    ctx->pc = 0x17bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF8D8u));
    // 0x17bfe8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17BFE8u;
    SET_GPR_U32(ctx, 31, 0x17BFF0u);
    ctx->pc = 0x17BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFE8u;
    // 0x17bfec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17BFE8u, 0x17BFF0u)) {
        return;
    }
    ctx->pc = 0x17BFF0u;
label_17bff0:
    // 0x17bff0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bff4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bff8: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x17BFF8u;
    {
        const bool branch_taken_0x17bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFF8u;
        // 0x17bffc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bff8) {
            ctx->pc = 0x17C200u;
            goto label_17c200;
        }
    }
    ctx->pc = 0x17C000u;
    // 0x17c000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c004: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17c004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17c008:
    // 0x17c008: 0x2c830011  sltiu       $v1, $a0, 0x11
    ctx->pc = 0x17c008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x17c00c: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x17C00Cu;
    {
        const bool branch_taken_0x17c00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C00Cu;
        // 0x17c010: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c00c) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C014u;
    // 0x17c014: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17c014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17c018: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
    // 0x17c01c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c024: 0x800008  jr          $a0
    ctx->pc = 0x17C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C02Cu: goto label_17c02c;
            case 0x17C050u: goto label_17c050;
            case 0x17C074u: goto label_17c074;
            case 0x17C084u: goto label_17c084;
            case 0x17C0A4u: goto label_17c0a4;
            case 0x17C0C0u: goto label_17c0c0;
            case 0x17C0D0u: goto label_17c0d0;
            case 0x17C0E4u: goto label_17c0e4;
            case 0x17C0F4u: goto label_17c0f4;
            case 0x17C104u: goto label_17c104;
            case 0x17C114u: goto label_17c114;
            case 0x17C124u: goto label_17c124;
            case 0x17C148u: goto label_17c148;
            case 0x17C16Cu: goto label_17c16c;
            case 0x17C190u: goto label_17c190;
            case 0x17C1A0u: goto label_17c1a0;
            case 0x17C1C0u: goto label_17c1c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C024u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17C02Cu;
label_17c02c:
    // 0x17c02c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c030: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17c034: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x17C034u;
    {
        const bool branch_taken_0x17c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C034u;
        // 0x17c038: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c034) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C03Cu;
    // 0x17c03c: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c040: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x17C040u;
    {
        const bool branch_taken_0x17c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c040) {
            ctx->pc = 0x17C044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C040u;
            // 0x17c044: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C048u;
    // 0x17c048: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x17C048u;
    {
        const bool branch_taken_0x17c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C048u;
        // 0x17c04c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c048) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C050u;
label_17c050:
    // 0x17c050: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c054: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x17c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17c058: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x17C058u;
    {
        const bool branch_taken_0x17c058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C058u;
        // 0x17c05c: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c058) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C060u;
    // 0x17c060: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c064: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x17C064u;
    {
        const bool branch_taken_0x17c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c064) {
            ctx->pc = 0x17C068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C064u;
            // 0x17c068: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C06Cu;
    // 0x17c06c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x17C06Cu;
    {
        const bool branch_taken_0x17c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C06Cu;
        // 0x17c070: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c06c) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C074u;
label_17c074:
    // 0x17c074: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x17c074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c078: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x17c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x17c07c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17C07Cu;
    {
        const bool branch_taken_0x17c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C07Cu;
        // 0x17c080: 0x262500f8  addiu       $a1, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c07c) {
            ctx->pc = 0x17C090u;
            goto label_17c090;
        }
    }
    ctx->pc = 0x17C084u;
label_17c084:
    // 0x17c084: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x17c084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c088: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x17c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x17c08c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_17c090:
    // 0x17c090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c094: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x17C094u;
    SET_GPR_U32(ctx, 31, 0x17C09Cu);
    ctx->pc = 0x17C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C094u;
    // 0x17c098: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x17C094u, 0x17C09Cu)) {
        return;
    }
    ctx->pc = 0x17C09Cu;
label_17c09c:
    // 0x17c09c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17C09Cu;
    {
        const bool branch_taken_0x17c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C09Cu;
        // 0x17c0a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c09c) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C0A4u;
label_17c0a4:
    // 0x17c0a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0a8: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x17c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x17c0ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0b0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x17C0B0u;
    SET_GPR_U32(ctx, 31, 0x17C0B8u);
    ctx->pc = 0x17C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0B0u;
    // 0x17c0b4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x17C0B0u, 0x17C0B8u)) {
        return;
    }
    ctx->pc = 0x17C0B8u;
label_17c0b8:
    // 0x17c0b8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17C0B8u;
    {
        const bool branch_taken_0x17c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B8u;
        // 0x17c0bc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0b8) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C0C0u;
label_17c0c0:
    // 0x17c0c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17c0c8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17C0C8u;
    {
        const bool branch_taken_0x17c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0C8u;
        // 0x17c0cc: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0c8) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C0D0u;
label_17c0d0:
    // 0x17c0d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c0d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17c0d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c0dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17C0DCu;
    {
        const bool branch_taken_0x17c0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0DCu;
        // 0x17c0e0: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0dc) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C0E4u;
label_17c0e4:
    // 0x17c0e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17c0ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17C0ECu;
    {
        const bool branch_taken_0x17c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0ECu;
        // 0x17c0f0: 0xae230150  sw          $v1, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0ec) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C0F4u;
label_17c0f4:
    // 0x17c0f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c0fc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17C0FCu;
    {
        const bool branch_taken_0x17c0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0FCu;
        // 0x17c100: 0xe6200154  swc1        $f0, 0x154($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0fc) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C104u;
label_17c104:
    // 0x17c104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c108: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17c10c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17C10Cu;
    {
        const bool branch_taken_0x17c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C10Cu;
        // 0x17c110: 0xae23013c  sw          $v1, 0x13C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c10c) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C114u;
label_17c114:
    // 0x17c114: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c118: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c11c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17C11Cu;
    {
        const bool branch_taken_0x17c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C11Cu;
        // 0x17c120: 0xe6200140  swc1        $f0, 0x140($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c11c) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C124u;
label_17c124:
    // 0x17c124: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c128: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x17c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17c12c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x17C12Cu;
    {
        const bool branch_taken_0x17c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C12Cu;
        // 0x17c130: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c12c) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C134u;
    // 0x17c134: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x17c134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c138: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x17C138u;
    {
        const bool branch_taken_0x17c138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c138) {
            ctx->pc = 0x17C13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C138u;
            // 0x17c13c: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C140u;
    // 0x17c140: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17C140u;
    {
        const bool branch_taken_0x17c140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C140u;
        // 0x17c144: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c140) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C148u;
label_17c148:
    // 0x17c148: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c14c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17c150: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17C150u;
    {
        const bool branch_taken_0x17c150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C150u;
        // 0x17c154: 0xae220164  sw          $v0, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c150) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C158u;
    // 0x17c158: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c15c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x17C15Cu;
    {
        const bool branch_taken_0x17c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c15c) {
            ctx->pc = 0x17C160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C15Cu;
            // 0x17c160: 0xae200164  sw          $zero, 0x164($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C164u;
    // 0x17c164: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17C164u;
    {
        const bool branch_taken_0x17c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C164u;
        // 0x17c168: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c164) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C16Cu;
label_17c16c:
    // 0x17c16c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c170: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x17c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17c174: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17C174u;
    {
        const bool branch_taken_0x17c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C174u;
        // 0x17c178: 0xae220168  sw          $v0, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c174) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C17Cu;
    // 0x17c17c: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x17c17cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c180: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C180u;
    {
        const bool branch_taken_0x17c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c180) {
            ctx->pc = 0x17C184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C180u;
            // 0x17c184: 0xae200168  sw          $zero, 0x168($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C188u;
    // 0x17c188: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C188u;
    {
        const bool branch_taken_0x17c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C188u;
        // 0x17c18c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c188) {
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C190u;
label_17c190:
    // 0x17c190: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c194: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17c198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17C198u;
    {
        const bool branch_taken_0x17c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C198u;
        // 0x17c19c: 0xae22016c  sw          $v0, 0x16C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c198) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C1A0u;
label_17c1a0:
    // 0x17c1a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c1a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17c1a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C1A8u;
    {
        const bool branch_taken_0x17c1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1A8u;
        // 0x17c1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1a8) {
            ctx->pc = 0x17C1B8u;
            goto label_17c1b8;
        }
    }
    ctx->pc = 0x17C1B0u;
    // 0x17c1b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C1B0u;
    {
        const bool branch_taken_0x17c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1B0u;
        // 0x17c1b4: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1b0) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C1B8u;
label_17c1b8:
    // 0x17c1b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17C1B8u;
    {
        const bool branch_taken_0x17c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1B8u;
        // 0x17c1bc: 0xae200148  sw          $zero, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1b8) {
            ctx->pc = 0x17C1D0u;
            goto label_17c1d0;
        }
    }
    ctx->pc = 0x17C1C0u;
label_17c1c0:
    // 0x17c1c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c1c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c1c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17c1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c1cc: 0xae220114  sw          $v0, 0x114($s1)
    ctx->pc = 0x17c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
label_17c1d0:
    // 0x17c1d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17c1d4:
    // 0x17c1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c1e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c1e4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17C1E4u;
    SET_GPR_U32(ctx, 31, 0x17C1ECu);
    ctx->pc = 0x17C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C1E4u;
    // 0x17c1e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17C1E4u, 0x17C1ECu)) {
        return;
    }
    ctx->pc = 0x17C1ECu;
label_17c1ec:
    // 0x17c1ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c1f4: 0x5460ff84  bnel        $v1, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x17C1F4u;
    {
        const bool branch_taken_0x17c1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c1f4) {
            ctx->pc = 0x17C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C1F4u;
            // 0x17c1f8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c008;
        }
    }
    ctx->pc = 0x17C1FCu;
    // 0x17c1fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17c1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c200:
    // 0x17c200: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c208: 0x3e00008  jr          $ra
    ctx->pc = 0x17C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C208u;
        // 0x17c20c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C210u;
}

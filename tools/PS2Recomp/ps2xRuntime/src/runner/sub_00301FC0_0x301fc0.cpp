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

// Function: sub_00301FC0
// Address: 0x301fc0 - 0x302060
void sub_00301FC0_0x301fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301FC0_0x301fc0");
#endif

    switch (ctx->pc) {
        case 0x301ff0u: goto label_301ff0;
        case 0x301ffcu: goto label_301ffc;
        case 0x302008u: goto label_302008;
        case 0x302014u: goto label_302014;
        case 0x302020u: goto label_302020;
        case 0x30202cu: goto label_30202c;
        case 0x302038u: goto label_302038;
        case 0x302048u: goto label_302048;
        default: break;
    }

    ctx->pc = 0x301fc0u;

    // 0x301fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x301fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x301fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x301fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x301fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x301fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fd8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x301fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x301fdc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x301fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x301fe0: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x301fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x301fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301fe8: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301FE8u;
    SET_GPR_U32(ctx, 31, 0x301FF0u);
    ctx->pc = 0x301FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FE8u;
    // 0x301fec: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301FE8u, 0x301FF0u)) {
        return;
    }
    ctx->pc = 0x301FF0u;
label_301ff0:
    // 0x301ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ff4: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301FF4u;
    SET_GPR_U32(ctx, 31, 0x301FFCu);
    ctx->pc = 0x301FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FF4u;
    // 0x301ff8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301FF4u, 0x301FFCu)) {
        return;
    }
    ctx->pc = 0x301FFCu;
label_301ffc:
    // 0x301ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302000: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302000u;
    SET_GPR_U32(ctx, 31, 0x302008u);
    ctx->pc = 0x302004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302000u;
    // 0x302004: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302000u, 0x302008u)) {
        return;
    }
    ctx->pc = 0x302008u;
label_302008:
    // 0x302008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30200c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30200Cu;
    SET_GPR_U32(ctx, 31, 0x302014u);
    ctx->pc = 0x302010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30200Cu;
    // 0x302010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30200Cu, 0x302014u)) {
        return;
    }
    ctx->pc = 0x302014u;
label_302014:
    // 0x302014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302018: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302018u;
    SET_GPR_U32(ctx, 31, 0x302020u);
    ctx->pc = 0x30201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302018u;
    // 0x30201c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302018u, 0x302020u)) {
        return;
    }
    ctx->pc = 0x302020u;
label_302020:
    // 0x302020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302024: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302024u;
    SET_GPR_U32(ctx, 31, 0x30202Cu);
    ctx->pc = 0x302028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302024u;
    // 0x302028: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302024u, 0x30202Cu)) {
        return;
    }
    ctx->pc = 0x30202Cu;
label_30202c:
    // 0x30202c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302030: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302030u;
    SET_GPR_U32(ctx, 31, 0x302038u);
    ctx->pc = 0x302034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302030u;
    // 0x302034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302030u, 0x302038u)) {
        return;
    }
    ctx->pc = 0x302038u;
label_302038:
    // 0x302038: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x302038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x30203c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302040: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302040u;
    SET_GPR_U32(ctx, 31, 0x302048u);
    ctx->pc = 0x302044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302040u;
    // 0x302044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302040u, 0x302048u)) {
        return;
    }
    ctx->pc = 0x302048u;
label_302048:
    // 0x302048: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x302048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x30204c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302058: 0x80c097e  j           func_3025F8
    ctx->pc = 0x302058u;
    ctx->pc = 0x30205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302058u;
    // 0x30205c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3025F8u;
    sub_003025F8_0x3025f8(rdram, ctx, runtime); return;
    ctx->pc = 0x302060u;
}
